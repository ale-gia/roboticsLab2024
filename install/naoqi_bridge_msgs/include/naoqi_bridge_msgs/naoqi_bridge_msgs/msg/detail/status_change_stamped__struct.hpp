// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from naoqi_bridge_msgs:msg/StatusChangeStamped.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__MSG__DETAIL__STATUS_CHANGE_STAMPED__STRUCT_HPP_
#define NAOQI_BRIDGE_MSGS__MSG__DETAIL__STATUS_CHANGE_STAMPED__STRUCT_HPP_

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
// Member 'old_status'
// Member 'new_status'
#include "std_msgs/msg/detail/string__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__naoqi_bridge_msgs__msg__StatusChangeStamped __attribute__((deprecated))
#else
# define DEPRECATED__naoqi_bridge_msgs__msg__StatusChangeStamped __declspec(deprecated)
#endif

namespace naoqi_bridge_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StatusChangeStamped_
{
  using Type = StatusChangeStamped_<ContainerAllocator>;

  explicit StatusChangeStamped_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    old_status(_init),
    new_status(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->recharge_type = 0;
    }
  }

  explicit StatusChangeStamped_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    old_status(_alloc, _init),
    new_status(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->recharge_type = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _recharge_type_type =
    int16_t;
  _recharge_type_type recharge_type;
  using _old_status_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _old_status_type old_status;
  using _new_status_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _new_status_type new_status;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__recharge_type(
    const int16_t & _arg)
  {
    this->recharge_type = _arg;
    return *this;
  }
  Type & set__old_status(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->old_status = _arg;
    return *this;
  }
  Type & set__new_status(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->new_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    naoqi_bridge_msgs::msg::StatusChangeStamped_<ContainerAllocator> *;
  using ConstRawPtr =
    const naoqi_bridge_msgs::msg::StatusChangeStamped_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<naoqi_bridge_msgs::msg::StatusChangeStamped_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<naoqi_bridge_msgs::msg::StatusChangeStamped_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      naoqi_bridge_msgs::msg::StatusChangeStamped_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<naoqi_bridge_msgs::msg::StatusChangeStamped_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      naoqi_bridge_msgs::msg::StatusChangeStamped_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<naoqi_bridge_msgs::msg::StatusChangeStamped_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<naoqi_bridge_msgs::msg::StatusChangeStamped_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<naoqi_bridge_msgs::msg::StatusChangeStamped_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__naoqi_bridge_msgs__msg__StatusChangeStamped
    std::shared_ptr<naoqi_bridge_msgs::msg::StatusChangeStamped_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__naoqi_bridge_msgs__msg__StatusChangeStamped
    std::shared_ptr<naoqi_bridge_msgs::msg::StatusChangeStamped_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StatusChangeStamped_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->recharge_type != other.recharge_type) {
      return false;
    }
    if (this->old_status != other.old_status) {
      return false;
    }
    if (this->new_status != other.new_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const StatusChangeStamped_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StatusChangeStamped_

// alias to use template instance with default allocator
using StatusChangeStamped =
  naoqi_bridge_msgs::msg::StatusChangeStamped_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace naoqi_bridge_msgs

#endif  // NAOQI_BRIDGE_MSGS__MSG__DETAIL__STATUS_CHANGE_STAMPED__STRUCT_HPP_
