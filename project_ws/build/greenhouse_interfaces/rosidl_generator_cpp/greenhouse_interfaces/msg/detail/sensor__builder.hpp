// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from greenhouse_interfaces:msg/Sensor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "greenhouse_interfaces/msg/sensor.hpp"


#ifndef GREENHOUSE_INTERFACES__MSG__DETAIL__SENSOR__BUILDER_HPP_
#define GREENHOUSE_INTERFACES__MSG__DETAIL__SENSOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "greenhouse_interfaces/msg/detail/sensor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace greenhouse_interfaces
{

namespace msg
{

namespace builder
{

class Init_Sensor_humidity
{
public:
  explicit Init_Sensor_humidity(::greenhouse_interfaces::msg::Sensor & msg)
  : msg_(msg)
  {}
  ::greenhouse_interfaces::msg::Sensor humidity(::greenhouse_interfaces::msg::Sensor::_humidity_type arg)
  {
    msg_.humidity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::greenhouse_interfaces::msg::Sensor msg_;
};

class Init_Sensor_temperature
{
public:
  Init_Sensor_temperature()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Sensor_humidity temperature(::greenhouse_interfaces::msg::Sensor::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_Sensor_humidity(msg_);
  }

private:
  ::greenhouse_interfaces::msg::Sensor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::greenhouse_interfaces::msg::Sensor>()
{
  return greenhouse_interfaces::msg::builder::Init_Sensor_temperature();
}

}  // namespace greenhouse_interfaces

#endif  // GREENHOUSE_INTERFACES__MSG__DETAIL__SENSOR__BUILDER_HPP_
