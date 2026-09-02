// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from irrigation_interfaces:srv/SmartIrrigator.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "irrigation_interfaces/srv/smart_irrigator.h"


#ifndef IRRIGATION_INTERFACES__SRV__DETAIL__SMART_IRRIGATOR__STRUCT_H_
#define IRRIGATION_INTERFACES__SRV__DETAIL__SMART_IRRIGATOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SmartIrrigator in the package irrigation_interfaces.
typedef struct irrigation_interfaces__srv__SmartIrrigator_Request
{
  float temp;
  float mc;
} irrigation_interfaces__srv__SmartIrrigator_Request;

// Struct for a sequence of irrigation_interfaces__srv__SmartIrrigator_Request.
typedef struct irrigation_interfaces__srv__SmartIrrigator_Request__Sequence
{
  irrigation_interfaces__srv__SmartIrrigator_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irrigation_interfaces__srv__SmartIrrigator_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'reason'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SmartIrrigator in the package irrigation_interfaces.
typedef struct irrigation_interfaces__srv__SmartIrrigator_Response
{
  bool irrigate;
  rosidl_runtime_c__String reason;
} irrigation_interfaces__srv__SmartIrrigator_Response;

// Struct for a sequence of irrigation_interfaces__srv__SmartIrrigator_Response.
typedef struct irrigation_interfaces__srv__SmartIrrigator_Response__Sequence
{
  irrigation_interfaces__srv__SmartIrrigator_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irrigation_interfaces__srv__SmartIrrigator_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  irrigation_interfaces__srv__SmartIrrigator_Event__request__MAX_SIZE = 1
};
// response
enum
{
  irrigation_interfaces__srv__SmartIrrigator_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SmartIrrigator in the package irrigation_interfaces.
typedef struct irrigation_interfaces__srv__SmartIrrigator_Event
{
  service_msgs__msg__ServiceEventInfo info;
  irrigation_interfaces__srv__SmartIrrigator_Request__Sequence request;
  irrigation_interfaces__srv__SmartIrrigator_Response__Sequence response;
} irrigation_interfaces__srv__SmartIrrigator_Event;

// Struct for a sequence of irrigation_interfaces__srv__SmartIrrigator_Event.
typedef struct irrigation_interfaces__srv__SmartIrrigator_Event__Sequence
{
  irrigation_interfaces__srv__SmartIrrigator_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irrigation_interfaces__srv__SmartIrrigator_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRRIGATION_INTERFACES__SRV__DETAIL__SMART_IRRIGATOR__STRUCT_H_
