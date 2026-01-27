// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from service_interface:srv/Takeoff.idl
// generated code does not contain a copyright notice

#ifndef SERVICE_INTERFACE__SRV__DETAIL__TAKEOFF__BUILDER_HPP_
#define SERVICE_INTERFACE__SRV__DETAIL__TAKEOFF__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "service_interface/srv/detail/takeoff__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace service_interface
{

namespace srv
{

namespace builder
{

class Init_Takeoff_Request_hight
{
public:
  Init_Takeoff_Request_hight()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::service_interface::srv::Takeoff_Request hight(::service_interface::srv::Takeoff_Request::_hight_type arg)
  {
    msg_.hight = std::move(arg);
    return std::move(msg_);
  }

private:
  ::service_interface::srv::Takeoff_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::service_interface::srv::Takeoff_Request>()
{
  return service_interface::srv::builder::Init_Takeoff_Request_hight();
}

}  // namespace service_interface


namespace service_interface
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::service_interface::srv::Takeoff_Response>()
{
  return ::service_interface::srv::Takeoff_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace service_interface

#endif  // SERVICE_INTERFACE__SRV__DETAIL__TAKEOFF__BUILDER_HPP_
