// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from irrigation_interfaces:srv/SmartIrrigator.idl
// generated code does not contain a copyright notice

#include "irrigation_interfaces/srv/detail/smart_irrigator__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_irrigation_interfaces
const rosidl_type_hash_t *
irrigation_interfaces__srv__SmartIrrigator__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x51, 0x5d, 0x34, 0xb8, 0x8e, 0xa0, 0xbf, 0xf6,
      0x13, 0x77, 0x99, 0x03, 0x71, 0x58, 0x70, 0x6d,
      0x60, 0xcb, 0x01, 0x4e, 0x84, 0xdc, 0x6b, 0x57,
      0x04, 0x08, 0xdb, 0x24, 0xc3, 0x70, 0x6b, 0xe2,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_irrigation_interfaces
const rosidl_type_hash_t *
irrigation_interfaces__srv__SmartIrrigator_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x75, 0x7e, 0x6b, 0x16, 0x75, 0xe0, 0x9d, 0xa0,
      0x3e, 0x8c, 0x66, 0xe9, 0x16, 0x32, 0x26, 0x8f,
      0x9f, 0x27, 0x17, 0xd3, 0xa4, 0xd0, 0x50, 0x01,
      0x59, 0xab, 0x87, 0x42, 0xfe, 0x34, 0xc9, 0xef,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_irrigation_interfaces
const rosidl_type_hash_t *
irrigation_interfaces__srv__SmartIrrigator_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xda, 0x90, 0x37, 0xf8, 0x20, 0x08, 0x37, 0x0a,
      0x72, 0x00, 0x12, 0xb8, 0xd8, 0x4d, 0x12, 0x0e,
      0x45, 0xc6, 0xda, 0xd8, 0x72, 0xad, 0x2d, 0x62,
      0x1b, 0xd4, 0xdb, 0x33, 0x7b, 0xce, 0x52, 0x62,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_irrigation_interfaces
const rosidl_type_hash_t *
irrigation_interfaces__srv__SmartIrrigator_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x84, 0x45, 0x70, 0xa4, 0xd4, 0xab, 0x46, 0xf2,
      0xfc, 0x7a, 0x7d, 0xec, 0xd7, 0xc0, 0x03, 0x5d,
      0xcc, 0xf6, 0x18, 0xca, 0xe7, 0x9c, 0x24, 0x18,
      0xc8, 0xb7, 0xb7, 0x16, 0xdc, 0x33, 0xf9, 0x67,
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

static char irrigation_interfaces__srv__SmartIrrigator__TYPE_NAME[] = "irrigation_interfaces/srv/SmartIrrigator";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char irrigation_interfaces__srv__SmartIrrigator_Event__TYPE_NAME[] = "irrigation_interfaces/srv/SmartIrrigator_Event";
static char irrigation_interfaces__srv__SmartIrrigator_Request__TYPE_NAME[] = "irrigation_interfaces/srv/SmartIrrigator_Request";
static char irrigation_interfaces__srv__SmartIrrigator_Response__TYPE_NAME[] = "irrigation_interfaces/srv/SmartIrrigator_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char irrigation_interfaces__srv__SmartIrrigator__FIELD_NAME__request_message[] = "request_message";
static char irrigation_interfaces__srv__SmartIrrigator__FIELD_NAME__response_message[] = "response_message";
static char irrigation_interfaces__srv__SmartIrrigator__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field irrigation_interfaces__srv__SmartIrrigator__FIELDS[] = {
  {
    {irrigation_interfaces__srv__SmartIrrigator__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {irrigation_interfaces__srv__SmartIrrigator_Request__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
  {
    {irrigation_interfaces__srv__SmartIrrigator__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {irrigation_interfaces__srv__SmartIrrigator_Response__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
  {
    {irrigation_interfaces__srv__SmartIrrigator__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {irrigation_interfaces__srv__SmartIrrigator_Event__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription irrigation_interfaces__srv__SmartIrrigator__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {irrigation_interfaces__srv__SmartIrrigator_Event__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {irrigation_interfaces__srv__SmartIrrigator_Request__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
  {
    {irrigation_interfaces__srv__SmartIrrigator_Response__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
irrigation_interfaces__srv__SmartIrrigator__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {irrigation_interfaces__srv__SmartIrrigator__TYPE_NAME, 40, 40},
      {irrigation_interfaces__srv__SmartIrrigator__FIELDS, 3, 3},
    },
    {irrigation_interfaces__srv__SmartIrrigator__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = irrigation_interfaces__srv__SmartIrrigator_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = irrigation_interfaces__srv__SmartIrrigator_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = irrigation_interfaces__srv__SmartIrrigator_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char irrigation_interfaces__srv__SmartIrrigator_Request__FIELD_NAME__temp[] = "temp";
static char irrigation_interfaces__srv__SmartIrrigator_Request__FIELD_NAME__mc[] = "mc";

static rosidl_runtime_c__type_description__Field irrigation_interfaces__srv__SmartIrrigator_Request__FIELDS[] = {
  {
    {irrigation_interfaces__srv__SmartIrrigator_Request__FIELD_NAME__temp, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {irrigation_interfaces__srv__SmartIrrigator_Request__FIELD_NAME__mc, 2, 2},
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
irrigation_interfaces__srv__SmartIrrigator_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {irrigation_interfaces__srv__SmartIrrigator_Request__TYPE_NAME, 48, 48},
      {irrigation_interfaces__srv__SmartIrrigator_Request__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char irrigation_interfaces__srv__SmartIrrigator_Response__FIELD_NAME__irrigate[] = "irrigate";
static char irrigation_interfaces__srv__SmartIrrigator_Response__FIELD_NAME__reason[] = "reason";

static rosidl_runtime_c__type_description__Field irrigation_interfaces__srv__SmartIrrigator_Response__FIELDS[] = {
  {
    {irrigation_interfaces__srv__SmartIrrigator_Response__FIELD_NAME__irrigate, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {irrigation_interfaces__srv__SmartIrrigator_Response__FIELD_NAME__reason, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
irrigation_interfaces__srv__SmartIrrigator_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {irrigation_interfaces__srv__SmartIrrigator_Response__TYPE_NAME, 49, 49},
      {irrigation_interfaces__srv__SmartIrrigator_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char irrigation_interfaces__srv__SmartIrrigator_Event__FIELD_NAME__info[] = "info";
static char irrigation_interfaces__srv__SmartIrrigator_Event__FIELD_NAME__request[] = "request";
static char irrigation_interfaces__srv__SmartIrrigator_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field irrigation_interfaces__srv__SmartIrrigator_Event__FIELDS[] = {
  {
    {irrigation_interfaces__srv__SmartIrrigator_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {irrigation_interfaces__srv__SmartIrrigator_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {irrigation_interfaces__srv__SmartIrrigator_Request__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
  {
    {irrigation_interfaces__srv__SmartIrrigator_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {irrigation_interfaces__srv__SmartIrrigator_Response__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription irrigation_interfaces__srv__SmartIrrigator_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {irrigation_interfaces__srv__SmartIrrigator_Request__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
  {
    {irrigation_interfaces__srv__SmartIrrigator_Response__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
irrigation_interfaces__srv__SmartIrrigator_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {irrigation_interfaces__srv__SmartIrrigator_Event__TYPE_NAME, 46, 46},
      {irrigation_interfaces__srv__SmartIrrigator_Event__FIELDS, 3, 3},
    },
    {irrigation_interfaces__srv__SmartIrrigator_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = irrigation_interfaces__srv__SmartIrrigator_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = irrigation_interfaces__srv__SmartIrrigator_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 temp\n"
  "float32 mc\n"
  "\n"
  "---\n"
  "bool irrigate \n"
  "string reason";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
irrigation_interfaces__srv__SmartIrrigator__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {irrigation_interfaces__srv__SmartIrrigator__TYPE_NAME, 40, 40},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 58, 58},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
irrigation_interfaces__srv__SmartIrrigator_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {irrigation_interfaces__srv__SmartIrrigator_Request__TYPE_NAME, 48, 48},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
irrigation_interfaces__srv__SmartIrrigator_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {irrigation_interfaces__srv__SmartIrrigator_Response__TYPE_NAME, 49, 49},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
irrigation_interfaces__srv__SmartIrrigator_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {irrigation_interfaces__srv__SmartIrrigator_Event__TYPE_NAME, 46, 46},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
irrigation_interfaces__srv__SmartIrrigator__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *irrigation_interfaces__srv__SmartIrrigator__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *irrigation_interfaces__srv__SmartIrrigator_Event__get_individual_type_description_source(NULL);
    sources[3] = *irrigation_interfaces__srv__SmartIrrigator_Request__get_individual_type_description_source(NULL);
    sources[4] = *irrigation_interfaces__srv__SmartIrrigator_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
irrigation_interfaces__srv__SmartIrrigator_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *irrigation_interfaces__srv__SmartIrrigator_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
irrigation_interfaces__srv__SmartIrrigator_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *irrigation_interfaces__srv__SmartIrrigator_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
irrigation_interfaces__srv__SmartIrrigator_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *irrigation_interfaces__srv__SmartIrrigator_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *irrigation_interfaces__srv__SmartIrrigator_Request__get_individual_type_description_source(NULL);
    sources[3] = *irrigation_interfaces__srv__SmartIrrigator_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
