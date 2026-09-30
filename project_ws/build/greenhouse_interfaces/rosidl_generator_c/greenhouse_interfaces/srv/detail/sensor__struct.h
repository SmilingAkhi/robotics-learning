// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from greenhouse_interfaces:srv/Sensor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "greenhouse_interfaces/srv/sensor.h"


#ifndef GREENHOUSE_INTERFACES__SRV__DETAIL__SENSOR__STRUCT_H_
#define GREENHOUSE_INTERFACES__SRV__DETAIL__SENSOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Sensor in the package greenhouse_interfaces.
typedef struct greenhouse_interfaces__srv__Sensor_Request
{
  int64_t temperature;
  int64_t humidity;
} greenhouse_interfaces__srv__Sensor_Request;

// Struct for a sequence of greenhouse_interfaces__srv__Sensor_Request.
typedef struct greenhouse_interfaces__srv__Sensor_Request__Sequence
{
  greenhouse_interfaces__srv__Sensor_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} greenhouse_interfaces__srv__Sensor_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'recommendation'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Sensor in the package greenhouse_interfaces.
typedef struct greenhouse_interfaces__srv__Sensor_Response
{
  bool fan_on;
  bool irrigation_on;
  rosidl_runtime_c__String recommendation;
} greenhouse_interfaces__srv__Sensor_Response;

// Struct for a sequence of greenhouse_interfaces__srv__Sensor_Response.
typedef struct greenhouse_interfaces__srv__Sensor_Response__Sequence
{
  greenhouse_interfaces__srv__Sensor_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} greenhouse_interfaces__srv__Sensor_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  greenhouse_interfaces__srv__Sensor_Event__request__MAX_SIZE = 1
};
// response
enum
{
  greenhouse_interfaces__srv__Sensor_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/Sensor in the package greenhouse_interfaces.
typedef struct greenhouse_interfaces__srv__Sensor_Event
{
  service_msgs__msg__ServiceEventInfo info;
  greenhouse_interfaces__srv__Sensor_Request__Sequence request;
  greenhouse_interfaces__srv__Sensor_Response__Sequence response;
} greenhouse_interfaces__srv__Sensor_Event;

// Struct for a sequence of greenhouse_interfaces__srv__Sensor_Event.
typedef struct greenhouse_interfaces__srv__Sensor_Event__Sequence
{
  greenhouse_interfaces__srv__Sensor_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} greenhouse_interfaces__srv__Sensor_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GREENHOUSE_INTERFACES__SRV__DETAIL__SENSOR__STRUCT_H_
