// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from service_interface:srv/Takeoff.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "service_interface/srv/takeoff.h"


#ifndef SERVICE_INTERFACE__SRV__DETAIL__TAKEOFF__STRUCT_H_
#define SERVICE_INTERFACE__SRV__DETAIL__TAKEOFF__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Takeoff in the package service_interface.
typedef struct service_interface__srv__Takeoff_Request
{
  float hight;
} service_interface__srv__Takeoff_Request;

// Struct for a sequence of service_interface__srv__Takeoff_Request.
typedef struct service_interface__srv__Takeoff_Request__Sequence
{
  service_interface__srv__Takeoff_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} service_interface__srv__Takeoff_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/Takeoff in the package service_interface.
typedef struct service_interface__srv__Takeoff_Response
{
  uint8_t structure_needs_at_least_one_member;
} service_interface__srv__Takeoff_Response;

// Struct for a sequence of service_interface__srv__Takeoff_Response.
typedef struct service_interface__srv__Takeoff_Response__Sequence
{
  service_interface__srv__Takeoff_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} service_interface__srv__Takeoff_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  service_interface__srv__Takeoff_Event__request__MAX_SIZE = 1
};
// response
enum
{
  service_interface__srv__Takeoff_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/Takeoff in the package service_interface.
typedef struct service_interface__srv__Takeoff_Event
{
  service_msgs__msg__ServiceEventInfo info;
  service_interface__srv__Takeoff_Request__Sequence request;
  service_interface__srv__Takeoff_Response__Sequence response;
} service_interface__srv__Takeoff_Event;

// Struct for a sequence of service_interface__srv__Takeoff_Event.
typedef struct service_interface__srv__Takeoff_Event__Sequence
{
  service_interface__srv__Takeoff_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} service_interface__srv__Takeoff_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SERVICE_INTERFACE__SRV__DETAIL__TAKEOFF__STRUCT_H_
