// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from service_interface:srv/Move.idl
// generated code does not contain a copyright notice

#ifndef SERVICE_INTERFACE__SRV__DETAIL__MOVE__TRAITS_HPP_
#define SERVICE_INTERFACE__SRV__DETAIL__MOVE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "service_interface/srv/detail/move__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace service_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const Move_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: direction
  {
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
    out << ", ";
  }

  // member: distance
  {
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Move_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
    out << "\n";
  }

  // member: distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Move_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace service_interface

namespace rosidl_generator_traits
{

[[deprecated("use service_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const service_interface::srv::Move_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  service_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use service_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const service_interface::srv::Move_Request & msg)
{
  return service_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<service_interface::srv::Move_Request>()
{
  return "service_interface::srv::Move_Request";
}

template<>
inline const char * name<service_interface::srv::Move_Request>()
{
  return "service_interface/srv/Move_Request";
}

template<>
struct has_fixed_size<service_interface::srv::Move_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<service_interface::srv::Move_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<service_interface::srv::Move_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace service_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const Move_Response & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Move_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Move_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace service_interface

namespace rosidl_generator_traits
{

[[deprecated("use service_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const service_interface::srv::Move_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  service_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use service_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const service_interface::srv::Move_Response & msg)
{
  return service_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<service_interface::srv::Move_Response>()
{
  return "service_interface::srv::Move_Response";
}

template<>
inline const char * name<service_interface::srv::Move_Response>()
{
  return "service_interface/srv/Move_Response";
}

template<>
struct has_fixed_size<service_interface::srv::Move_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<service_interface::srv::Move_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<service_interface::srv::Move_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<service_interface::srv::Move>()
{
  return "service_interface::srv::Move";
}

template<>
inline const char * name<service_interface::srv::Move>()
{
  return "service_interface/srv/Move";
}

template<>
struct has_fixed_size<service_interface::srv::Move>
  : std::integral_constant<
    bool,
    has_fixed_size<service_interface::srv::Move_Request>::value &&
    has_fixed_size<service_interface::srv::Move_Response>::value
  >
{
};

template<>
struct has_bounded_size<service_interface::srv::Move>
  : std::integral_constant<
    bool,
    has_bounded_size<service_interface::srv::Move_Request>::value &&
    has_bounded_size<service_interface::srv::Move_Response>::value
  >
{
};

template<>
struct is_service<service_interface::srv::Move>
  : std::true_type
{
};

template<>
struct is_service_request<service_interface::srv::Move_Request>
  : std::true_type
{
};

template<>
struct is_service_response<service_interface::srv::Move_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SERVICE_INTERFACE__SRV__DETAIL__MOVE__TRAITS_HPP_
