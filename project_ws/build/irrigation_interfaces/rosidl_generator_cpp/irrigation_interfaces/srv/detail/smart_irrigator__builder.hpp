// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irrigation_interfaces:srv/SmartIrrigator.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "irrigation_interfaces/srv/smart_irrigator.hpp"


#ifndef IRRIGATION_INTERFACES__SRV__DETAIL__SMART_IRRIGATOR__BUILDER_HPP_
#define IRRIGATION_INTERFACES__SRV__DETAIL__SMART_IRRIGATOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irrigation_interfaces/srv/detail/smart_irrigator__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irrigation_interfaces
{

namespace srv
{

namespace builder
{

class Init_SmartIrrigator_Request_mc
{
public:
  explicit Init_SmartIrrigator_Request_mc(::irrigation_interfaces::srv::SmartIrrigator_Request & msg)
  : msg_(msg)
  {}
  ::irrigation_interfaces::srv::SmartIrrigator_Request mc(::irrigation_interfaces::srv::SmartIrrigator_Request::_mc_type arg)
  {
    msg_.mc = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irrigation_interfaces::srv::SmartIrrigator_Request msg_;
};

class Init_SmartIrrigator_Request_temp
{
public:
  Init_SmartIrrigator_Request_temp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SmartIrrigator_Request_mc temp(::irrigation_interfaces::srv::SmartIrrigator_Request::_temp_type arg)
  {
    msg_.temp = std::move(arg);
    return Init_SmartIrrigator_Request_mc(msg_);
  }

private:
  ::irrigation_interfaces::srv::SmartIrrigator_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::irrigation_interfaces::srv::SmartIrrigator_Request>()
{
  return irrigation_interfaces::srv::builder::Init_SmartIrrigator_Request_temp();
}

}  // namespace irrigation_interfaces


namespace irrigation_interfaces
{

namespace srv
{

namespace builder
{

class Init_SmartIrrigator_Response_reason
{
public:
  explicit Init_SmartIrrigator_Response_reason(::irrigation_interfaces::srv::SmartIrrigator_Response & msg)
  : msg_(msg)
  {}
  ::irrigation_interfaces::srv::SmartIrrigator_Response reason(::irrigation_interfaces::srv::SmartIrrigator_Response::_reason_type arg)
  {
    msg_.reason = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irrigation_interfaces::srv::SmartIrrigator_Response msg_;
};

class Init_SmartIrrigator_Response_irrigate
{
public:
  Init_SmartIrrigator_Response_irrigate()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SmartIrrigator_Response_reason irrigate(::irrigation_interfaces::srv::SmartIrrigator_Response::_irrigate_type arg)
  {
    msg_.irrigate = std::move(arg);
    return Init_SmartIrrigator_Response_reason(msg_);
  }

private:
  ::irrigation_interfaces::srv::SmartIrrigator_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::irrigation_interfaces::srv::SmartIrrigator_Response>()
{
  return irrigation_interfaces::srv::builder::Init_SmartIrrigator_Response_irrigate();
}

}  // namespace irrigation_interfaces


namespace irrigation_interfaces
{

namespace srv
{

namespace builder
{

class Init_SmartIrrigator_Event_response
{
public:
  explicit Init_SmartIrrigator_Event_response(::irrigation_interfaces::srv::SmartIrrigator_Event & msg)
  : msg_(msg)
  {}
  ::irrigation_interfaces::srv::SmartIrrigator_Event response(::irrigation_interfaces::srv::SmartIrrigator_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irrigation_interfaces::srv::SmartIrrigator_Event msg_;
};

class Init_SmartIrrigator_Event_request
{
public:
  explicit Init_SmartIrrigator_Event_request(::irrigation_interfaces::srv::SmartIrrigator_Event & msg)
  : msg_(msg)
  {}
  Init_SmartIrrigator_Event_response request(::irrigation_interfaces::srv::SmartIrrigator_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SmartIrrigator_Event_response(msg_);
  }

private:
  ::irrigation_interfaces::srv::SmartIrrigator_Event msg_;
};

class Init_SmartIrrigator_Event_info
{
public:
  Init_SmartIrrigator_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SmartIrrigator_Event_request info(::irrigation_interfaces::srv::SmartIrrigator_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SmartIrrigator_Event_request(msg_);
  }

private:
  ::irrigation_interfaces::srv::SmartIrrigator_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::irrigation_interfaces::srv::SmartIrrigator_Event>()
{
  return irrigation_interfaces::srv::builder::Init_SmartIrrigator_Event_info();
}

}  // namespace irrigation_interfaces

#endif  // IRRIGATION_INTERFACES__SRV__DETAIL__SMART_IRRIGATOR__BUILDER_HPP_
