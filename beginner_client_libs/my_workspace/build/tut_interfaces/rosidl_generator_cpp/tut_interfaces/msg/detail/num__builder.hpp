// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tut_interfaces:msg/Num.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "tut_interfaces/msg/num.hpp"


#ifndef TUT_INTERFACES__MSG__DETAIL__NUM__BUILDER_HPP_
#define TUT_INTERFACES__MSG__DETAIL__NUM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tut_interfaces/msg/detail/num__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tut_interfaces
{

namespace msg
{

namespace builder
{

class Init_Num_num
{
public:
  Init_Num_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tut_interfaces::msg::Num num(::tut_interfaces::msg::Num::_num_type arg)
  {
    msg_.num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tut_interfaces::msg::Num msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tut_interfaces::msg::Num>()
{
  return tut_interfaces::msg::builder::Init_Num_num();
}

}  // namespace tut_interfaces

#endif  // TUT_INTERFACES__MSG__DETAIL__NUM__BUILDER_HPP_
