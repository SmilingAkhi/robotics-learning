// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from tut_interfaces:msg/Num.idl
// generated code does not contain a copyright notice

#include "tut_interfaces/msg/detail/num__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_tut_interfaces
const rosidl_type_hash_t *
tut_interfaces__msg__Num__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x43, 0x1f, 0x7e, 0x89, 0xf6, 0x06, 0x54, 0x24,
      0x85, 0x33, 0xee, 0x37, 0x47, 0x18, 0x3f, 0x73,
      0x39, 0x20, 0xec, 0x37, 0x2f, 0x0b, 0xc9, 0x99,
      0xab, 0xaf, 0xd1, 0xbd, 0xec, 0x1e, 0x53, 0xf9,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char tut_interfaces__msg__Num__TYPE_NAME[] = "tut_interfaces/msg/Num";

// Define type names, field names, and default values
static char tut_interfaces__msg__Num__FIELD_NAME__num[] = "num";

static rosidl_runtime_c__type_description__Field tut_interfaces__msg__Num__FIELDS[] = {
  {
    {tut_interfaces__msg__Num__FIELD_NAME__num, 3, 3},
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
tut_interfaces__msg__Num__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {tut_interfaces__msg__Num__TYPE_NAME, 22, 22},
      {tut_interfaces__msg__Num__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int64 num";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
tut_interfaces__msg__Num__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {tut_interfaces__msg__Num__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 10, 10},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
tut_interfaces__msg__Num__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *tut_interfaces__msg__Num__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
