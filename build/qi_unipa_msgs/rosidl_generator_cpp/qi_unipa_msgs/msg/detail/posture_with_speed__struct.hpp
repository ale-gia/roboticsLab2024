// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from qi_unipa_msgs:msg/PostureWithSpeed.idl
// generated code does not contain a copyright notice

#ifndef QI_UNIPA_MSGS__MSG__DETAIL__POSTURE_WITH_SPEED__STRUCT_HPP_
#define QI_UNIPA_MSGS__MSG__DETAIL__POSTURE_WITH_SPEED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__qi_unipa_msgs__msg__PostureWithSpeed __attribute__((deprecated))
#else
# define DEPRECATED__qi_unipa_msgs__msg__PostureWithSpeed __declspec(deprecated)
#endif

namespace qi_unipa_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PostureWithSpeed_
{
  using Type = PostureWithSpeed_<ContainerAllocator>;

  explicit PostureWithSpeed_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->posture_name = "";
      this->speed = 0.0f;
    }
  }

  explicit PostureWithSpeed_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : posture_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->posture_name = "";
      this->speed = 0.0f;
    }
  }

  // field types and members
  using _posture_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _posture_name_type posture_name;
  using _speed_type =
    float;
  _speed_type speed;

  // setters for named parameter idiom
  Type & set__posture_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->posture_name = _arg;
    return *this;
  }
  Type & set__speed(
    const float & _arg)
  {
    this->speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    qi_unipa_msgs::msg::PostureWithSpeed_<ContainerAllocator> *;
  using ConstRawPtr =
    const qi_unipa_msgs::msg::PostureWithSpeed_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<qi_unipa_msgs::msg::PostureWithSpeed_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<qi_unipa_msgs::msg::PostureWithSpeed_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      qi_unipa_msgs::msg::PostureWithSpeed_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<qi_unipa_msgs::msg::PostureWithSpeed_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      qi_unipa_msgs::msg::PostureWithSpeed_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<qi_unipa_msgs::msg::PostureWithSpeed_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<qi_unipa_msgs::msg::PostureWithSpeed_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<qi_unipa_msgs::msg::PostureWithSpeed_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__qi_unipa_msgs__msg__PostureWithSpeed
    std::shared_ptr<qi_unipa_msgs::msg::PostureWithSpeed_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__qi_unipa_msgs__msg__PostureWithSpeed
    std::shared_ptr<qi_unipa_msgs::msg::PostureWithSpeed_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PostureWithSpeed_ & other) const
  {
    if (this->posture_name != other.posture_name) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const PostureWithSpeed_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PostureWithSpeed_

// alias to use template instance with default allocator
using PostureWithSpeed =
  qi_unipa_msgs::msg::PostureWithSpeed_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace qi_unipa_msgs

#endif  // QI_UNIPA_MSGS__MSG__DETAIL__POSTURE_WITH_SPEED__STRUCT_HPP_
