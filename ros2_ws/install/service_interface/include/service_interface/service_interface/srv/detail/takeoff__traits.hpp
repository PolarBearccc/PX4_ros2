// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from service_interface:srv/Takeoff.idl
// generated code does not contain a copyright notice

#ifndef SERVICE_INTERFACE__SRV__DETAIL__TAKEOFF__TRAITS_HPP_
#define SERVICE_INTERFACE__SRV__DETAIL__TAKEOFF__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "service_interface/srv/detail/takeoff__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace service_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const Takeoff_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: hight
  {
    out << "hight: ";
    rosidl_generator_traits::value_to_yaml(msg.hight, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Takeoff_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: hight
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hight: ";
    rosidl_generator_traits::value_to_yaml(msg.hight, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Takeoff_Request & msg, bool use_flow_style = false)
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
  const service_interface::srv::Takeoff_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  service_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use service_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const service_interface::srv::Takeoff_Request & msg)
{
  return service_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<service_interface::srv::Takeoff_Request>()
{
  return "service_interface::srv::Takeoff_Request";
}

template<>
inline const char * name<service_interface::srv::Takeoff_Request>()
{
  return "service_interface/srv/Takeoff_Request";
}

template<>
struct has_fixed_size<service_interface::srv::Takeoff_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<service_interface::srv::Takeoff_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<service_interface::srv::Takeoff_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace service_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const Takeoff_Response & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Takeoff_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Takeoff_Response & msg, bool use_flow_style = false)
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
  const service_interface::srv::Takeoff_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  service_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use service_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const service_interface::srv::Takeoff_Response & msg)
{
  return service_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<service_interface::srv::Takeoff_Response>()
{
  return "service_interface::srv::Takeoff_Response";
}

template<>
inline const char * name<service_interface::srv::Takeoff_Response>()
{
  return "service_interface/srv/Takeoff_Response";
}

template<>
struct has_fixed_size<service_interface::srv::Takeoff_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<service_interface::srv::Takeoff_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<service_interface::srv::Takeoff_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<service_interface::srv::Takeoff>()
{
  return "service_interface::srv::Takeoff";
}

template<>
inline const char * name<service_interface::srv::Takeoff>()
{
  return "service_interface/srv/Takeoff";
}

template<>
struct has_fixed_size<service_interface::srv::Takeoff>
  : std::integral_constant<
    bool,
    has_fixed_size<service_interface::srv::Takeoff_Request>::value &&
    has_fixed_size<service_interface::srv::Takeoff_Response>::value
  >
{
};

template<>
struct has_bounded_size<service_interface::srv::Takeoff>
  : std::integral_constant<
    bool,
    has_bounded_size<service_interface::srv::Takeoff_Request>::value &&
    has_bounded_size<service_interface::srv::Takeoff_Response>::value
  >
{
};

template<>
struct is_service<service_interface::srv::Takeoff>
  : std::true_type
{
};

template<>
struct is_service_request<service_interface::srv::Takeoff_Request>
  : std::true_type
{
};

template<>
struct is_service_response<service_interface::srv::Takeoff_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SERVICE_INTERFACE__SRV__DETAIL__TAKEOFF__TRAITS_HPP_
