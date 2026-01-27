// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from service_interface:srv/Move.idl
// generated code does not contain a copyright notice

#ifndef SERVICE_INTERFACE__SRV__DETAIL__MOVE__BUILDER_HPP_
#define SERVICE_INTERFACE__SRV__DETAIL__MOVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "service_interface/srv/detail/move__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace service_interface
{

namespace srv
{

namespace builder
{

class Init_Move_Request_distance
{
public:
  explicit Init_Move_Request_distance(::service_interface::srv::Move_Request & msg)
  : msg_(msg)
  {}
  ::service_interface::srv::Move_Request distance(::service_interface::srv::Move_Request::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::service_interface::srv::Move_Request msg_;
};

class Init_Move_Request_direction
{
public:
  Init_Move_Request_direction()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_Request_distance direction(::service_interface::srv::Move_Request::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return Init_Move_Request_distance(msg_);
  }

private:
  ::service_interface::srv::Move_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::service_interface::srv::Move_Request>()
{
  return service_interface::srv::builder::Init_Move_Request_direction();
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
auto build<::service_interface::srv::Move_Response>()
{
  return ::service_interface::srv::Move_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace service_interface

#endif  // SERVICE_INTERFACE__SRV__DETAIL__MOVE__BUILDER_HPP_
