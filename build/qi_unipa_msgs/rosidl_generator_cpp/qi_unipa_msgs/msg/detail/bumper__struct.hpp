// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from qi_unipa_msgs:msg/Bumper.idl
// generated code does not contain a copyright notice

#ifndef QI_UNIPA_MSGS__MSG__DETAIL__BUMPER__STRUCT_HPP_
#define QI_UNIPA_MSGS__MSG__DETAIL__BUMPER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__qi_unipa_msgs__msg__Bumper __attribute__((deprecated))
#else
# define DEPRECATED__qi_unipa_msgs__msg__Bumper __declspec(deprecated)
#endif

namespace qi_unipa_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Bumper_
{
  using Type = Bumper_<ContainerAllocator>;

  explicit Bumper_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left = 0.0f;
      this->right = 0.0f;
      this->back = 0.0f;
    }
  }

  explicit Bumper_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left = 0.0f;
      this->right = 0.0f;
      this->back = 0.0f;
    }
  }

  // field types and members
  using _left_type =
    float;
  _left_type left;
  using _right_type =
    float;
  _right_type right;
  using _back_type =
    float;
  _back_type back;

  // setters for named parameter idiom
  Type & set__left(
    const float & _arg)
  {
    this->left = _arg;
    return *this;
  }
  Type & set__right(
    const float & _arg)
  {
    this->right = _arg;
    return *this;
  }
  Type & set__back(
    const float & _arg)
  {
    this->back = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    qi_unipa_msgs::msg::Bumper_<ContainerAllocator> *;
  using ConstRawPtr =
    const qi_unipa_msgs::msg::Bumper_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<qi_unipa_msgs::msg::Bumper_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<qi_unipa_msgs::msg::Bumper_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      qi_unipa_msgs::msg::Bumper_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<qi_unipa_msgs::msg::Bumper_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      qi_unipa_msgs::msg::Bumper_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<qi_unipa_msgs::msg::Bumper_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<qi_unipa_msgs::msg::Bumper_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<qi_unipa_msgs::msg::Bumper_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__qi_unipa_msgs__msg__Bumper
    std::shared_ptr<qi_unipa_msgs::msg::Bumper_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__qi_unipa_msgs__msg__Bumper
    std::shared_ptr<qi_unipa_msgs::msg::Bumper_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Bumper_ & other) const
  {
    if (this->left != other.left) {
      return false;
    }
    if (this->right != other.right) {
      return false;
    }
    if (this->back != other.back) {
      return false;
    }
    return true;
  }
  bool operator!=(const Bumper_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Bumper_

// alias to use template instance with default allocator
using Bumper =
  qi_unipa_msgs::msg::Bumper_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace qi_unipa_msgs

#endif  // QI_UNIPA_MSGS__MSG__DETAIL__BUMPER__STRUCT_HPP_
