#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from mavros_msgs.srv import CommandTOL
from mavros_msgs.msg import State
from service_interface.srv import Land
class LandNode(Node):
    def __init__(self):
        super().__init__('drone_land')

        # 保存无人机当前状态
        self.state = State()

        # 订阅无人机状态话题 /mavros/state
        self.state_sub = self.create_subscription(State, '/mavros/state', self.state_cb, 10)

        # 创建服务客户端，用于发送降落命令
        self.land_client = self.create_client(CommandTOL, '/mavros/cmd/land')
        self.create_service(Land,'/drone_land',self.land_callback)
        self.get_logger().info('服务创建成功')
        # 创建定时器，每 1 秒执行一次 timer_cb
        self.timer = self.create_timer(1.0, self.timer_cb)

        # 标记是否已发送降落命令

    def state_cb(self, msg):
        """状态回调函数，更新无人机状态"""
        self.state = msg
    def land_callback(self,request,response):
        req = CommandTOL.Request()
        if request.land and self.land_client.wait_for_service(timeout_sec=1.0):
            # 设置降落参数
            req.altitude = 0.0  # 目标高度为地面
            req.latitude = 0.0  # 保持当前位置
            req.longitude = 0.0
            req.min_pitch = 0.0
            req.yaw = 0.0
            # 异步调用服务，发送降落请求
            self.land_client.call_async(req)
            self.get_logger().info("Initiating landing sequence...")
        return response
    def timer_cb(self):
        """定时器回调函数，发送降落命令"""
        # 如果还未发送降落命令且服务可用


def main(args=None):
    rclpy.init(args=args)
    node = LandNode()
    rclpy.spin(node)  # 阻塞运行节点，处理回调
    node.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()