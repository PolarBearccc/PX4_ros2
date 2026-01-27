// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from service_interface:srv/Move.idl
// generated code does not contain a copyright notice

#ifndef SERVICE_INTERFACE__SRV__DETAIL__MOVE__STRUCT_H_
#define SERVICE_INTERFACE__SRV__DETAIL__MOVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'direction'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Move in the package service_interface.
typedef struct service_interface__srv__Move_Request
{
  /// 方向：forward, backward, left, right
  rosidl_runtime_c__String direction;
  float distance;
} service_interface__srv__Move_Request;

// Struct for a sequence of service_interface__srv__Move_Request.
typedef struct service_interface__srv__Move_Request__Sequence
{
  service_interface__srv__Move_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} service_interface__srv__Move_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Move in the package service_interface.
typedef struct service_interface__srv__Move_Response
{
  uint8_t structure_needs_at_least_one_member;
} service_interface__srv__Move_Response;

// Struct for a sequence of service_interface__srv__Move_Response.
typedef struct service_interface__srv__Move_Response__Sequence
{
  service_interface__srv__Move_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} service_interface__srv__Move_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SERVICE_INTERFACE__SRV__DETAIL__MOVE__STRUCT_H_
