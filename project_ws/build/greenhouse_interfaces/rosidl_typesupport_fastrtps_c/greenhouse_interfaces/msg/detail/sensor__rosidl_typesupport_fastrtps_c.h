// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from greenhouse_interfaces:msg/Sensor.idl
// generated code does not contain a copyright notice
#ifndef GREENHOUSE_INTERFACES__MSG__DETAIL__SENSOR__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define GREENHOUSE_INTERFACES__MSG__DETAIL__SENSOR__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "greenhouse_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "greenhouse_interfaces/msg/detail/sensor__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_greenhouse_interfaces
bool cdr_serialize_greenhouse_interfaces__msg__Sensor(
  const greenhouse_interfaces__msg__Sensor * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_greenhouse_interfaces
bool cdr_deserialize_greenhouse_interfaces__msg__Sensor(
  eprosima::fastcdr::Cdr &,
  greenhouse_interfaces__msg__Sensor * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_greenhouse_interfaces
size_t get_serialized_size_greenhouse_interfaces__msg__Sensor(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_greenhouse_interfaces
size_t max_serialized_size_greenhouse_interfaces__msg__Sensor(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_greenhouse_interfaces
bool cdr_serialize_key_greenhouse_interfaces__msg__Sensor(
  const greenhouse_interfaces__msg__Sensor * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_greenhouse_interfaces
size_t get_serialized_size_key_greenhouse_interfaces__msg__Sensor(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_greenhouse_interfaces
size_t max_serialized_size_key_greenhouse_interfaces__msg__Sensor(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_greenhouse_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, greenhouse_interfaces, msg, Sensor)();

#ifdef __cplusplus
}
#endif

#endif  // GREENHOUSE_INTERFACES__MSG__DETAIL__SENSOR__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
