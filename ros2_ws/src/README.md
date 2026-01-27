运行节点前先启动px4仿真
```
make px4_sitl gz_x500
```
运行 MAVROS 桥接
```
source install/setup.bash  

ros2 launch mavros px4.launch fcu_url:=udp://:14540@localhost:14557
```
然后运行启动三个终端分别运行
```
source install/setup.bash
ros2 run px4_control land
```
```
source install/setup.bash
ros2 run px4_control goto
```
```
source install/setup.bash
ros2 run mission_client mission_client
```
目前支持的指令有  
```
takeoff <number>         起飞 number不填默认为2m 
land                     降落
move up <number>         向上移动 
move down <<number>      向下移动
move forward <number>    向前移动
move backward <number>   向后移动
move left <number>       向左移动
move right <number>      向右移动
```