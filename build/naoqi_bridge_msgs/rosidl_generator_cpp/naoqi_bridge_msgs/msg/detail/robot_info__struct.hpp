// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from naoqi_bridge_msgs:msg/RobotInfo.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__MSG__DETAIL__ROBOT_INFO__STRUCT_HPP_
#define NAOQI_BRIDGE_MSGS__MSG__DETAIL__ROBOT_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__naoqi_bridge_msgs__msg__RobotInfo __attribute__((deprecated))
#else
# define DEPRECATED__naoqi_bridge_msgs__msg__RobotInfo __declspec(deprecated)
#endif

namespace naoqi_bridge_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotInfo_
{
  using Type = RobotInfo_<ContainerAllocator>;

  explicit RobotInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
      this->model = "";
      this->head_version = "";
      this->body_version = "";
      this->arm_version = "";
      this->has_laser = false;
      this->has_extended_arms = false;
      this->number_of_legs = 0l;
      this->number_of_arms = 0l;
      this->number_of_hands = 0l;
    }
  }

  explicit RobotInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : model(_alloc),
    head_version(_alloc),
    body_version(_alloc),
    arm_version(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
      this->model = "";
      this->head_version = "";
      this->body_version = "";
      this->arm_version = "";
      this->has_laser = false;
      this->has_extended_arms = false;
      this->number_of_legs = 0l;
      this->number_of_arms = 0l;
      this->number_of_hands = 0l;
    }
  }

  // field types and members
  using _type_type =
    uint8_t;
  _type_type type;
  using _model_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _model_type model;
  using _head_version_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _head_version_type head_version;
  using _body_version_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _body_version_type body_version;
  using _arm_version_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _arm_version_type arm_version;
  using _has_laser_type =
    bool;
  _has_laser_type has_laser;
  using _has_extended_arms_type =
    bool;
  _has_extended_arms_type has_extended_arms;
  using _number_of_legs_type =
    int32_t;
  _number_of_legs_type number_of_legs;
  using _number_of_arms_type =
    int32_t;
  _number_of_arms_type number_of_arms;
  using _number_of_hands_type =
    int32_t;
  _number_of_hands_type number_of_hands;

  // setters for named parameter idiom
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__model(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->model = _arg;
    return *this;
  }
  Type & set__head_version(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->head_version = _arg;
    return *this;
  }
  Type & set__body_version(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->body_version = _arg;
    return *this;
  }
  Type & set__arm_version(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->arm_version = _arg;
    return *this;
  }
  Type & set__has_laser(
    const bool & _arg)
  {
    this->has_laser = _arg;
    return *this;
  }
  Type & set__has_extended_arms(
    const bool & _arg)
  {
    this->has_extended_arms = _arg;
    return *this;
  }
  Type & set__number_of_legs(
    const int32_t & _arg)
  {
    this->number_of_legs = _arg;
    return *this;
  }
  Type & set__number_of_arms(
    const int32_t & _arg)
  {
    this->number_of_arms = _arg;
    return *this;
  }
  Type & set__number_of_hands(
    const int32_t & _arg)
  {
    this->number_of_hands = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t NAO =
    0u;
  static constexpr uint8_t ROMEO =
    1u;
  static constexpr uint8_t PEPPER =
    2u;

  // pointer types
  using RawPtr =
    naoqi_bridge_msgs::msg::RobotInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const naoqi_bridge_msgs::msg::RobotInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<naoqi_bridge_msgs::msg::RobotInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<naoqi_bridge_msgs::msg::RobotInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      naoqi_bridge_msgs::msg::RobotInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<naoqi_bridge_msgs::msg::RobotInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      naoqi_bridge_msgs::msg::RobotInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<naoqi_bridge_msgs::msg::RobotInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<naoqi_bridge_msgs::msg::RobotInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<naoqi_bridge_msgs::msg::RobotInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__naoqi_bridge_msgs__msg__RobotInfo
    std::shared_ptr<naoqi_bridge_msgs::msg::RobotInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__naoqi_bridge_msgs__msg__RobotInfo
    std::shared_ptr<naoqi_bridge_msgs::msg::RobotInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotInfo_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->model != other.model) {
      return false;
    }
    if (this->head_version != other.head_version) {
      return false;
    }
    if (this->body_version != other.body_version) {
      return false;
    }
    if (this->arm_version != other.arm_version) {
      return false;
    }
    if (this->has_laser != other.has_laser) {
      return false;
    }
    if (this->has_extended_arms != other.has_extended_arms) {
      return false;
    }
    if (this->number_of_legs != other.number_of_legs) {
      return false;
    }
    if (this->number_of_arms != other.number_of_arms) {
      return false;
    }
    if (this->number_of_hands != other.number_of_hands) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotInfo_

// alias to use template instance with default allocator
using RobotInfo =
  naoqi_bridge_msgs::msg::RobotInfo_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RobotInfo_<ContainerAllocator>::NAO;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RobotInfo_<ContainerAllocator>::ROMEO;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RobotInfo_<ContainerAllocator>::PEPPER;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace naoqi_bridge_msgs

#endif  // NAOQI_BRIDGE_MSGS__MSG__DETAIL__ROBOT_INFO__STRUCT_HPP_
