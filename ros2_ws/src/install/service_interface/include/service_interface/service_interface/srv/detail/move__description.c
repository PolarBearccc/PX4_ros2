// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from service_interface:srv/Move.idl
// generated code does not contain a copyright notice

#include "service_interface/srv/detail/move__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_service_interface
const rosidl_type_hash_t *
service_interface__srv__Move__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd5, 0xd6, 0x72, 0xf7, 0xed, 0xfb, 0xa0, 0xcd,
      0xad, 0x71, 0x20, 0x37, 0x7b, 0x30, 0xeb, 0xa0,
      0x65, 0x63, 0x5c, 0xa7, 0x63, 0xa7, 0x02, 0x51,
      0x5a, 0xae, 0x3b, 0xd4, 0x77, 0x0e, 0x5a, 0x19,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_service_interface
const rosidl_type_hash_t *
service_interface__srv__Move_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x72, 0xc7, 0xc1, 0x0e, 0x17, 0xf7, 0x9e, 0x9a,
      0x3c, 0x8d, 0x0c, 0xe3, 0xfd, 0x10, 0x52, 0x55,
      0x7e, 0x4d, 0x9a, 0x20, 0xfb, 0xbd, 0xf8, 0x44,
      0x16, 0xf0, 0xed, 0xe9, 0xf7, 0x07, 0x3d, 0x3d,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_service_interface
const rosidl_type_hash_t *
service_interface__srv__Move_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe3, 0x85, 0x89, 0xa3, 0xdb, 0x7a, 0xbb, 0x32,
      0x07, 0xea, 0x18, 0xaa, 0x8e, 0x2f, 0xed, 0xfe,
      0xa0, 0x74, 0x2a, 0x12, 0xb8, 0xbc, 0x1a, 0x7d,
      0xd7, 0x3e, 0x38, 0xb5, 0xc2, 0xf9, 0x03, 0x5a,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_service_interface
const rosidl_type_hash_t *
service_interface__srv__Move_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0d, 0xb7, 0xaa, 0x5c, 0x10, 0x5f, 0xa5, 0x13,
      0x87, 0x97, 0xee, 0x5b, 0x94, 0xc8, 0xb2, 0x2f,
      0x6a, 0x80, 0x97, 0x1b, 0xf9, 0x46, 0x0e, 0xad,
      0x23, 0xd1, 0x8e, 0x9f, 0x99, 0x0d, 0x73, 0xf3,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char service_interface__srv__Move__TYPE_NAME[] = "service_interface/srv/Move";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_interface__srv__Move_Event__TYPE_NAME[] = "service_interface/srv/Move_Event";
static char service_interface__srv__Move_Request__TYPE_NAME[] = "service_interface/srv/Move_Request";
static char service_interface__srv__Move_Response__TYPE_NAME[] = "service_interface/srv/Move_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char service_interface__srv__Move__FIELD_NAME__request_message[] = "request_message";
static char service_interface__srv__Move__FIELD_NAME__response_message[] = "response_message";
static char service_interface__srv__Move__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field service_interface__srv__Move__FIELDS[] = {
  {
    {service_interface__srv__Move__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_interface__srv__Move_Request__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
  {
    {service_interface__srv__Move__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_interface__srv__Move_Response__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {service_interface__srv__Move__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_interface__srv__Move_Event__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription service_interface__srv__Move__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_interface__srv__Move_Event__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {service_interface__srv__Move_Request__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {service_interface__srv__Move_Response__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
service_interface__srv__Move__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {service_interface__srv__Move__TYPE_NAME, 26, 26},
      {service_interface__srv__Move__FIELDS, 3, 3},
    },
    {service_interface__srv__Move__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = service_interface__srv__Move_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = service_interface__srv__Move_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = service_interface__srv__Move_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char service_interface__srv__Move_Request__FIELD_NAME__direction[] = "direction";
static char service_interface__srv__Move_Request__FIELD_NAME__distance[] = "distance";

static rosidl_runtime_c__type_description__Field service_interface__srv__Move_Request__FIELDS[] = {
  {
    {service_interface__srv__Move_Request__FIELD_NAME__direction, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {service_interface__srv__Move_Request__FIELD_NAME__distance, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
service_interface__srv__Move_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {service_interface__srv__Move_Request__TYPE_NAME, 34, 34},
      {service_interface__srv__Move_Request__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char service_interface__srv__Move_Response__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field service_interface__srv__Move_Response__FIELDS[] = {
  {
    {service_interface__srv__Move_Response__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
service_interface__srv__Move_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {service_interface__srv__Move_Response__TYPE_NAME, 35, 35},
      {service_interface__srv__Move_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char service_interface__srv__Move_Event__FIELD_NAME__info[] = "info";
static char service_interface__srv__Move_Event__FIELD_NAME__request[] = "request";
static char service_interface__srv__Move_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field service_interface__srv__Move_Event__FIELDS[] = {
  {
    {service_interface__srv__Move_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {service_interface__srv__Move_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {service_interface__srv__Move_Request__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
  {
    {service_interface__srv__Move_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {service_interface__srv__Move_Response__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription service_interface__srv__Move_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_interface__srv__Move_Request__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {service_interface__srv__Move_Response__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
service_interface__srv__Move_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {service_interface__srv__Move_Event__TYPE_NAME, 32, 32},
      {service_interface__srv__Move_Event__FIELDS, 3, 3},
    },
    {service_interface__srv__Move_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = service_interface__srv__Move_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = service_interface__srv__Move_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string direction  # \\xe6\\x96\\xb9\\xe5\\x90\\x91\\xef\\xbc\\x9aforward, backward, left, right\n"
  "float32 distance  \n"
  "# float32 speed     #\\xef\\xbc\\x88\\xe5\\x8f\\xaf\\xe9\\x80\\x89\\xef\\xbc\\x89\n"
  "---\n"
  "# bool success      \n"
  "# string message    ";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
service_interface__srv__Move__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {service_interface__srv__Move__TYPE_NAME, 26, 26},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 144, 144},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
service_interface__srv__Move_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {service_interface__srv__Move_Request__TYPE_NAME, 34, 34},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
service_interface__srv__Move_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {service_interface__srv__Move_Response__TYPE_NAME, 35, 35},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
service_interface__srv__Move_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {service_interface__srv__Move_Event__TYPE_NAME, 32, 32},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
service_interface__srv__Move__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *service_interface__srv__Move__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_interface__srv__Move_Event__get_individual_type_description_source(NULL);
    sources[3] = *service_interface__srv__Move_Request__get_individual_type_description_source(NULL);
    sources[4] = *service_interface__srv__Move_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
service_interface__srv__Move_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *service_interface__srv__Move_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
service_interface__srv__Move_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *service_interface__srv__Move_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
service_interface__srv__Move_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *service_interface__srv__Move_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_interface__srv__Move_Request__get_individual_type_description_source(NULL);
    sources[3] = *service_interface__srv__Move_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
