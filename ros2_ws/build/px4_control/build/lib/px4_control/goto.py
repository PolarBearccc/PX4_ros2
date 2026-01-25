#!/usr/bin/env python3
import rclpy
import time
from rclpy.node import Node
from mavros_msgs.msg import State
from geometry_msgs.msg import PoseStamped


class GoToPoint(Node):
    def __init__(self):
        super().__init__('goto_point')

        # --- 状态变量 ---
        self.state = State()             # 保存无人机当前状态
        self.current_pose = PoseStamped() # 保存无人机当前位置
        self.last_log_time = 0.0         # 限制打印距离信息频率

        # --- 目标点坐标（可根据需要修改） ---
        self.target_pose = PoseStamped()
        self.target_pose.pose.position.x = 5.0
        self.target_pose.pose.position.y = 3.0
        self.target_pose.pose.position.z = 2.0  # 目标高度 2m

        # --- 发布 setpoint ---
        # 将期望位置发布到 /mavros/setpoint_position/local
        self.pose_pub = self.create_publisher(PoseStamped, '/mavros/setpoint_position/local', 10)

        # --- 订阅无人机状态和当前位置 ---
        self.state_sub = self.create_subscription(State, '/mavros/state', self.state_cb, 10)
        self.pose_sub = self.create_subscription(PoseStamped, '/mavros/local_position/pose', self.pose_cb, 10)

        # --- 定时器 ---
        # 每 0.1s 执行一次 timer_cb
        self.timer = self.create_timer(0.1, self.timer_cb)

        self.get_logger().info("🧭 GoToPoint node initialized, waiting for PX4 connection...")

    # ------------------ 回调函数 ------------------

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

        # 每 2 秒打印一次距离信息，防止频繁输出
        if time.time() - self.last_log_time > 2.0:
            self.get_logger().info(f"Distance to target: {dist:.2f} m")
            self.last_log_time = time.time()

        # 当无人机到达目标点
        if dist < 0.3:
            self.get_logger().info("✅ Arrived at target point!")


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