// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from irrigation_interfaces:srv/SmartIrrigator.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "irrigation_interfaces/srv/smart_irrigator.hpp"


#ifndef IRRIGATION_INTERFACES__SRV__DETAIL__SMART_IRRIGATOR__TRAITS_HPP_
#define IRRIGATION_INTERFACES__SRV__DETAIL__SMART_IRRIGATOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "irrigation_interfaces/srv/detail/smart_irrigator__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace irrigation_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SmartIrrigator_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: temp
  {
    out << "temp: ";
    rosidl_generator_traits::value_to_yaml(msg.temp, out);
    out << ", ";
  }

  // member: mc
  {
    out << "mc: ";
    rosidl_generator_traits::value_to_yaml(msg.mc, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SmartIrrigator_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temp: ";
    rosidl_generator_traits::value_to_yaml(msg.temp, out);
    out << "\n";
  }

  // member: mc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mc: ";
    rosidl_generator_traits::value_to_yaml(msg.mc, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SmartIrrigator_Request & msg, bool use_flow_style = false)
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

}  // namespace irrigation_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use irrigation_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const irrigation_interfaces::srv::SmartIrrigator_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  irrigation_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use irrigation_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const irrigation_interfaces::srv::SmartIrrigator_Request & msg)
{
  return irrigation_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<irrigation_interfaces::srv::SmartIrrigator_Request>()
{
  return "irrigation_interfaces::srv::SmartIrrigator_Request";
}

template<>
inline const char * name<irrigation_interfaces::srv::SmartIrrigator_Request>()
{
  return "irrigation_interfaces/srv/SmartIrrigator_Request";
}

template<>
struct has_fixed_size<irrigation_interfaces::srv::SmartIrrigator_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<irrigation_interfaces::srv::SmartIrrigator_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<irrigation_interfaces::srv::SmartIrrigator_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace irrigation_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SmartIrrigator_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: irrigate
  {
    out << "irrigate: ";
    rosidl_generator_traits::value_to_yaml(msg.irrigate, out);
    out << ", ";
  }

  // member: reason
  {
    out << "reason: ";
    rosidl_generator_traits::value_to_yaml(msg.reason, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SmartIrrigator_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: irrigate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "irrigate: ";
    rosidl_generator_traits::value_to_yaml(msg.irrigate, out);
    out << "\n";
  }

  // member: reason
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reason: ";
    rosidl_generator_traits::value_to_yaml(msg.reason, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SmartIrrigator_Response & msg, bool use_flow_style = false)
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

}  // namespace irrigation_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use irrigation_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const irrigation_interfaces::srv::SmartIrrigator_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  irrigation_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use irrigation_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const irrigation_interfaces::srv::SmartIrrigator_Response & msg)
{
  return irrigation_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<irrigation_interfaces::srv::SmartIrrigator_Response>()
{
  return "irrigation_interfaces::srv::SmartIrrigator_Response";
}

template<>
inline const char * name<irrigation_interfaces::srv::SmartIrrigator_Response>()
{
  return "irrigation_interfaces/srv/SmartIrrigator_Response";
}

template<>
struct has_fixed_size<irrigation_interfaces::srv::SmartIrrigator_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<irrigation_interfaces::srv::SmartIrrigator_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<irrigation_interfaces::srv::SmartIrrigator_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace irrigation_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SmartIrrigator_Event & msg,
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
  const SmartIrrigator_Event & msg,
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

inline std::string to_yaml(const SmartIrrigator_Event & msg, bool use_flow_style = false)
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

}  // namespace irrigation_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use irrigation_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const irrigation_interfaces::srv::SmartIrrigator_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  irrigation_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use irrigation_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const irrigation_interfaces::srv::SmartIrrigator_Event & msg)
{
  return irrigation_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<irrigation_interfaces::srv::SmartIrrigator_Event>()
{
  return "irrigation_interfaces::srv::SmartIrrigator_Event";
}

template<>
inline const char * name<irrigation_interfaces::srv::SmartIrrigator_Event>()
{
  return "irrigation_interfaces/srv/SmartIrrigator_Event";
}

template<>
struct has_fixed_size<irrigation_interfaces::srv::SmartIrrigator_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<irrigation_interfaces::srv::SmartIrrigator_Event>
  : std::integral_constant<bool, has_bounded_size<irrigation_interfaces::srv::SmartIrrigator_Request>::value && has_bounded_size<irrigation_interfaces::srv::SmartIrrigator_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<irrigation_interfaces::srv::SmartIrrigator_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<irrigation_interfaces::srv::SmartIrrigator>()
{
  return "irrigation_interfaces::srv::SmartIrrigator";
}

template<>
inline const char * name<irrigation_interfaces::srv::SmartIrrigator>()
{
  return "irrigation_interfaces/srv/SmartIrrigator";
}

template<>
struct has_fixed_size<irrigation_interfaces::srv::SmartIrrigator>
  : std::integral_constant<
    bool,
    has_fixed_size<irrigation_interfaces::srv::SmartIrrigator_Request>::value &&
    has_fixed_size<irrigation_interfaces::srv::SmartIrrigator_Response>::value
  >
{
};

template<>
struct has_bounded_size<irrigation_interfaces::srv::SmartIrrigator>
  : std::integral_constant<
    bool,
    has_bounded_size<irrigation_interfaces::srv::SmartIrrigator_Request>::value &&
    has_bounded_size<irrigation_interfaces::srv::SmartIrrigator_Response>::value
  >
{
};

template<>
struct is_service<irrigation_interfaces::srv::SmartIrrigator>
  : std::true_type
{
};

template<>
struct is_service_request<irrigation_interfaces::srv::SmartIrrigator_Request>
  : std::true_type
{
};

template<>
struct is_service_response<irrigation_interfaces::srv::SmartIrrigator_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // IRRIGATION_INTERFACES__SRV__DETAIL__SMART_IRRIGATOR__TRAITS_HPP_
