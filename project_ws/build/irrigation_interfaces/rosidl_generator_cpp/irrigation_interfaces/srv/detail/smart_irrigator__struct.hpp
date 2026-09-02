// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from irrigation_interfaces:srv/SmartIrrigator.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "irrigation_interfaces/srv/smart_irrigator.hpp"


#ifndef IRRIGATION_INTERFACES__SRV__DETAIL__SMART_IRRIGATOR__STRUCT_HPP_
#define IRRIGATION_INTERFACES__SRV__DETAIL__SMART_IRRIGATOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__irrigation_interfaces__srv__SmartIrrigator_Request __attribute__((deprecated))
#else
# define DEPRECATED__irrigation_interfaces__srv__SmartIrrigator_Request __declspec(deprecated)
#endif

namespace irrigation_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SmartIrrigator_Request_
{
  using Type = SmartIrrigator_Request_<ContainerAllocator>;

  explicit SmartIrrigator_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->temp = 0.0f;
      this->mc = 0.0f;
    }
  }

  explicit SmartIrrigator_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->temp = 0.0f;
      this->mc = 0.0f;
    }
  }

  // field types and members
  using _temp_type =
    float;
  _temp_type temp;
  using _mc_type =
    float;
  _mc_type mc;

  // setters for named parameter idiom
  Type & set__temp(
    const float & _arg)
  {
    this->temp = _arg;
    return *this;
  }
  Type & set__mc(
    const float & _arg)
  {
    this->mc = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    irrigation_interfaces::srv::SmartIrrigator_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const irrigation_interfaces::srv::SmartIrrigator_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irrigation_interfaces::srv::SmartIrrigator_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irrigation_interfaces::srv::SmartIrrigator_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irrigation_interfaces::srv::SmartIrrigator_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irrigation_interfaces::srv::SmartIrrigator_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irrigation_interfaces::srv::SmartIrrigator_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irrigation_interfaces::srv::SmartIrrigator_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irrigation_interfaces::srv::SmartIrrigator_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irrigation_interfaces::srv::SmartIrrigator_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irrigation_interfaces__srv__SmartIrrigator_Request
    std::shared_ptr<irrigation_interfaces::srv::SmartIrrigator_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irrigation_interfaces__srv__SmartIrrigator_Request
    std::shared_ptr<irrigation_interfaces::srv::SmartIrrigator_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SmartIrrigator_Request_ & other) const
  {
    if (this->temp != other.temp) {
      return false;
    }
    if (this->mc != other.mc) {
      return false;
    }
    return true;
  }
  bool operator!=(const SmartIrrigator_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SmartIrrigator_Request_

// alias to use template instance with default allocator
using SmartIrrigator_Request =
  irrigation_interfaces::srv::SmartIrrigator_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace irrigation_interfaces


#ifndef _WIN32
# define DEPRECATED__irrigation_interfaces__srv__SmartIrrigator_Response __attribute__((deprecated))
#else
# define DEPRECATED__irrigation_interfaces__srv__SmartIrrigator_Response __declspec(deprecated)
#endif

namespace irrigation_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SmartIrrigator_Response_
{
  using Type = SmartIrrigator_Response_<ContainerAllocator>;

  explicit SmartIrrigator_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->irrigate = false;
      this->reason = "";
    }
  }

  explicit SmartIrrigator_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : reason(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->irrigate = false;
      this->reason = "";
    }
  }

  // field types and members
  using _irrigate_type =
    bool;
  _irrigate_type irrigate;
  using _reason_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _reason_type reason;

  // setters for named parameter idiom
  Type & set__irrigate(
    const bool & _arg)
  {
    this->irrigate = _arg;
    return *this;
  }
  Type & set__reason(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->reason = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    irrigation_interfaces::srv::SmartIrrigator_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const irrigation_interfaces::srv::SmartIrrigator_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irrigation_interfaces::srv::SmartIrrigator_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irrigation_interfaces::srv::SmartIrrigator_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irrigation_interfaces::srv::SmartIrrigator_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irrigation_interfaces::srv::SmartIrrigator_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irrigation_interfaces::srv::SmartIrrigator_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irrigation_interfaces::srv::SmartIrrigator_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irrigation_interfaces::srv::SmartIrrigator_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irrigation_interfaces::srv::SmartIrrigator_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irrigation_interfaces__srv__SmartIrrigator_Response
    std::shared_ptr<irrigation_interfaces::srv::SmartIrrigator_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irrigation_interfaces__srv__SmartIrrigator_Response
    std::shared_ptr<irrigation_interfaces::srv::SmartIrrigator_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SmartIrrigator_Response_ & other) const
  {
    if (this->irrigate != other.irrigate) {
      return false;
    }
    if (this->reason != other.reason) {
      return false;
    }
    return true;
  }
  bool operator!=(const SmartIrrigator_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SmartIrrigator_Response_

// alias to use template instance with default allocator
using SmartIrrigator_Response =
  irrigation_interfaces::srv::SmartIrrigator_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace irrigation_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__irrigation_interfaces__srv__SmartIrrigator_Event __attribute__((deprecated))
#else
# define DEPRECATED__irrigation_interfaces__srv__SmartIrrigator_Event __declspec(deprecated)
#endif

namespace irrigation_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SmartIrrigator_Event_
{
  using Type = SmartIrrigator_Event_<ContainerAllocator>;

  explicit SmartIrrigator_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit SmartIrrigator_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<irrigation_interfaces::srv::SmartIrrigator_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<irrigation_interfaces::srv::SmartIrrigator_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<irrigation_interfaces::srv::SmartIrrigator_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<irrigation_interfaces::srv::SmartIrrigator_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<irrigation_interfaces::srv::SmartIrrigator_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<irrigation_interfaces::srv::SmartIrrigator_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<irrigation_interfaces::srv::SmartIrrigator_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<irrigation_interfaces::srv::SmartIrrigator_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    irrigation_interfaces::srv::SmartIrrigator_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const irrigation_interfaces::srv::SmartIrrigator_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irrigation_interfaces::srv::SmartIrrigator_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irrigation_interfaces::srv::SmartIrrigator_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irrigation_interfaces::srv::SmartIrrigator_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irrigation_interfaces::srv::SmartIrrigator_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irrigation_interfaces::srv::SmartIrrigator_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irrigation_interfaces::srv::SmartIrrigator_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irrigation_interfaces::srv::SmartIrrigator_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irrigation_interfaces::srv::SmartIrrigator_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irrigation_interfaces__srv__SmartIrrigator_Event
    std::shared_ptr<irrigation_interfaces::srv::SmartIrrigator_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irrigation_interfaces__srv__SmartIrrigator_Event
    std::shared_ptr<irrigation_interfaces::srv::SmartIrrigator_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SmartIrrigator_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const SmartIrrigator_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SmartIrrigator_Event_

// alias to use template instance with default allocator
using SmartIrrigator_Event =
  irrigation_interfaces::srv::SmartIrrigator_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace irrigation_interfaces

namespace irrigation_interfaces
{

namespace srv
{

struct SmartIrrigator
{
  using Request = irrigation_interfaces::srv::SmartIrrigator_Request;
  using Response = irrigation_interfaces::srv::SmartIrrigator_Response;
  using Event = irrigation_interfaces::srv::SmartIrrigator_Event;
};

}  // namespace srv

}  // namespace irrigation_interfaces

#endif  // IRRIGATION_INTERFACES__SRV__DETAIL__SMART_IRRIGATOR__STRUCT_HPP_
