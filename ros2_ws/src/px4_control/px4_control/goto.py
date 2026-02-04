#!/usr/bin/env python3
import rclpy
import time
from rclpy.node import Node
from mavros_msgs.msg import State
from geometry_msgs.msg import PoseStamped
from mavros_msgs.srv import CommandBool, SetMode
from service_interface.srv import Move
from service_interface.srv import Takeoff
from rclpy.qos import QoSProfile, ReliabilityPolicy, HistoryPolicy

# string direction  # 方向：forward, backward, left, right
# float32 distance  
# float32 speed     #（可选）
# ---
# bool success      
# string message    

class GoToPoint(Node):
    def __init__(self):
        super().__init__('drone_move')

        # --- 状态变量 ---
        self.state = State()             # 保存无人机当前状态
        self.current_pose = PoseStamped() # 保存无人机当前位置
        self.last_log_time = 0.0         # 限制打印距离信息频率
        self.arming_client = self.create_client(CommandBool, '/mavros/cmd/arming')
        self.set_mode_client = self.create_client(SetMode, '/mavros/set_mode')

        # --- 目标点坐标（可根据需要修改） ---
        self.target_pose = PoseStamped()
        self.target_pose.pose.position.x = 0.0
        self.target_pose.pose.position.y = 0.0
        self.target_pose.pose.position.z = 0.0
        self.offboard_started = False
        self.takeoff = False

        # --- 发布 setpoint ---
        # 将期望位置发布到 /mavros/setpoint_position/local
        setpoint_qos = QoSProfile(
            reliability=ReliabilityPolicy.BEST_EFFORT,
            history=HistoryPolicy.KEEP_LAST,
            depth=10)
    
        self.pose_pub = self.create_publisher(PoseStamped, '/mavros/setpoint_position/local', setpoint_qos)
        self.create_service(Move,'/drone_move',self.move_callback)
        self.create_service(Takeoff,'/drone_takeoff',self.takeoff_callback)
        self.get_logger().info('服务创建成功')
        # --- 订阅无人机状态和当前位置 ---
        self.state_sub = self.create_subscription(State, '/mavros/state', self.state_cb, 10)
        self.pose_sub = self.create_subscription(PoseStamped, '/mavros/local_position/pose', self.pose_cb, 10)

        # --- 定时器 ---
        # 每 0.1s 执行一次 timer_cb
        self.timer = self.create_timer(0.1, self.timer_cb)

        self.get_logger().info("🧭 GoToPoint node initialized, waiting for PX4 connection...")

    # ------------------ 回调函数 ------------------
    def takeoff_callback(self,request,response):
        if request.hight > 0:
            self.target_pose.pose.position.z += request.hight
        else:
            self.target_pose.pose.position.z += 2.0
        self.takeoff = True
        self.get_logger().info('成功接收起飞任务')
        return response 
    

    def state_cb(self, msg):
        """状态回调函数，更新无人机状态"""
        self.state = msg

    def pose_cb(self, msg):
        """位置回调函数，更新无人机当前位置"""
        self.current_pose = msg

    def timer_cb(self):
        """定时器回调函数，发布目标位置并计算与目标的距离"""
        # 发布目标点
        self.pose_pub.publish(self.target_pose)

        # 计算当前到目标点的欧氏距离
        dx = self.target_pose.pose.position.x - self.current_pose.pose.position.x
        dy = self.target_pose.pose.position.y - self.current_pose.pose.position.y
        dz = self.target_pose.pose.position.z - self.current_pose.pose.position.z
        dist = (dx**2 + dy**2 + dz**2) ** 0.5

        # # 每 2 秒打印一次距离信息，防止频繁输出
        # if time.time() - self.last_log_time > 2.0:
        #     self.get_logger().info(f"Distance to target: {dist:.2f} m")
        #     self.last_log_time = time.time()

        # 当无人机到达目标点
        # if dist < 0.3:
        #     self.get_logger().info("✅ Arrived at target point!")
        # self.get_logger().info(self.state.mode)
        if not self.offboard_started  != "OFFBOARD":
            # 尝试切换为 OFFBOARD 模式
            if self.set_mode_client.wait_for_service(timeout_sec=1.0):
                mode_req = SetMode.Request()
                mode_req.custom_mode = 'OFFBOARD'
                self.set_mode_client.call_async(mode_req)
                self.get_logger().info("尝试切换到 OFFBOARD 模式...")
        if not self.state.armed:
            # 尝试解锁无人机
            if self.arming_client.wait_for_service(timeout_sec=1.0):
                arm_req = CommandBool.Request()
                arm_req.value = True
                self.arming_client.call_async(arm_req)
                self.get_logger().info("尝试解锁无人机...")
        if self.state.mode == "OFFBOARD" and not self.offboard_started:
            # 标记已启动 OFFBOARD 模式
            self.offboard_started = True
            self.get_logger().info("✅ OFFBOARD mode 切换成功!")
        
    def move_callback(self,request,response):
        # if request.speed:
        #     speed = request.speed
        # else:
        #     speed = 1
        if request.direction:
            direction = request.direction
        else:
            direction = None
        if request.distance:
            distance = request.distance
        else:
            distance = None

        if  direction != None and distance != None:
            if direction == "forward":
                self.target_pose.pose.position.x = self.target_pose.pose.position.x + request.distance
            elif request.direction == "backward":
                self.target_pose.pose.position.x = self.target_pose.pose.position.x - request.distance
            elif request.direction == "left":
                self.target_pose.pose.position.y = self.target_pose.pose.position.y + request.distance
            elif request.direction == "right":
                self.target_pose.pose.position.y = self.target_pose.pose.position.y - request.distance
            elif request.direction == "up":
                self.target_pose.pose.position.z = self.target_pose.pose.position.z + request.distance
            elif request.direction == "down":
                self.target_pose.pose.position.z = max(0.5, self.target_pose.pose.position.z - request.distance)
        return response 
# ------------------ 主函数 ------------------

def main(args=None):
    rclpy.init(args=args)
    node = GoToPoint()
    try:
        rclpy.spin(node)  # 阻塞运行节点，处理回调
    except KeyboardInterrupt:
        node.get_logger().info("🛑 GoToPoint node stopped by user.")
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()