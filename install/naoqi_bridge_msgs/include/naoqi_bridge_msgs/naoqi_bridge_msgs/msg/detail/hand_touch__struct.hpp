// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from naoqi_bridge_msgs:msg/HandTouch.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__MSG__DETAIL__HAND_TOUCH__STRUCT_HPP_
#define NAOQI_BRIDGE_MSGS__MSG__DETAIL__HAND_TOUCH__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__naoqi_bridge_msgs__msg__HandTouch __attribute__((deprecated))
#else
# define DEPRECATED__naoqi_bridge_msgs__msg__HandTouch __declspec(deprecated)
#endif

namespace naoqi_bridge_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HandTouch_
{
  using Type = HandTouch_<ContainerAllocator>;

  explicit HandTouch_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hand = 0;
      this->state = 0;
    }
  }

  explicit HandTouch_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hand = 0;
      this->state = 0;
    }
  }

  // field types and members
  using _hand_type =
    uint8_t;
  _hand_type hand;
  using _state_type =
    uint8_t;
  _state_type state;

  // setters for named parameter idiom
  Type & set__hand(
    const uint8_t & _arg)
  {
    this->hand = _arg;
    return *this;
  }
  Type & set__state(
    const uint8_t & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t RIGHT_BACK =
    0u;
  static constexpr uint8_t RIGHT_LEFT =
    1u;
  static constexpr uint8_t RIGHT_RIGHT =
    2u;
  static constexpr uint8_t LEFT_BACK =
    3u;
  static constexpr uint8_t LEFT_LEFT =
    4u;
  static constexpr uint8_t LEFT_RIGHT =
    5u;
  static constexpr uint8_t STATE_RELEASED =
    0u;
  static constexpr uint8_t STATE_PRESSED =
    1u;

  // pointer types
  using RawPtr =
    naoqi_bridge_msgs::msg::HandTouch_<ContainerAllocator> *;
  using ConstRawPtr =
    const naoqi_bridge_msgs::msg::HandTouch_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<naoqi_bridge_msgs::msg::HandTouch_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<naoqi_bridge_msgs::msg::HandTouch_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      naoqi_bridge_msgs::msg::HandTouch_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<naoqi_bridge_msgs::msg::HandTouch_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      naoqi_bridge_msgs::msg::HandTouch_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<naoqi_bridge_msgs::msg::HandTouch_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<naoqi_bridge_msgs::msg::HandTouch_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<naoqi_bridge_msgs::msg::HandTouch_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__naoqi_bridge_msgs__msg__HandTouch
    std::shared_ptr<naoqi_bridge_msgs::msg::HandTouch_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__naoqi_bridge_msgs__msg__HandTouch
    std::shared_ptr<naoqi_bridge_msgs::msg::HandTouch_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HandTouch_ & other) const
  {
    if (this->hand != other.hand) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const HandTouch_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HandTouch_

// alias to use template instance with default allocator
using HandTouch =
  naoqi_bridge_msgs::msg::HandTouch_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t HandTouch_<ContainerAllocator>::RIGHT_BACK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t HandTouch_<ContainerAllocator>::RIGHT_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t HandTouch_<ContainerAllocator>::RIGHT_RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t HandTouch_<ContainerAllocator>::LEFT_BACK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t HandTouch_<ContainerAllocator>::LEFT_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t HandTouch_<ContainerAllocator>::LEFT_RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t HandTouch_<ContainerAllocator>::STATE_RELEASED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t HandTouch_<ContainerAllocator>::STATE_PRESSED;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace naoqi_bridge_msgs

#endif  // NAOQI_BRIDGE_MSGS__MSG__DETAIL__HAND_TOUCH__STRUCT_HPP_
