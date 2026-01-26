// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from service_interface:srv/Land.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "service_interface/srv/land.hpp"


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


namespace service_interface
{

namespace srv
{

namespace builder
{

class Init_Land_Event_response
{
public:
  explicit Init_Land_Event_response(::service_interface::srv::Land_Event & msg)
  : msg_(msg)
  {}
  ::service_interface::srv::Land_Event response(::service_interface::srv::Land_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::service_interface::srv::Land_Event msg_;
};

class Init_Land_Event_request
{
public:
  explicit Init_Land_Event_request(::service_interface::srv::Land_Event & msg)
  : msg_(msg)
  {}
  Init_Land_Event_response request(::service_interface::srv::Land_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Land_Event_response(msg_);
  }

private:
  ::service_interface::srv::Land_Event msg_;
};

class Init_Land_Event_info
{
public:
  Init_Land_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Land_Event_request info(::service_interface::srv::Land_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Land_Event_request(msg_);
  }

private:
  ::service_interface::srv::Land_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::service_interface::srv::Land_Event>()
{
  return service_interface::srv::builder::Init_Land_Event_info();
}

}  // namespace service_interface

#endif  // SERVICE_INTERFACE__SRV__DETAIL__LAND__BUILDER_HPP_
