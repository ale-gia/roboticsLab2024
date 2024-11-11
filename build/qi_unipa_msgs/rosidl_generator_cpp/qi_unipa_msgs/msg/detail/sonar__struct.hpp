// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from qi_unipa_msgs:msg/Sonar.idl
// generated code does not contain a copyright notice

#ifndef QI_UNIPA_MSGS__MSG__DETAIL__SONAR__STRUCT_HPP_
#define QI_UNIPA_MSGS__MSG__DETAIL__SONAR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__qi_unipa_msgs__msg__Sonar __attribute__((deprecated))
#else
# define DEPRECATED__qi_unipa_msgs__msg__Sonar __declspec(deprecated)
#endif

namespace qi_unipa_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Sonar_
{
  using Type = Sonar_<ContainerAllocator>;

  explicit Sonar_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->front_sonar = 0.0f;
      this->back_sonar = 0.0f;
    }
  }

  explicit Sonar_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->front_sonar = 0.0f;
      this->back_sonar = 0.0f;
    }
  }

  // field types and members
  using _front_sonar_type =
    float;
  _front_sonar_type front_sonar;
  using _back_sonar_type =
    float;
  _back_sonar_type back_sonar;

  // setters for named parameter idiom
  Type & set__front_sonar(
    const float & _arg)
  {
    this->front_sonar = _arg;
    return *this;
  }
  Type & set__back_sonar(
    const float & _arg)
  {
    this->back_sonar = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    qi_unipa_msgs::msg::Sonar_<ContainerAllocator> *;
  using ConstRawPtr =
    const qi_unipa_msgs::msg::Sonar_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<qi_unipa_msgs::msg::Sonar_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<qi_unipa_msgs::msg::Sonar_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      qi_unipa_msgs::msg::Sonar_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<qi_unipa_msgs::msg::Sonar_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      qi_unipa_msgs::msg::Sonar_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<qi_unipa_msgs::msg::Sonar_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<qi_unipa_msgs::msg::Sonar_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<qi_unipa_msgs::msg::Sonar_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__qi_unipa_msgs__msg__Sonar
    std::shared_ptr<qi_unipa_msgs::msg::Sonar_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__qi_unipa_msgs__msg__Sonar
    std::shared_ptr<qi_unipa_msgs::msg::Sonar_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Sonar_ & other) const
  {
    if (this->front_sonar != other.front_sonar) {
      return false;
    }
    if (this->back_sonar != other.back_sonar) {
      return false;
    }
    return true;
  }
  bool operator!=(const Sonar_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Sonar_

// alias to use template instance with default allocator
using Sonar =
  qi_unipa_msgs::msg::Sonar_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace qi_unipa_msgs

#endif  // QI_UNIPA_MSGS__MSG__DETAIL__SONAR__STRUCT_HPP_
