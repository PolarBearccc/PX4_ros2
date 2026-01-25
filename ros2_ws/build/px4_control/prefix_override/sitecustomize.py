import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/xun/workspace/PX4_ros2/ros2_ws/install/px4_control'
