// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from arduinobot_msgs:srv/AddTwoInts.idl
// generated code does not contain a copyright notice

#include "arduinobot_msgs/srv/detail/add_two_ints__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_arduinobot_msgs
const rosidl_type_hash_t *
arduinobot_msgs__srv__AddTwoInts__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2f, 0xca, 0x9d, 0xee, 0x30, 0x3b, 0x41, 0x05,
      0x2c, 0xb4, 0xda, 0x33, 0xe8, 0x25, 0x05, 0xf8,
      0xb0, 0xda, 0x8e, 0x82, 0xf0, 0x94, 0xbc, 0x6d,
      0xe2, 0xa1, 0xce, 0x7e, 0xd7, 0x15, 0xf7, 0xbf,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_arduinobot_msgs
const rosidl_type_hash_t *
arduinobot_msgs__srv__AddTwoInts_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9b, 0x53, 0xa5, 0xab, 0x47, 0x61, 0xfe, 0xcb,
      0xe4, 0x49, 0xb6, 0x35, 0x1b, 0x34, 0xe7, 0xb4,
      0x13, 0x24, 0x39, 0x49, 0xc6, 0x7e, 0x13, 0x39,
      0x7f, 0x54, 0x05, 0x13, 0x4c, 0x8c, 0x7c, 0xf3,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_arduinobot_msgs
const rosidl_type_hash_t *
arduinobot_msgs__srv__AddTwoInts_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x94, 0x34, 0x52, 0x95, 0x69, 0x03, 0x80, 0x81,
      0x42, 0xef, 0x05, 0xa3, 0x9c, 0x7c, 0x58, 0x81,
      0xa9, 0xba, 0x54, 0x8d, 0xaa, 0xdb, 0x28, 0x40,
      0x39, 0x7e, 0xaa, 0xbb, 0xf2, 0x5d, 0x40, 0x14,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_arduinobot_msgs
const rosidl_type_hash_t *
arduinobot_msgs__srv__AddTwoInts_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf8, 0x97, 0x92, 0xe2, 0x15, 0x02, 0x9b, 0x17,
      0x45, 0xce, 0x85, 0x54, 0x4c, 0x46, 0x27, 0xd8,
      0x10, 0x0c, 0x3e, 0xb9, 0x93, 0x61, 0x50, 0xf1,
      0x68, 0x74, 0x58, 0x27, 0x20, 0x7c, 0x34, 0xc8,
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

static char arduinobot_msgs__srv__AddTwoInts__TYPE_NAME[] = "arduinobot_msgs/srv/AddTwoInts";
static char arduinobot_msgs__srv__AddTwoInts_Event__TYPE_NAME[] = "arduinobot_msgs/srv/AddTwoInts_Event";
static char arduinobot_msgs__srv__AddTwoInts_Request__TYPE_NAME[] = "arduinobot_msgs/srv/AddTwoInts_Request";
static char arduinobot_msgs__srv__AddTwoInts_Response__TYPE_NAME[] = "arduinobot_msgs/srv/AddTwoInts_Response";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char arduinobot_msgs__srv__AddTwoInts__FIELD_NAME__request_message[] = "request_message";
static char arduinobot_msgs__srv__AddTwoInts__FIELD_NAME__response_message[] = "response_message";
static char arduinobot_msgs__srv__AddTwoInts__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field arduinobot_msgs__srv__AddTwoInts__FIELDS[] = {
  {
    {arduinobot_msgs__srv__AddTwoInts__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {arduinobot_msgs__srv__AddTwoInts_Request__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
  {
    {arduinobot_msgs__srv__AddTwoInts__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {arduinobot_msgs__srv__AddTwoInts_Response__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
  {
    {arduinobot_msgs__srv__AddTwoInts__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {arduinobot_msgs__srv__AddTwoInts_Event__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription arduinobot_msgs__srv__AddTwoInts__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {arduinobot_msgs__srv__AddTwoInts_Event__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {arduinobot_msgs__srv__AddTwoInts_Request__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {arduinobot_msgs__srv__AddTwoInts_Response__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
arduinobot_msgs__srv__AddTwoInts__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {arduinobot_msgs__srv__AddTwoInts__TYPE_NAME, 30, 30},
      {arduinobot_msgs__srv__AddTwoInts__FIELDS, 3, 3},
    },
    {arduinobot_msgs__srv__AddTwoInts__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    description.referenced_type_descriptions.data[0].fields = arduinobot_msgs__srv__AddTwoInts_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = arduinobot_msgs__srv__AddTwoInts_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = arduinobot_msgs__srv__AddTwoInts_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char arduinobot_msgs__srv__AddTwoInts_Request__FIELD_NAME__a[] = "a";
static char arduinobot_msgs__srv__AddTwoInts_Request__FIELD_NAME__b[] = "b";

static rosidl_runtime_c__type_description__Field arduinobot_msgs__srv__AddTwoInts_Request__FIELDS[] = {
  {
    {arduinobot_msgs__srv__AddTwoInts_Request__FIELD_NAME__a, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arduinobot_msgs__srv__AddTwoInts_Request__FIELD_NAME__b, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
arduinobot_msgs__srv__AddTwoInts_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {arduinobot_msgs__srv__AddTwoInts_Request__TYPE_NAME, 38, 38},
      {arduinobot_msgs__srv__AddTwoInts_Request__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char arduinobot_msgs__srv__AddTwoInts_Response__FIELD_NAME__sum[] = "sum";

static rosidl_runtime_c__type_description__Field arduinobot_msgs__srv__AddTwoInts_Response__FIELDS[] = {
  {
    {arduinobot_msgs__srv__AddTwoInts_Response__FIELD_NAME__sum, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
arduinobot_msgs__srv__AddTwoInts_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {arduinobot_msgs__srv__AddTwoInts_Response__TYPE_NAME, 39, 39},
      {arduinobot_msgs__srv__AddTwoInts_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char arduinobot_msgs__srv__AddTwoInts_Event__FIELD_NAME__info[] = "info";
static char arduinobot_msgs__srv__AddTwoInts_Event__FIELD_NAME__request[] = "request";
static char arduinobot_msgs__srv__AddTwoInts_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field arduinobot_msgs__srv__AddTwoInts_Event__FIELDS[] = {
  {
    {arduinobot_msgs__srv__AddTwoInts_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {arduinobot_msgs__srv__AddTwoInts_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {arduinobot_msgs__srv__AddTwoInts_Request__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
  {
    {arduinobot_msgs__srv__AddTwoInts_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {arduinobot_msgs__srv__AddTwoInts_Response__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription arduinobot_msgs__srv__AddTwoInts_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {arduinobot_msgs__srv__AddTwoInts_Request__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {arduinobot_msgs__srv__AddTwoInts_Response__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
arduinobot_msgs__srv__AddTwoInts_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {arduinobot_msgs__srv__AddTwoInts_Event__TYPE_NAME, 36, 36},
      {arduinobot_msgs__srv__AddTwoInts_Event__FIELDS, 3, 3},
    },
    {arduinobot_msgs__srv__AddTwoInts_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    description.referenced_type_descriptions.data[0].fields = arduinobot_msgs__srv__AddTwoInts_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = arduinobot_msgs__srv__AddTwoInts_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Request\n"
  "int64 a\n"
  "int64 b\n"
  "---\n"
  "# Response\n"
  "int64 sum";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
arduinobot_msgs__srv__AddTwoInts__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {arduinobot_msgs__srv__AddTwoInts__TYPE_NAME, 30, 30},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 50, 50},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
arduinobot_msgs__srv__AddTwoInts_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {arduinobot_msgs__srv__AddTwoInts_Request__TYPE_NAME, 38, 38},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
arduinobot_msgs__srv__AddTwoInts_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {arduinobot_msgs__srv__AddTwoInts_Response__TYPE_NAME, 39, 39},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
arduinobot_msgs__srv__AddTwoInts_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {arduinobot_msgs__srv__AddTwoInts_Event__TYPE_NAME, 36, 36},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
arduinobot_msgs__srv__AddTwoInts__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *arduinobot_msgs__srv__AddTwoInts__get_individual_type_description_source(NULL),
    sources[1] = *arduinobot_msgs__srv__AddTwoInts_Event__get_individual_type_description_source(NULL);
    sources[2] = *arduinobot_msgs__srv__AddTwoInts_Request__get_individual_type_description_source(NULL);
    sources[3] = *arduinobot_msgs__srv__AddTwoInts_Response__get_individual_type_description_source(NULL);
    sources[4] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
arduinobot_msgs__srv__AddTwoInts_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *arduinobot_msgs__srv__AddTwoInts_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
arduinobot_msgs__srv__AddTwoInts_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *arduinobot_msgs__srv__AddTwoInts_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
arduinobot_msgs__srv__AddTwoInts_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *arduinobot_msgs__srv__AddTwoInts_Event__get_individual_type_description_source(NULL),
    sources[1] = *arduinobot_msgs__srv__AddTwoInts_Request__get_individual_type_description_source(NULL);
    sources[2] = *arduinobot_msgs__srv__AddTwoInts_Response__get_individual_type_description_source(NULL);
    sources[3] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
