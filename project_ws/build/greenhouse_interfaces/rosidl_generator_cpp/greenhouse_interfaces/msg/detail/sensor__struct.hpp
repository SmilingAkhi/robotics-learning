// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from greenhouse_interfaces:msg/Sensor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "greenhouse_interfaces/msg/sensor.hpp"


#ifndef GREENHOUSE_INTERFACES__MSG__DETAIL__SENSOR__STRUCT_HPP_
#define GREENHOUSE_INTERFACES__MSG__DETAIL__SENSOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__greenhouse_interfaces__msg__Sensor __attribute__((deprecated))
#else
# define DEPRECATED__greenhouse_interfaces__msg__Sensor __declspec(deprecated)
#endif

namespace greenhouse_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Sensor_
{
  using Type = Sensor_<ContainerAllocator>;

  explicit Sensor_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->temperature = 0ll;
      this->humidity = 0ll;
    }
  }

  explicit Sensor_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->temperature = 0ll;
      this->humidity = 0ll;
    }
  }

  // field types and members
  using _temperature_type =
    int64_t;
  _temperature_type temperature;
  using _humidity_type =
    int64_t;
  _humidity_type humidity;

  // setters for named parameter idiom
  Type & set__temperature(
    const int64_t & _arg)
  {
    this->temperature = _arg;
    return *this;
  }
  Type & set__humidity(
    const int64_t & _arg)
  {
    this->humidity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    greenhouse_interfaces::msg::Sensor_<ContainerAllocator> *;
  using ConstRawPtr =
    const greenhouse_interfaces::msg::Sensor_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<greenhouse_interfaces::msg::Sensor_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<greenhouse_interfaces::msg::Sensor_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      greenhouse_interfaces::msg::Sensor_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<greenhouse_interfaces::msg::Sensor_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      greenhouse_interfaces::msg::Sensor_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<greenhouse_interfaces::msg::Sensor_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<greenhouse_interfaces::msg::Sensor_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<greenhouse_interfaces::msg::Sensor_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__greenhouse_interfaces__msg__Sensor
    std::shared_ptr<greenhouse_interfaces::msg::Sensor_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__greenhouse_interfaces__msg__Sensor
    std::shared_ptr<greenhouse_interfaces::msg::Sensor_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Sensor_ & other) const
  {
    if (this->temperature != other.temperature) {
      return false;
    }
    if (this->humidity != other.humidity) {
      return false;
    }
    return true;
  }
  bool operator!=(const Sensor_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Sensor_

// alias to use template instance with default allocator
using Sensor =
  greenhouse_interfaces::msg::Sensor_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace greenhouse_interfaces

#endif  // GREENHOUSE_INTERFACES__MSG__DETAIL__SENSOR__STRUCT_HPP_
