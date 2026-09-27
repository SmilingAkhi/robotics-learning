// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from greenhouse_interfaces:msg/Sensor.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "greenhouse_interfaces/msg/detail/sensor__rosidl_typesupport_introspection_c.h"
#include "greenhouse_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "greenhouse_interfaces/msg/detail/sensor__functions.h"
#include "greenhouse_interfaces/msg/detail/sensor__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void greenhouse_interfaces__msg__Sensor__rosidl_typesupport_introspection_c__Sensor_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  greenhouse_interfaces__msg__Sensor__init(message_memory);
}

void greenhouse_interfaces__msg__Sensor__rosidl_typesupport_introspection_c__Sensor_fini_function(void * message_memory)
{
  greenhouse_interfaces__msg__Sensor__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember greenhouse_interfaces__msg__Sensor__rosidl_typesupport_introspection_c__Sensor_message_member_array[2] = {
  {
    "temperature",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(greenhouse_interfaces__msg__Sensor, temperature),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "humidity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(greenhouse_interfaces__msg__Sensor, humidity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers greenhouse_interfaces__msg__Sensor__rosidl_typesupport_introspection_c__Sensor_message_members = {
  "greenhouse_interfaces__msg",  // message namespace
  "Sensor",  // message name
  2,  // number of fields
  sizeof(greenhouse_interfaces__msg__Sensor),
  false,  // has_any_key_member_
  greenhouse_interfaces__msg__Sensor__rosidl_typesupport_introspection_c__Sensor_message_member_array,  // message members
  greenhouse_interfaces__msg__Sensor__rosidl_typesupport_introspection_c__Sensor_init_function,  // function to initialize message memory (memory has to be allocated)
  greenhouse_interfaces__msg__Sensor__rosidl_typesupport_introspection_c__Sensor_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t greenhouse_interfaces__msg__Sensor__rosidl_typesupport_introspection_c__Sensor_message_type_support_handle = {
  0,
  &greenhouse_interfaces__msg__Sensor__rosidl_typesupport_introspection_c__Sensor_message_members,
  get_message_typesupport_handle_function,
  &greenhouse_interfaces__msg__Sensor__get_type_hash,
  &greenhouse_interfaces__msg__Sensor__get_type_description,
  &greenhouse_interfaces__msg__Sensor__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_greenhouse_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, greenhouse_interfaces, msg, Sensor)() {
  if (!greenhouse_interfaces__msg__Sensor__rosidl_typesupport_introspection_c__Sensor_message_type_support_handle.typesupport_identifier) {
    greenhouse_interfaces__msg__Sensor__rosidl_typesupport_introspection_c__Sensor_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &greenhouse_interfaces__msg__Sensor__rosidl_typesupport_introspection_c__Sensor_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
