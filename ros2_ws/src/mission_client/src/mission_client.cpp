#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "service_interface/srv/land.hpp"
#include "service_interface/srv/move.hpp"
#include "service_interface/srv/takeoff.hpp"

#include <iostream>
#include <string>
#include <sstream>
#include <memory>
#include <thread>

class DroneControlClient: public rclcpp::Node{
    private:
        rclcpp::Client<service_interface::srv::Move>::SharedPtr move_client_;
        rclcpp::Client<service_interface::srv::Land>::SharedPtr land_client_;
        rclcpp::Client<service_interface::srv::Takeoff>::SharedPtr takeoff_client_;
        std::thread command_loop_thread_;
        
        bool wait_for_service(){
            while(!move_client_->wait_for_service(std::chrono::seconds(1))){
                if(!rclcpp::ok()){
                    RCLCPP_ERROR(this->get_logger(),"move服务被打断");
                    return false;
                }
            }
            RCLCPP_INFO(this->get_logger(),"move服务上线");
            while(!land_client_->wait_for_service(std::chrono::seconds(1))){
                if(!rclcpp::ok()){
                    RCLCPP_ERROR(this->get_logger(),"land服务被打断");
                    return false;
                }
            }
            RCLCPP_INFO(this->get_logger(),"land服务上线");
            while(!takeoff_client_->wait_for_service(std::chrono::seconds(1))){
                if(!rclcpp::ok()){
                    RCLCPP_ERROR(this->get_logger(),"takeoff服务被打断");
                    return false;
                }
            }
            RCLCPP_INFO(this->get_logger(),"takeoff服务上线");
            return true;
        }
    public:
        DroneControlClient():Node("drone_control_client"){
            move_client_ = this->create_client<service_interface::srv::Move>("/drone_move");
            land_client_ = this->create_client<service_interface::srv::Land>("/drone_land");
            takeoff_client_ = this->create_client<service_interface::srv::Takeoff>("/drone_takeoff");
            auto ok = wait_for_service();
            if(!ok) RCLCPP_ERROR(this->get_logger(),"客户端启动失败");
            command_loop_thread_ = std::thread(&DroneControlClient::command_loop, this);

        }
        void call_land_service(){
            std::cout << "发送降落命令...\n";
            auto request = std::make_shared<service_interface::srv::Land::Request>();
            request->land = true;
            auto future = land_client_ ->async_send_request(request);

            std::cout << "降落命令已发送\n";
        }
    
        void call_move_service(const std::string& direction, float distance){
            auto request = std::make_shared<service_interface::srv::Move::Request>();
            request->direction = direction;
            request->distance = distance;
            
            auto future = move_client_->async_send_request(request);
            
            std::cout << "移动命令已发送\n";
        }
    
        void call_takeoff_service(float hight){
            auto request = std::make_shared<service_interface::srv::Takeoff::Request>();
            request->hight = hight;
            
            auto future = takeoff_client_->async_send_request(request);
            
            
            std::cout << "起飞命令已发送\n";
        }
        void handle_move_command(const std::vector<std::string>& tokens){
            if (tokens.size() < 2) {
                std::cout << "命令错误";
                return;
            }
            std::string direction = tokens[1];        
            std::vector<std::string> valid_directions = {
                "forward", "backward", "left", "right", "up", "down"
            };
            
            if (std::find(valid_directions.begin(), valid_directions.end(), direction) == valid_directions.end()) {
                std::cout << "错误：无效的方向 '" << direction << "'\n";
                return;
            }
            
            float distance = 1.0f;  // 默认距离
            
            if (tokens.size() > 2) {
                try {
                    distance = std::stof(tokens[2]);
                } catch (...) {
                    std::cout << "错误：距离参数无效\n";
                    return;
                }
            }
            
            
            std::cout << "移动命令: 方向=" << direction 
                    << ", 距离=" << distance << "\n"; 
            
            call_move_service(direction, distance);
        }
    
        void handle_takeoff_command(const std::vector<std::string>& tokens){
            float hight = 2.0f;  // 默认高度
            
            if (tokens.size() > 1) {
                try {
                    hight = std::stof(tokens[1]);
                } catch (...) {
                    std::cout << "错误：高度参数无效\n";
                    return;
                }
            }
            
            std::cout << "起飞命令: 高度=" << hight << "米\n";
            
            call_takeoff_service(hight);
        }
        void process_command(const std::string& command){
            std::vector<std::string> tokens;
            std::stringstream ss(command);
            std::string token;
            
            while (ss >> token) {
                tokens.push_back(token);
            }
            
            if (tokens.empty()) return;
            
            std::string action = tokens[0];
            
            if (action == "move") {
                handle_move_command(tokens);
            }
            else if (action == "takeoff") {
                handle_takeoff_command(tokens);
            }
            else if (action == "land") {
                call_land_service();
            }
            else {
                std::cout << "错误：未知命令 " << "\n";
            }
        }
        void command_loop(){
            std::string input;
            
            while (rclcpp::ok()) {
                std::cout << ">> ";
                std::getline(std::cin, input);
                if (input.empty()) continue;
                
                // 处理其他命令
                process_command(input);
            }
        }
};
int main(int argc, char** argv){
    rclcpp::init(argc, argv);
    auto client = std::make_shared<DroneControlClient>();
    RCLCPP_INFO(client->get_logger(),"客户端开始运行");
    rclcpp::spin(client);
    rclcpp::shutdown();
    return 0;
}