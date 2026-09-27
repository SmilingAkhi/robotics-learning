// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from greenhouse_interfaces:srv/Sensor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "greenhouse_interfaces/srv/sensor.hpp"


#ifndef GREENHOUSE_INTERFACES__SRV__DETAIL__SENSOR__TRAITS_HPP_
#define GREENHOUSE_INTERFACES__SRV__DETAIL__SENSOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "greenhouse_interfaces/srv/detail/sensor__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace greenhouse_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Sensor_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: temperature
  {
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << ", ";
  }

  // member: humidity
  {
    out << "humidity: ";
    rosidl_generator_traits::value_to_yaml(msg.humidity, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Sensor_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << "\n";
  }

  // member: humidity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "humidity: ";
    rosidl_generator_traits::value_to_yaml(msg.humidity, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Sensor_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace greenhouse_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use greenhouse_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const greenhouse_interfaces::srv::Sensor_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  greenhouse_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use greenhouse_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const greenhouse_interfaces::srv::Sensor_Request & msg)
{
  return greenhouse_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<greenhouse_interfaces::srv::Sensor_Request>()
{
  return "greenhouse_interfaces::srv::Sensor_Request";
}

template<>
inline const char * name<greenhouse_interfaces::srv::Sensor_Request>()
{
  return "greenhouse_interfaces/srv/Sensor_Request";
}

template<>
struct has_fixed_size<greenhouse_interfaces::srv::Sensor_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<greenhouse_interfaces::srv::Sensor_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<greenhouse_interfaces::srv::Sensor_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace greenhouse_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Sensor_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: fan_on
  {
    out << "fan_on: ";
    rosidl_generator_traits::value_to_yaml(msg.fan_on, out);
    out << ", ";
  }

  // member: irrigation_on
  {
    out << "irrigation_on: ";
    rosidl_generator_traits::value_to_yaml(msg.irrigation_on, out);
    out << ", ";
  }

  // member: recommendation
  {
    out << "recommendation: ";
    rosidl_generator_traits::value_to_yaml(msg.recommendation, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Sensor_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: fan_on
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fan_on: ";
    rosidl_generator_traits::value_to_yaml(msg.fan_on, out);
    out << "\n";
  }

  // member: irrigation_on
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "irrigation_on: ";
    rosidl_generator_traits::value_to_yaml(msg.irrigation_on, out);
    out << "\n";
  }

  // member: recommendation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "recommendation: ";
    rosidl_generator_traits::value_to_yaml(msg.recommendation, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Sensor_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace greenhouse_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use greenhouse_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const greenhouse_interfaces::srv::Sensor_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  greenhouse_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use greenhouse_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const greenhouse_interfaces::srv::Sensor_Response & msg)
{
  return greenhouse_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<greenhouse_interfaces::srv::Sensor_Response>()
{
  return "greenhouse_interfaces::srv::Sensor_Response";
}

template<>
inline const char * name<greenhouse_interfaces::srv::Sensor_Response>()
{
  return "greenhouse_interfaces/srv/Sensor_Response";
}

template<>
struct has_fixed_size<greenhouse_interfaces::srv::Sensor_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<greenhouse_interfaces::srv::Sensor_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<greenhouse_interfaces::srv::Sensor_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace greenhouse_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Sensor_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Sensor_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Sensor_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace greenhouse_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use greenhouse_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const greenhouse_interfaces::srv::Sensor_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  greenhouse_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use greenhouse_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const greenhouse_interfaces::srv::Sensor_Event & msg)
{
  return greenhouse_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<greenhouse_interfaces::srv::Sensor_Event>()
{
  return "greenhouse_interfaces::srv::Sensor_Event";
}

template<>
inline const char * name<greenhouse_interfaces::srv::Sensor_Event>()
{
  return "greenhouse_interfaces/srv/Sensor_Event";
}

template<>
struct has_fixed_size<greenhouse_interfaces::srv::Sensor_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<greenhouse_interfaces::srv::Sensor_Event>
  : std::integral_constant<bool, has_bounded_size<greenhouse_interfaces::srv::Sensor_Request>::value && has_bounded_size<greenhouse_interfaces::srv::Sensor_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<greenhouse_interfaces::srv::Sensor_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<greenhouse_interfaces::srv::Sensor>()
{
  return "greenhouse_interfaces::srv::Sensor";
}

template<>
inline const char * name<greenhouse_interfaces::srv::Sensor>()
{
  return "greenhouse_interfaces/srv/Sensor";
}

template<>
struct has_fixed_size<greenhouse_interfaces::srv::Sensor>
  : std::integral_constant<
    bool,
    has_fixed_size<greenhouse_interfaces::srv::Sensor_Request>::value &&
    has_fixed_size<greenhouse_interfaces::srv::Sensor_Response>::value
  >
{
};

template<>
struct has_bounded_size<greenhouse_interfaces::srv::Sensor>
  : std::integral_constant<
    bool,
    has_bounded_size<greenhouse_interfaces::srv::Sensor_Request>::value &&
    has_bounded_size<greenhouse_interfaces::srv::Sensor_Response>::value
  >
{
};

template<>
struct is_service<greenhouse_interfaces::srv::Sensor>
  : std::true_type
{
};

template<>
struct is_service_request<greenhouse_interfaces::srv::Sensor_Request>
  : std::true_type
{
};

template<>
struct is_service_response<greenhouse_interfaces::srv::Sensor_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // GREENHOUSE_INTERFACES__SRV__DETAIL__SENSOR__TRAITS_HPP_
