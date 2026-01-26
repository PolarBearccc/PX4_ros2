// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from service_interface:srv/Move.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "service_interface/srv/detail/move__struct.h"
#include "service_interface/srv/detail/move__type_support.h"
#include "service_interface/srv/detail/move__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace service_interface
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Move_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Move_Request_type_support_ids_t;

static const _Move_Request_type_support_ids_t _Move_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Move_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Move_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Move_Request_type_support_symbol_names_t _Move_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, service_interface, srv, Move_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_interface, srv, Move_Request)),
  }
};

typedef struct _Move_Request_type_support_data_t
{
  void * data[2];
} _Move_Request_type_support_data_t;

static _Move_Request_type_support_data_t _Move_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Move_Request_message_typesupport_map = {
  2,
  "service_interface",
  &_Move_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Move_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Move_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Move_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Move_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &service_interface__srv__Move_Request__get_type_hash,
  &service_interface__srv__Move_Request__get_type_description,
  &service_interface__srv__Move_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace service_interface

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, service_interface, srv, Move_Request)() {
  return &::service_interface::srv::rosidl_typesupport_c::Move_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "service_interface/srv/detail/move__struct.h"
// already included above
// #include "service_interface/srv/detail/move__type_support.h"
// already included above
// #include "service_interface/srv/detail/move__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace service_interface
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Move_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Move_Response_type_support_ids_t;

static const _Move_Response_type_support_ids_t _Move_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Move_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Move_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Move_Response_type_support_symbol_names_t _Move_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, service_interface, srv, Move_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_interface, srv, Move_Response)),
  }
};

typedef struct _Move_Response_type_support_data_t
{
  void * data[2];
} _Move_Response_type_support_data_t;

static _Move_Response_type_support_data_t _Move_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Move_Response_message_typesupport_map = {
  2,
  "service_interface",
  &_Move_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Move_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Move_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Move_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Move_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &service_interface__srv__Move_Response__get_type_hash,
  &service_interface__srv__Move_Response__get_type_description,
  &service_interface__srv__Move_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace service_interface

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, service_interface, srv, Move_Response)() {
  return &::service_interface::srv::rosidl_typesupport_c::Move_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "service_interface/srv/detail/move__struct.h"
// already included above
// #include "service_interface/srv/detail/move__type_support.h"
// already included above
// #include "service_interface/srv/detail/move__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace service_interface
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Move_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Move_Event_type_support_ids_t;

static const _Move_Event_type_support_ids_t _Move_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Move_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Move_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Move_Event_type_support_symbol_names_t _Move_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, service_interface, srv, Move_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_interface, srv, Move_Event)),
  }
};

typedef struct _Move_Event_type_support_data_t
{
  void * data[2];
} _Move_Event_type_support_data_t;

static _Move_Event_type_support_data_t _Move_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Move_Event_message_typesupport_map = {
  2,
  "service_interface",
  &_Move_Event_message_typesupport_ids.typesupport_identifier[0],
  &_Move_Event_message_typesupport_symbol_names.symbol_name[0],
  &_Move_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Move_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Move_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &service_interface__srv__Move_Event__get_type_hash,
  &service_interface__srv__Move_Event__get_type_description,
  &service_interface__srv__Move_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace service_interface

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, service_interface, srv, Move_Event)() {
  return &::service_interface::srv::rosidl_typesupport_c::Move_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "service_interface/srv/detail/move__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace service_interface
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _Move_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Move_type_support_ids_t;

static const _Move_type_support_ids_t _Move_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Move_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Move_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Move_type_support_symbol_names_t _Move_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, service_interface, srv, Move)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_interface, srv, Move)),
  }
};

typedef struct _Move_type_support_data_t
{
  void * data[2];
} _Move_type_support_data_t;

static _Move_type_support_data_t _Move_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Move_service_typesupport_map = {
  2,
  "service_interface",
  &_Move_service_typesupport_ids.typesupport_identifier[0],
  &_Move_service_typesupport_symbol_names.symbol_name[0],
  &_Move_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Move_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Move_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &Move_Request_message_type_support_handle,
  &Move_Response_message_type_support_handle,
  &Move_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    service_interface,
    srv,
    Move
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    service_interface,
    srv,
    Move
  ),
  &service_interface__srv__Move__get_type_hash,
  &service_interface__srv__Move__get_type_description,
  &service_interface__srv__Move__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace service_interface

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, service_interface, srv, Move)() {
  return &::service_interface::srv::rosidl_typesupport_c::Move_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
