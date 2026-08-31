// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from tut_interfaces:msg/Sphere.idl
// generated code does not contain a copyright notice
#ifndef TUT_INTERFACES__MSG__DETAIL__SPHERE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define TUT_INTERFACES__MSG__DETAIL__SPHERE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "tut_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tut_interfaces/msg/detail/sphere__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tut_interfaces
bool cdr_serialize_tut_interfaces__msg__Sphere(
  const tut_interfaces__msg__Sphere * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tut_interfaces
bool cdr_deserialize_tut_interfaces__msg__Sphere(
  eprosima::fastcdr::Cdr &,
  tut_interfaces__msg__Sphere * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tut_interfaces
size_t get_serialized_size_tut_interfaces__msg__Sphere(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tut_interfaces
size_t max_serialized_size_tut_interfaces__msg__Sphere(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tut_interfaces
bool cdr_serialize_key_tut_interfaces__msg__Sphere(
  const tut_interfaces__msg__Sphere * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tut_interfaces
size_t get_serialized_size_key_tut_interfaces__msg__Sphere(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tut_interfaces
size_t max_serialized_size_key_tut_interfaces__msg__Sphere(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tut_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tut_interfaces, msg, Sphere)();

#ifdef __cplusplus
}
#endif

#endif  // TUT_INTERFACES__MSG__DETAIL__SPHERE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
