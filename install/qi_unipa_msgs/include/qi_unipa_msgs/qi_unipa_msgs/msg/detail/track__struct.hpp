// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from qi_unipa_msgs:msg/Track.idl
// generated code does not contain a copyright notice

#ifndef QI_UNIPA_MSGS__MSG__DETAIL__TRACK__STRUCT_HPP_
#define QI_UNIPA_MSGS__MSG__DETAIL__TRACK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__qi_unipa_msgs__msg__Track __attribute__((deprecated))
#else
# define DEPRECATED__qi_unipa_msgs__msg__Track __declspec(deprecated)
#endif

namespace qi_unipa_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Track_
{
  using Type = Track_<ContainerAllocator>;

  explicit Track_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_name = "";
      this->distance = 0.0f;
    }
  }

  explicit Track_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_name = "";
      this->distance = 0.0f;
    }
  }

  // field types and members
  using _target_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _target_name_type target_name;
  using _distance_type =
    float;
  _distance_type distance;

  // setters for named parameter idiom
  Type & set__target_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->target_name = _arg;
    return *this;
  }
  Type & set__distance(
    const float & _arg)
  {
    this->distance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    qi_unipa_msgs::msg::Track_<ContainerAllocator> *;
  using ConstRawPtr =
    const qi_unipa_msgs::msg::Track_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<qi_unipa_msgs::msg::Track_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<qi_unipa_msgs::msg::Track_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      qi_unipa_msgs::msg::Track_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<qi_unipa_msgs::msg::Track_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      qi_unipa_msgs::msg::Track_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<qi_unipa_msgs::msg::Track_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<qi_unipa_msgs::msg::Track_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<qi_unipa_msgs::msg::Track_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__qi_unipa_msgs__msg__Track
    std::shared_ptr<qi_unipa_msgs::msg::Track_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__qi_unipa_msgs__msg__Track
    std::shared_ptr<qi_unipa_msgs::msg::Track_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Track_ & other) const
  {
    if (this->target_name != other.target_name) {
      return false;
    }
    if (this->distance != other.distance) {
      return false;
    }
    return true;
  }
  bool operator!=(const Track_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Track_

// alias to use template instance with default allocator
using Track =
  qi_unipa_msgs::msg::Track_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace qi_unipa_msgs

#endif  // QI_UNIPA_MSGS__MSG__DETAIL__TRACK__STRUCT_HPP_
