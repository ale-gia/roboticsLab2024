// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from naoqi_bridge_msgs:msg/EventStamped.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__MSG__DETAIL__EVENT_STAMPED__STRUCT_HPP_
#define NAOQI_BRIDGE_MSGS__MSG__DETAIL__EVENT_STAMPED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'name'
// Member 'data'
#include "std_msgs/msg/detail/string__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__naoqi_bridge_msgs__msg__EventStamped __attribute__((deprecated))
#else
# define DEPRECATED__naoqi_bridge_msgs__msg__EventStamped __declspec(deprecated)
#endif

namespace naoqi_bridge_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EventStamped_
{
  using Type = EventStamped_<ContainerAllocator>;

  explicit EventStamped_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    name(_init),
    data(_init)
  {
    (void)_init;
  }

  explicit EventStamped_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    name(_alloc, _init),
    data(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _name_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _name_type name;
  using _data_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__name(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__data(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    naoqi_bridge_msgs::msg::EventStamped_<ContainerAllocator> *;
  using ConstRawPtr =
    const naoqi_bridge_msgs::msg::EventStamped_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<naoqi_bridge_msgs::msg::EventStamped_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<naoqi_bridge_msgs::msg::EventStamped_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      naoqi_bridge_msgs::msg::EventStamped_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<naoqi_bridge_msgs::msg::EventStamped_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      naoqi_bridge_msgs::msg::EventStamped_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<naoqi_bridge_msgs::msg::EventStamped_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<naoqi_bridge_msgs::msg::EventStamped_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<naoqi_bridge_msgs::msg::EventStamped_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__naoqi_bridge_msgs__msg__EventStamped
    std::shared_ptr<naoqi_bridge_msgs::msg::EventStamped_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__naoqi_bridge_msgs__msg__EventStamped
    std::shared_ptr<naoqi_bridge_msgs::msg::EventStamped_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EventStamped_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const EventStamped_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EventStamped_

// alias to use template instance with default allocator
using EventStamped =
  naoqi_bridge_msgs::msg::EventStamped_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace naoqi_bridge_msgs

#endif  // NAOQI_BRIDGE_MSGS__MSG__DETAIL__EVENT_STAMPED__STRUCT_HPP_
