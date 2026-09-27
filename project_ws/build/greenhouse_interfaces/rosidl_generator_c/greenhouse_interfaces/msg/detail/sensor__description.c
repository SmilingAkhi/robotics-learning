// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from greenhouse_interfaces:msg/Sensor.idl
// generated code does not contain a copyright notice

#include "greenhouse_interfaces/msg/detail/sensor__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_greenhouse_interfaces
const rosidl_type_hash_t *
greenhouse_interfaces__msg__Sensor__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x03, 0x98, 0xf7, 0xed, 0xcf, 0xd5, 0x8e, 0x22,
      0xe6, 0x25, 0xd8, 0x4e, 0xd7, 0x62, 0x53, 0x22,
      0x21, 0x49, 0xb0, 0xcc, 0x7d, 0xee, 0x06, 0x69,
      0x94, 0xae, 0x68, 0xd7, 0x8d, 0x3e, 0x46, 0xb8,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char greenhouse_interfaces__msg__Sensor__TYPE_NAME[] = "greenhouse_interfaces/msg/Sensor";

// Define type names, field names, and default values
static char greenhouse_interfaces__msg__Sensor__FIELD_NAME__temperature[] = "temperature";
static char greenhouse_interfaces__msg__Sensor__FIELD_NAME__humidity[] = "humidity";

static rosidl_runtime_c__type_description__Field greenhouse_interfaces__msg__Sensor__FIELDS[] = {
  {
    {greenhouse_interfaces__msg__Sensor__FIELD_NAME__temperature, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {greenhouse_interfaces__msg__Sensor__FIELD_NAME__humidity, 8, 8},
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
greenhouse_interfaces__msg__Sensor__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {greenhouse_interfaces__msg__Sensor__TYPE_NAME, 32, 32},
      {greenhouse_interfaces__msg__Sensor__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int64 temperature\n"
  "int64 humidity";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
greenhouse_interfaces__msg__Sensor__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {greenhouse_interfaces__msg__Sensor__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 32, 32},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
greenhouse_interfaces__msg__Sensor__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *greenhouse_interfaces__msg__Sensor__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
