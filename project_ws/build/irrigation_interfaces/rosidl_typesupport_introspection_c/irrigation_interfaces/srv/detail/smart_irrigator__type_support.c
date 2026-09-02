// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from irrigation_interfaces:srv/SmartIrrigator.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "irrigation_interfaces/srv/detail/smart_irrigator__rosidl_typesupport_introspection_c.h"
#include "irrigation_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "irrigation_interfaces/srv/detail/smart_irrigator__functions.h"
#include "irrigation_interfaces/srv/detail/smart_irrigator__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void irrigation_interfaces__srv__SmartIrrigator_Request__rosidl_typesupport_introspection_c__SmartIrrigator_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  irrigation_interfaces__srv__SmartIrrigator_Request__init(message_memory);
}

void irrigation_interfaces__srv__SmartIrrigator_Request__rosidl_typesupport_introspection_c__SmartIrrigator_Request_fini_function(void * message_memory)
{
  irrigation_interfaces__srv__SmartIrrigator_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember irrigation_interfaces__srv__SmartIrrigator_Request__rosidl_typesupport_introspection_c__SmartIrrigator_Request_message_member_array[2] = {
  {
    "temp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irrigation_interfaces__srv__SmartIrrigator_Request, temp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irrigation_interfaces__srv__SmartIrrigator_Request, mc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers irrigation_interfaces__srv__SmartIrrigator_Request__rosidl_typesupport_introspection_c__SmartIrrigator_Request_message_members = {
  "irrigation_interfaces__srv",  // message namespace
  "SmartIrrigator_Request",  // message name
  2,  // number of fields
  sizeof(irrigation_interfaces__srv__SmartIrrigator_Request),
  false,  // has_any_key_member_
  irrigation_interfaces__srv__SmartIrrigator_Request__rosidl_typesupport_introspection_c__SmartIrrigator_Request_message_member_array,  // message members
  irrigation_interfaces__srv__SmartIrrigator_Request__rosidl_typesupport_introspection_c__SmartIrrigator_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  irrigation_interfaces__srv__SmartIrrigator_Request__rosidl_typesupport_introspection_c__SmartIrrigator_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t irrigation_interfaces__srv__SmartIrrigator_Request__rosidl_typesupport_introspection_c__SmartIrrigator_Request_message_type_support_handle = {
  0,
  &irrigation_interfaces__srv__SmartIrrigator_Request__rosidl_typesupport_introspection_c__SmartIrrigator_Request_message_members,
  get_message_typesupport_handle_function,
  &irrigation_interfaces__srv__SmartIrrigator_Request__get_type_hash,
  &irrigation_interfaces__srv__SmartIrrigator_Request__get_type_description,
  &irrigation_interfaces__srv__SmartIrrigator_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_irrigation_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irrigation_interfaces, srv, SmartIrrigator_Request)() {
  if (!irrigation_interfaces__srv__SmartIrrigator_Request__rosidl_typesupport_introspection_c__SmartIrrigator_Request_message_type_support_handle.typesupport_identifier) {
    irrigation_interfaces__srv__SmartIrrigator_Request__rosidl_typesupport_introspection_c__SmartIrrigator_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &irrigation_interfaces__srv__SmartIrrigator_Request__rosidl_typesupport_introspection_c__SmartIrrigator_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "irrigation_interfaces/srv/detail/smart_irrigator__rosidl_typesupport_introspection_c.h"
// already included above
// #include "irrigation_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "irrigation_interfaces/srv/detail/smart_irrigator__functions.h"
// already included above
// #include "irrigation_interfaces/srv/detail/smart_irrigator__struct.h"


// Include directives for member types
// Member `reason`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void irrigation_interfaces__srv__SmartIrrigator_Response__rosidl_typesupport_introspection_c__SmartIrrigator_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  irrigation_interfaces__srv__SmartIrrigator_Response__init(message_memory);
}

void irrigation_interfaces__srv__SmartIrrigator_Response__rosidl_typesupport_introspection_c__SmartIrrigator_Response_fini_function(void * message_memory)
{
  irrigation_interfaces__srv__SmartIrrigator_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember irrigation_interfaces__srv__SmartIrrigator_Response__rosidl_typesupport_introspection_c__SmartIrrigator_Response_message_member_array[2] = {
  {
    "irrigate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irrigation_interfaces__srv__SmartIrrigator_Response, irrigate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reason",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irrigation_interfaces__srv__SmartIrrigator_Response, reason),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers irrigation_interfaces__srv__SmartIrrigator_Response__rosidl_typesupport_introspection_c__SmartIrrigator_Response_message_members = {
  "irrigation_interfaces__srv",  // message namespace
  "SmartIrrigator_Response",  // message name
  2,  // number of fields
  sizeof(irrigation_interfaces__srv__SmartIrrigator_Response),
  false,  // has_any_key_member_
  irrigation_interfaces__srv__SmartIrrigator_Response__rosidl_typesupport_introspection_c__SmartIrrigator_Response_message_member_array,  // message members
  irrigation_interfaces__srv__SmartIrrigator_Response__rosidl_typesupport_introspection_c__SmartIrrigator_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  irrigation_interfaces__srv__SmartIrrigator_Response__rosidl_typesupport_introspection_c__SmartIrrigator_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t irrigation_interfaces__srv__SmartIrrigator_Response__rosidl_typesupport_introspection_c__SmartIrrigator_Response_message_type_support_handle = {
  0,
  &irrigation_interfaces__srv__SmartIrrigator_Response__rosidl_typesupport_introspection_c__SmartIrrigator_Response_message_members,
  get_message_typesupport_handle_function,
  &irrigation_interfaces__srv__SmartIrrigator_Response__get_type_hash,
  &irrigation_interfaces__srv__SmartIrrigator_Response__get_type_description,
  &irrigation_interfaces__srv__SmartIrrigator_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_irrigation_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irrigation_interfaces, srv, SmartIrrigator_Response)() {
  if (!irrigation_interfaces__srv__SmartIrrigator_Response__rosidl_typesupport_introspection_c__SmartIrrigator_Response_message_type_support_handle.typesupport_identifier) {
    irrigation_interfaces__srv__SmartIrrigator_Response__rosidl_typesupport_introspection_c__SmartIrrigator_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &irrigation_interfaces__srv__SmartIrrigator_Response__rosidl_typesupport_introspection_c__SmartIrrigator_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "irrigation_interfaces/srv/detail/smart_irrigator__rosidl_typesupport_introspection_c.h"
// already included above
// #include "irrigation_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "irrigation_interfaces/srv/detail/smart_irrigator__functions.h"
// already included above
// #include "irrigation_interfaces/srv/detail/smart_irrigator__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "irrigation_interfaces/srv/smart_irrigator.h"
// Member `request`
// Member `response`
// already included above
// #include "irrigation_interfaces/srv/detail/smart_irrigator__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void irrigation_interfaces__srv__SmartIrrigator_Event__rosidl_typesupport_introspection_c__SmartIrrigator_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  irrigation_interfaces__srv__SmartIrrigator_Event__init(message_memory);
}

void irrigation_interfaces__srv__SmartIrrigator_Event__rosidl_typesupport_introspection_c__SmartIrrigator_Event_fini_function(void * message_memory)
{
  irrigation_interfaces__srv__SmartIrrigator_Event__fini(message_memory);
}

size_t irrigation_interfaces__srv__SmartIrrigator_Event__rosidl_typesupport_introspection_c__size_function__SmartIrrigator_Event__request(
  const void * untyped_member)
{
  const irrigation_interfaces__srv__SmartIrrigator_Request__Sequence * member =
    (const irrigation_interfaces__srv__SmartIrrigator_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * irrigation_interfaces__srv__SmartIrrigator_Event__rosidl_typesupport_introspection_c__get_const_function__SmartIrrigator_Event__request(
  const void * untyped_member, size_t index)
{
  const irrigation_interfaces__srv__SmartIrrigator_Request__Sequence * member =
    (const irrigation_interfaces__srv__SmartIrrigator_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irrigation_interfaces__srv__SmartIrrigator_Event__rosidl_typesupport_introspection_c__get_function__SmartIrrigator_Event__request(
  void * untyped_member, size_t index)
{
  irrigation_interfaces__srv__SmartIrrigator_Request__Sequence * member =
    (irrigation_interfaces__srv__SmartIrrigator_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void irrigation_interfaces__srv__SmartIrrigator_Event__rosidl_typesupport_introspection_c__fetch_function__SmartIrrigator_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const irrigation_interfaces__srv__SmartIrrigator_Request * item =
    ((const irrigation_interfaces__srv__SmartIrrigator_Request *)
    irrigation_interfaces__srv__SmartIrrigator_Event__rosidl_typesupport_introspection_c__get_const_function__SmartIrrigator_Event__request(untyped_member, index));
  irrigation_interfaces__srv__SmartIrrigator_Request * value =
    (irrigation_interfaces__srv__SmartIrrigator_Request *)(untyped_value);
  *value = *item;
}

void irrigation_interfaces__srv__SmartIrrigator_Event__rosidl_typesupport_introspection_c__assign_function__SmartIrrigator_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  irrigation_interfaces__srv__SmartIrrigator_Request * item =
    ((irrigation_interfaces__srv__SmartIrrigator_Request *)
    irrigation_interfaces__srv__SmartIrrigator_Event__rosidl_typesupport_introspection_c__get_function__SmartIrrigator_Event__request(untyped_member, index));
  const irrigation_interfaces__srv__SmartIrrigator_Request * value =
    (const irrigation_interfaces__srv__SmartIrrigator_Request *)(untyped_value);
  *item = *value;
}

bool irrigation_interfaces__srv__SmartIrrigator_Event__rosidl_typesupport_introspection_c__resize_function__SmartIrrigator_Event__request(
  void * untyped_member, size_t size)
{
  irrigation_interfaces__srv__SmartIrrigator_Request__Sequence * member =
    (irrigation_interfaces__srv__SmartIrrigator_Request__Sequence *)(untyped_member);
  irrigation_interfaces__srv__SmartIrrigator_Request__Sequence__fini(member);
  return irrigation_interfaces__srv__SmartIrrigator_Request__Sequence__init(member, size);
}

size_t irrigation_interfaces__srv__SmartIrrigator_Event__rosidl_typesupport_introspection_c__size_function__SmartIrrigator_Event__response(
  const void * untyped_member)
{
  const irrigation_interfaces__srv__SmartIrrigator_Response__Sequence * member =
    (const irrigation_interfaces__srv__SmartIrrigator_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * irrigation_interfaces__srv__SmartIrrigator_Event__rosidl_typesupport_introspection_c__get_const_function__SmartIrrigator_Event__response(
  const void * untyped_member, size_t index)
{
  const irrigation_interfaces__srv__SmartIrrigator_Response__Sequence * member =
    (const irrigation_interfaces__srv__SmartIrrigator_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irrigation_interfaces__srv__SmartIrrigator_Event__rosidl_typesupport_introspection_c__get_function__SmartIrrigator_Event__response(
  void * untyped_member, size_t index)
{
  irrigation_interfaces__srv__SmartIrrigator_Response__Sequence * member =
    (irrigation_interfaces__srv__SmartIrrigator_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void irrigation_interfaces__srv__SmartIrrigator_Event__rosidl_typesupport_introspection_c__fetch_function__SmartIrrigator_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const irrigation_interfaces__srv__SmartIrrigator_Response * item =
    ((const irrigation_interfaces__srv__SmartIrrigator_Response *)
    irrigation_interfaces__srv__SmartIrrigator_Event__rosidl_typesupport_introspection_c__get_const_function__SmartIrrigator_Event__response(untyped_member, index));
  irrigation_interfaces__srv__SmartIrrigator_Response * value =
    (irrigation_interfaces__srv__SmartIrrigator_Response *)(untyped_value);
  *value = *item;
}

void irrigation_interfaces__srv__SmartIrrigator_Event__rosidl_typesupport_introspection_c__assign_function__SmartIrrigator_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  irrigation_interfaces__srv__SmartIrrigator_Response * item =
    ((irrigation_interfaces__srv__SmartIrrigator_Response *)
    irrigation_interfaces__srv__SmartIrrigator_Event__rosidl_typesupport_introspection_c__get_function__SmartIrrigator_Event__response(untyped_member, index));
  const irrigation_interfaces__srv__SmartIrrigator_Response * value =
    (const irrigation_interfaces__srv__SmartIrrigator_Response *)(untyped_value);
  *item = *value;
}

bool irrigation_interfaces__srv__SmartIrrigator_Event__rosidl_typesupport_introspection_c__resize_function__SmartIrrigator_Event__response(
  void * untyped_member, size_t size)
{
  irrigation_interfaces__srv__SmartIrrigator_Response__Sequence * member =
    (irrigation_interfaces__srv__SmartIrrigator_Response__Sequence *)(untyped_member);
  irrigation_interfaces__srv__SmartIrrigator_Response__Sequence__fini(member);
  return irrigation_interfaces__srv__SmartIrrigator_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember irrigation_interfaces__srv__SmartIrrigator_Event__rosidl_typesupport_introspection_c__SmartIrrigator_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irrigation_interfaces__srv__SmartIrrigator_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(irrigation_interfaces__srv__SmartIrrigator_Event, request),  // bytes offset in struct
    NULL,  // default value
    irrigation_interfaces__srv__SmartIrrigator_Event__rosidl_typesupport_introspection_c__size_function__SmartIrrigator_Event__request,  // size() function pointer
    irrigation_interfaces__srv__SmartIrrigator_Event__rosidl_typesupport_introspection_c__get_const_function__SmartIrrigator_Event__request,  // get_const(index) function pointer
    irrigation_interfaces__srv__SmartIrrigator_Event__rosidl_typesupport_introspection_c__get_function__SmartIrrigator_Event__request,  // get(index) function pointer
    irrigation_interfaces__srv__SmartIrrigator_Event__rosidl_typesupport_introspection_c__fetch_function__SmartIrrigator_Event__request,  // fetch(index, &value) function pointer
    irrigation_interfaces__srv__SmartIrrigator_Event__rosidl_typesupport_introspection_c__assign_function__SmartIrrigator_Event__request,  // assign(index, value) function pointer
    irrigation_interfaces__srv__SmartIrrigator_Event__rosidl_typesupport_introspection_c__resize_function__SmartIrrigator_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(irrigation_interfaces__srv__SmartIrrigator_Event, response),  // bytes offset in struct
    NULL,  // default value
    irrigation_interfaces__srv__SmartIrrigator_Event__rosidl_typesupport_introspection_c__size_function__SmartIrrigator_Event__response,  // size() function pointer
    irrigation_interfaces__srv__SmartIrrigator_Event__rosidl_typesupport_introspection_c__get_const_function__SmartIrrigator_Event__response,  // get_const(index) function pointer
    irrigation_interfaces__srv__SmartIrrigator_Event__rosidl_typesupport_introspection_c__get_function__SmartIrrigator_Event__response,  // get(index) function pointer
    irrigation_interfaces__srv__SmartIrrigator_Event__rosidl_typesupport_introspection_c__fetch_function__SmartIrrigator_Event__response,  // fetch(index, &value) function pointer
    irrigation_interfaces__srv__SmartIrrigator_Event__rosidl_typesupport_introspection_c__assign_function__SmartIrrigator_Event__response,  // assign(index, value) function pointer
    irrigation_interfaces__srv__SmartIrrigator_Event__rosidl_typesupport_introspection_c__resize_function__SmartIrrigator_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers irrigation_interfaces__srv__SmartIrrigator_Event__rosidl_typesupport_introspection_c__SmartIrrigator_Event_message_members = {
  "irrigation_interfaces__srv",  // message namespace
  "SmartIrrigator_Event",  // message name
  3,  // number of fields
  sizeof(irrigation_interfaces__srv__SmartIrrigator_Event),
  false,  // has_any_key_member_
  irrigation_interfaces__srv__SmartIrrigator_Event__rosidl_typesupport_introspection_c__SmartIrrigator_Event_message_member_array,  // message members
  irrigation_interfaces__srv__SmartIrrigator_Event__rosidl_typesupport_introspection_c__SmartIrrigator_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  irrigation_interfaces__srv__SmartIrrigator_Event__rosidl_typesupport_introspection_c__SmartIrrigator_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t irrigation_interfaces__srv__SmartIrrigator_Event__rosidl_typesupport_introspection_c__SmartIrrigator_Event_message_type_support_handle = {
  0,
  &irrigation_interfaces__srv__SmartIrrigator_Event__rosidl_typesupport_introspection_c__SmartIrrigator_Event_message_members,
  get_message_typesupport_handle_function,
  &irrigation_interfaces__srv__SmartIrrigator_Event__get_type_hash,
  &irrigation_interfaces__srv__SmartIrrigator_Event__get_type_description,
  &irrigation_interfaces__srv__SmartIrrigator_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_irrigation_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irrigation_interfaces, srv, SmartIrrigator_Event)() {
  irrigation_interfaces__srv__SmartIrrigator_Event__rosidl_typesupport_introspection_c__SmartIrrigator_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  irrigation_interfaces__srv__SmartIrrigator_Event__rosidl_typesupport_introspection_c__SmartIrrigator_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irrigation_interfaces, srv, SmartIrrigator_Request)();
  irrigation_interfaces__srv__SmartIrrigator_Event__rosidl_typesupport_introspection_c__SmartIrrigator_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irrigation_interfaces, srv, SmartIrrigator_Response)();
  if (!irrigation_interfaces__srv__SmartIrrigator_Event__rosidl_typesupport_introspection_c__SmartIrrigator_Event_message_type_support_handle.typesupport_identifier) {
    irrigation_interfaces__srv__SmartIrrigator_Event__rosidl_typesupport_introspection_c__SmartIrrigator_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &irrigation_interfaces__srv__SmartIrrigator_Event__rosidl_typesupport_introspection_c__SmartIrrigator_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "irrigation_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "irrigation_interfaces/srv/detail/smart_irrigator__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers irrigation_interfaces__srv__detail__smart_irrigator__rosidl_typesupport_introspection_c__SmartIrrigator_service_members = {
  "irrigation_interfaces__srv",  // service namespace
  "SmartIrrigator",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // irrigation_interfaces__srv__detail__smart_irrigator__rosidl_typesupport_introspection_c__SmartIrrigator_Request_message_type_support_handle,
  NULL,  // response message
  // irrigation_interfaces__srv__detail__smart_irrigator__rosidl_typesupport_introspection_c__SmartIrrigator_Response_message_type_support_handle
  NULL  // event_message
  // irrigation_interfaces__srv__detail__smart_irrigator__rosidl_typesupport_introspection_c__SmartIrrigator_Response_message_type_support_handle
};


static rosidl_service_type_support_t irrigation_interfaces__srv__detail__smart_irrigator__rosidl_typesupport_introspection_c__SmartIrrigator_service_type_support_handle = {
  0,
  &irrigation_interfaces__srv__detail__smart_irrigator__rosidl_typesupport_introspection_c__SmartIrrigator_service_members,
  get_service_typesupport_handle_function,
  &irrigation_interfaces__srv__SmartIrrigator_Request__rosidl_typesupport_introspection_c__SmartIrrigator_Request_message_type_support_handle,
  &irrigation_interfaces__srv__SmartIrrigator_Response__rosidl_typesupport_introspection_c__SmartIrrigator_Response_message_type_support_handle,
  &irrigation_interfaces__srv__SmartIrrigator_Event__rosidl_typesupport_introspection_c__SmartIrrigator_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    irrigation_interfaces,
    srv,
    SmartIrrigator
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    irrigation_interfaces,
    srv,
    SmartIrrigator
  ),
  &irrigation_interfaces__srv__SmartIrrigator__get_type_hash,
  &irrigation_interfaces__srv__SmartIrrigator__get_type_description,
  &irrigation_interfaces__srv__SmartIrrigator__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irrigation_interfaces, srv, SmartIrrigator_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irrigation_interfaces, srv, SmartIrrigator_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irrigation_interfaces, srv, SmartIrrigator_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_irrigation_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irrigation_interfaces, srv, SmartIrrigator)(void) {
  if (!irrigation_interfaces__srv__detail__smart_irrigator__rosidl_typesupport_introspection_c__SmartIrrigator_service_type_support_handle.typesupport_identifier) {
    irrigation_interfaces__srv__detail__smart_irrigator__rosidl_typesupport_introspection_c__SmartIrrigator_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)irrigation_interfaces__srv__detail__smart_irrigator__rosidl_typesupport_introspection_c__SmartIrrigator_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irrigation_interfaces, srv, SmartIrrigator_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irrigation_interfaces, srv, SmartIrrigator_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irrigation_interfaces, srv, SmartIrrigator_Event)()->data;
  }

  return &irrigation_interfaces__srv__detail__smart_irrigator__rosidl_typesupport_introspection_c__SmartIrrigator_service_type_support_handle;
}
