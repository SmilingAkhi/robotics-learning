// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from greenhouse_interfaces:srv/Sensor.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "greenhouse_interfaces/srv/detail/sensor__struct.h"
#include "greenhouse_interfaces/srv/detail/sensor__type_support.h"
#include "greenhouse_interfaces/srv/detail/sensor__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace greenhouse_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Sensor_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Sensor_Request_type_support_ids_t;

static const _Sensor_Request_type_support_ids_t _Sensor_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Sensor_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Sensor_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Sensor_Request_type_support_symbol_names_t _Sensor_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, greenhouse_interfaces, srv, Sensor_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, greenhouse_interfaces, srv, Sensor_Request)),
  }
};

typedef struct _Sensor_Request_type_support_data_t
{
  void * data[2];
} _Sensor_Request_type_support_data_t;

static _Sensor_Request_type_support_data_t _Sensor_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Sensor_Request_message_typesupport_map = {
  2,
  "greenhouse_interfaces",
  &_Sensor_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Sensor_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Sensor_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Sensor_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Sensor_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &greenhouse_interfaces__srv__Sensor_Request__get_type_hash,
  &greenhouse_interfaces__srv__Sensor_Request__get_type_description,
  &greenhouse_interfaces__srv__Sensor_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace greenhouse_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, greenhouse_interfaces, srv, Sensor_Request)() {
  return &::greenhouse_interfaces::srv::rosidl_typesupport_c::Sensor_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "greenhouse_interfaces/srv/detail/sensor__struct.h"
// already included above
// #include "greenhouse_interfaces/srv/detail/sensor__type_support.h"
// already included above
// #include "greenhouse_interfaces/srv/detail/sensor__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace greenhouse_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Sensor_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Sensor_Response_type_support_ids_t;

static const _Sensor_Response_type_support_ids_t _Sensor_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Sensor_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Sensor_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Sensor_Response_type_support_symbol_names_t _Sensor_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, greenhouse_interfaces, srv, Sensor_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, greenhouse_interfaces, srv, Sensor_Response)),
  }
};

typedef struct _Sensor_Response_type_support_data_t
{
  void * data[2];
} _Sensor_Response_type_support_data_t;

static _Sensor_Response_type_support_data_t _Sensor_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Sensor_Response_message_typesupport_map = {
  2,
  "greenhouse_interfaces",
  &_Sensor_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Sensor_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Sensor_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Sensor_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Sensor_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &greenhouse_interfaces__srv__Sensor_Response__get_type_hash,
  &greenhouse_interfaces__srv__Sensor_Response__get_type_description,
  &greenhouse_interfaces__srv__Sensor_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace greenhouse_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, greenhouse_interfaces, srv, Sensor_Response)() {
  return &::greenhouse_interfaces::srv::rosidl_typesupport_c::Sensor_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "greenhouse_interfaces/srv/detail/sensor__struct.h"
// already included above
// #include "greenhouse_interfaces/srv/detail/sensor__type_support.h"
// already included above
// #include "greenhouse_interfaces/srv/detail/sensor__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace greenhouse_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Sensor_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Sensor_Event_type_support_ids_t;

static const _Sensor_Event_type_support_ids_t _Sensor_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Sensor_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Sensor_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Sensor_Event_type_support_symbol_names_t _Sensor_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, greenhouse_interfaces, srv, Sensor_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, greenhouse_interfaces, srv, Sensor_Event)),
  }
};

typedef struct _Sensor_Event_type_support_data_t
{
  void * data[2];
} _Sensor_Event_type_support_data_t;

static _Sensor_Event_type_support_data_t _Sensor_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Sensor_Event_message_typesupport_map = {
  2,
  "greenhouse_interfaces",
  &_Sensor_Event_message_typesupport_ids.typesupport_identifier[0],
  &_Sensor_Event_message_typesupport_symbol_names.symbol_name[0],
  &_Sensor_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Sensor_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Sensor_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &greenhouse_interfaces__srv__Sensor_Event__get_type_hash,
  &greenhouse_interfaces__srv__Sensor_Event__get_type_description,
  &greenhouse_interfaces__srv__Sensor_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace greenhouse_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, greenhouse_interfaces, srv, Sensor_Event)() {
  return &::greenhouse_interfaces::srv::rosidl_typesupport_c::Sensor_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "greenhouse_interfaces/srv/detail/sensor__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace greenhouse_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _Sensor_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Sensor_type_support_ids_t;

static const _Sensor_type_support_ids_t _Sensor_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Sensor_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Sensor_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Sensor_type_support_symbol_names_t _Sensor_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, greenhouse_interfaces, srv, Sensor)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, greenhouse_interfaces, srv, Sensor)),
  }
};

typedef struct _Sensor_type_support_data_t
{
  void * data[2];
} _Sensor_type_support_data_t;

static _Sensor_type_support_data_t _Sensor_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Sensor_service_typesupport_map = {
  2,
  "greenhouse_interfaces",
  &_Sensor_service_typesupport_ids.typesupport_identifier[0],
  &_Sensor_service_typesupport_symbol_names.symbol_name[0],
  &_Sensor_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Sensor_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Sensor_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &Sensor_Request_message_type_support_handle,
  &Sensor_Response_message_type_support_handle,
  &Sensor_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    greenhouse_interfaces,
    srv,
    Sensor
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    greenhouse_interfaces,
    srv,
    Sensor
  ),
  &greenhouse_interfaces__srv__Sensor__get_type_hash,
  &greenhouse_interfaces__srv__Sensor__get_type_description,
  &greenhouse_interfaces__srv__Sensor__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace greenhouse_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, greenhouse_interfaces, srv, Sensor)() {
  return &::greenhouse_interfaces::srv::rosidl_typesupport_c::Sensor_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
