// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from greenhouse_interfaces:srv/Sensor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "greenhouse_interfaces/srv/sensor.hpp"


#ifndef GREENHOUSE_INTERFACES__SRV__DETAIL__SENSOR__BUILDER_HPP_
#define GREENHOUSE_INTERFACES__SRV__DETAIL__SENSOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "greenhouse_interfaces/srv/detail/sensor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace greenhouse_interfaces
{

namespace srv
{

namespace builder
{

class Init_Sensor_Request_humidity
{
public:
  explicit Init_Sensor_Request_humidity(::greenhouse_interfaces::srv::Sensor_Request & msg)
  : msg_(msg)
  {}
  ::greenhouse_interfaces::srv::Sensor_Request humidity(::greenhouse_interfaces::srv::Sensor_Request::_humidity_type arg)
  {
    msg_.humidity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::greenhouse_interfaces::srv::Sensor_Request msg_;
};

class Init_Sensor_Request_temperature
{
public:
  Init_Sensor_Request_temperature()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Sensor_Request_humidity temperature(::greenhouse_interfaces::srv::Sensor_Request::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_Sensor_Request_humidity(msg_);
  }

private:
  ::greenhouse_interfaces::srv::Sensor_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::greenhouse_interfaces::srv::Sensor_Request>()
{
  return greenhouse_interfaces::srv::builder::Init_Sensor_Request_temperature();
}

}  // namespace greenhouse_interfaces


namespace greenhouse_interfaces
{

namespace srv
{

namespace builder
{

class Init_Sensor_Response_recommendation
{
public:
  explicit Init_Sensor_Response_recommendation(::greenhouse_interfaces::srv::Sensor_Response & msg)
  : msg_(msg)
  {}
  ::greenhouse_interfaces::srv::Sensor_Response recommendation(::greenhouse_interfaces::srv::Sensor_Response::_recommendation_type arg)
  {
    msg_.recommendation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::greenhouse_interfaces::srv::Sensor_Response msg_;
};

class Init_Sensor_Response_irrigation_on
{
public:
  explicit Init_Sensor_Response_irrigation_on(::greenhouse_interfaces::srv::Sensor_Response & msg)
  : msg_(msg)
  {}
  Init_Sensor_Response_recommendation irrigation_on(::greenhouse_interfaces::srv::Sensor_Response::_irrigation_on_type arg)
  {
    msg_.irrigation_on = std::move(arg);
    return Init_Sensor_Response_recommendation(msg_);
  }

private:
  ::greenhouse_interfaces::srv::Sensor_Response msg_;
};

class Init_Sensor_Response_fan_on
{
public:
  Init_Sensor_Response_fan_on()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Sensor_Response_irrigation_on fan_on(::greenhouse_interfaces::srv::Sensor_Response::_fan_on_type arg)
  {
    msg_.fan_on = std::move(arg);
    return Init_Sensor_Response_irrigation_on(msg_);
  }

private:
  ::greenhouse_interfaces::srv::Sensor_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::greenhouse_interfaces::srv::Sensor_Response>()
{
  return greenhouse_interfaces::srv::builder::Init_Sensor_Response_fan_on();
}

}  // namespace greenhouse_interfaces


namespace greenhouse_interfaces
{

namespace srv
{

namespace builder
{

class Init_Sensor_Event_response
{
public:
  explicit Init_Sensor_Event_response(::greenhouse_interfaces::srv::Sensor_Event & msg)
  : msg_(msg)
  {}
  ::greenhouse_interfaces::srv::Sensor_Event response(::greenhouse_interfaces::srv::Sensor_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::greenhouse_interfaces::srv::Sensor_Event msg_;
};

class Init_Sensor_Event_request
{
public:
  explicit Init_Sensor_Event_request(::greenhouse_interfaces::srv::Sensor_Event & msg)
  : msg_(msg)
  {}
  Init_Sensor_Event_response request(::greenhouse_interfaces::srv::Sensor_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Sensor_Event_response(msg_);
  }

private:
  ::greenhouse_interfaces::srv::Sensor_Event msg_;
};

class Init_Sensor_Event_info
{
public:
  Init_Sensor_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Sensor_Event_request info(::greenhouse_interfaces::srv::Sensor_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Sensor_Event_request(msg_);
  }

private:
  ::greenhouse_interfaces::srv::Sensor_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::greenhouse_interfaces::srv::Sensor_Event>()
{
  return greenhouse_interfaces::srv::builder::Init_Sensor_Event_info();
}

}  // namespace greenhouse_interfaces

#endif  // GREENHOUSE_INTERFACES__SRV__DETAIL__SENSOR__BUILDER_HPP_
