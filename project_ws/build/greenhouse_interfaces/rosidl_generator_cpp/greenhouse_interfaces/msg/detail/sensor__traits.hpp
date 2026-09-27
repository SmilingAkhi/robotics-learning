// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from greenhouse_interfaces:msg/Sensor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "greenhouse_interfaces/msg/sensor.hpp"


#ifndef GREENHOUSE_INTERFACES__MSG__DETAIL__SENSOR__TRAITS_HPP_
#define GREENHOUSE_INTERFACES__MSG__DETAIL__SENSOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "greenhouse_interfaces/msg/detail/sensor__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace greenhouse_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Sensor & msg,
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
  const Sensor & msg,
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

inline std::string to_yaml(const Sensor & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace greenhouse_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use greenhouse_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const greenhouse_interfaces::msg::Sensor & msg,
  std::ostream & out, size_t indentation = 0)
{
  greenhouse_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use greenhouse_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const greenhouse_interfaces::msg::Sensor & msg)
{
  return greenhouse_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<greenhouse_interfaces::msg::Sensor>()
{
  return "greenhouse_interfaces::msg::Sensor";
}

template<>
inline const char * name<greenhouse_interfaces::msg::Sensor>()
{
  return "greenhouse_interfaces/msg/Sensor";
}

template<>
struct has_fixed_size<greenhouse_interfaces::msg::Sensor>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<greenhouse_interfaces::msg::Sensor>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<greenhouse_interfaces::msg::Sensor>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GREENHOUSE_INTERFACES__MSG__DETAIL__SENSOR__TRAITS_HPP_
