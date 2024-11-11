// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from qi_unipa_msgs:msg/Hand.idl
// generated code does not contain a copyright notice

#ifndef QI_UNIPA_MSGS__MSG__DETAIL__HAND__STRUCT_HPP_
#define QI_UNIPA_MSGS__MSG__DETAIL__HAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__qi_unipa_msgs__msg__Hand __attribute__((deprecated))
#else
# define DEPRECATED__qi_unipa_msgs__msg__Hand __declspec(deprecated)
#endif

namespace qi_unipa_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Hand_
{
  using Type = Hand_<ContainerAllocator>;

  explicit Hand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hand = "";
      this->fun = 0l;
    }
  }

  explicit Hand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : hand(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hand = "";
      this->fun = 0l;
    }
  }

  // field types and members
  using _hand_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _hand_type hand;
  using _fun_type =
    int32_t;
  _fun_type fun;

  // setters for named parameter idiom
  Type & set__hand(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->hand = _arg;
    return *this;
  }
  Type & set__fun(
    const int32_t & _arg)
  {
    this->fun = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    qi_unipa_msgs::msg::Hand_<ContainerAllocator> *;
  using ConstRawPtr =
    const qi_unipa_msgs::msg::Hand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<qi_unipa_msgs::msg::Hand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<qi_unipa_msgs::msg::Hand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      qi_unipa_msgs::msg::Hand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<qi_unipa_msgs::msg::Hand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      qi_unipa_msgs::msg::Hand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<qi_unipa_msgs::msg::Hand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<qi_unipa_msgs::msg::Hand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<qi_unipa_msgs::msg::Hand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__qi_unipa_msgs__msg__Hand
    std::shared_ptr<qi_unipa_msgs::msg::Hand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__qi_unipa_msgs__msg__Hand
    std::shared_ptr<qi_unipa_msgs::msg::Hand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Hand_ & other) const
  {
    if (this->hand != other.hand) {
      return false;
    }
    if (this->fun != other.fun) {
      return false;
    }
    return true;
  }
  bool operator!=(const Hand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Hand_

// alias to use template instance with default allocator
using Hand =
  qi_unipa_msgs::msg::Hand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace qi_unipa_msgs

#endif  // QI_UNIPA_MSGS__MSG__DETAIL__HAND__STRUCT_HPP_
