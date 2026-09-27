// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from greenhouse_interfaces:msg/Sensor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "greenhouse_interfaces/msg/sensor.h"


#ifndef GREENHOUSE_INTERFACES__MSG__DETAIL__SENSOR__STRUCT_H_
#define GREENHOUSE_INTERFACES__MSG__DETAIL__SENSOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Sensor in the package greenhouse_interfaces.
typedef struct greenhouse_interfaces__msg__Sensor
{
  int64_t temperature;
  int64_t humidity;
} greenhouse_interfaces__msg__Sensor;

// Struct for a sequence of greenhouse_interfaces__msg__Sensor.
typedef struct greenhouse_interfaces__msg__Sensor__Sequence
{
  greenhouse_interfaces__msg__Sensor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} greenhouse_interfaces__msg__Sensor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GREENHOUSE_INTERFACES__MSG__DETAIL__SENSOR__STRUCT_H_
