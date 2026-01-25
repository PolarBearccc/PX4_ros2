#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from mavros_msgs.srv import CommandBool, SetMode
from geometry_msgs.msg import PoseStamped
from mavros_msgs.msg import State


class OffboardControl(Node):
    def __init__(self):
        super().__init__('offboard_control')
        self.state = State()  # 保存无人机当前状态

        # 订阅无人机状态话题 /mavros/state
        self.state_sub = self.create_subscription(State, '/mavros/state', self.state_cb, 10)

        # 发布期望位置到 /mavros/setpoint_position/local
        self.pose_pub = self.create_publisher(PoseStamped, '/mavros/setpoint_position/local', 10)

        # 创建服务客户端，用于解锁（arming）和设置模式（OFFBOARD）
        self.arming_client = self.create_client(CommandBool, '/mavros/cmd/arming')
        self.set_mode_client = self.create_client(SetMode, '/mavros/set_mode')

        # 设置目标位置（悬停在高度 2m）
        self.target_pose = PoseStamped()
        self.target_pose.pose.position.x = 0.0
        self.target_pose.pose.position.y = 0.0
        self.target_pose.pose.position.z = 2.0

        # 创建定时器，周期为 0.1s，持续发送期望位置
        self.timer = self.create_timer(0.1, self.timer_cb)
        self.offboard_started = False  # 标记 OFFBOARD 模式是否已启动

    def state_cb(self, msg):
        """状态回调函数，保存无人机当前状态"""
        self.state = msg

    def timer_cb(self):
        """定时器回调函数，持续发布目标位置并尝试进入 OFFBOARD 模式和解锁"""
        # 持续发布目标位置，防止 OFFBOARD 模式退出
        self.pose_pub.publish(self.target_pose)

        # 如果还未启动 OFFBOARD 模式且当前模式不是 OFFBOARD
        if not self.offboard_started and self.state.mode != "OFFBOARD":
            # 尝试切换为 OFFBOARD 模式
            if self.set_mode_client.wait_for_service(timeout_sec=1.0):
                mode_req = SetMode.Request()
                mode_req.custom_mode = 'OFFBOARD'
                self.set_mode_client.call_async(mode_req)
                self.get_logger().info("Trying to set OFFBOARD mode...")

            # 尝试解锁无人机
            if self.arming_client.wait_for_service(timeout_sec=1.0):
                arm_req = CommandBool.Request()
                arm_req.value = True
                self.arming_client.call_async(arm_req)
                self.get_logger().info("Trying to arm...")

            # 标记已启动 OFFBOARD 模式
            self.offboard_started = True


def main(args=None):
    rclpy.init(args=args)
    node = OffboardControl()
    rclpy.spin(node)  # 阻塞运行节点，处理回调
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()