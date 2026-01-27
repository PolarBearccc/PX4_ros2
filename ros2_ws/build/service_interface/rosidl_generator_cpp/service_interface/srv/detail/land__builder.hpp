// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from service_interface:srv/Land.idl
// generated code does not contain a copyright notice

#ifndef SERVICE_INTERFACE__SRV__DETAIL__LAND__BUILDER_HPP_
#define SERVICE_INTERFACE__SRV__DETAIL__LAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "service_interface/srv/detail/land__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace service_interface
{

namespace srv
{

namespace builder
{

class Init_Land_Request_land
{
public:
  Init_Land_Request_land()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::service_interface::srv::Land_Request land(::service_interface::srv::Land_Request::_land_type arg)
  {
    msg_.land = std::move(arg);
    return std::move(msg_);
  }

private:
  ::service_interface::srv::Land_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::service_interface::srv::Land_Request>()
{
  return service_interface::srv::builder::Init_Land_Request_land();
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
auto build<::service_interface::srv::Land_Response>()
{
  return ::service_interface::srv::Land_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace service_interface

#endif  // SERVICE_INTERFACE__SRV__DETAIL__LAND__BUILDER_HPP_
