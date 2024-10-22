// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from naoqi_bridge_msgs:msg/MemoryList.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__MSG__DETAIL__MEMORY_LIST__STRUCT_HPP_
#define NAOQI_BRIDGE_MSGS__MSG__DETAIL__MEMORY_LIST__STRUCT_HPP_

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
// Member 'strings'
#include "naoqi_bridge_msgs/msg/detail/memory_pair_string__struct.hpp"
// Member 'ints'
#include "naoqi_bridge_msgs/msg/detail/memory_pair_int__struct.hpp"
// Member 'floats'
#include "naoqi_bridge_msgs/msg/detail/memory_pair_float__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__naoqi_bridge_msgs__msg__MemoryList __attribute__((deprecated))
#else
# define DEPRECATED__naoqi_bridge_msgs__msg__MemoryList __declspec(deprecated)
#endif

namespace naoqi_bridge_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MemoryList_
{
  using Type = MemoryList_<ContainerAllocator>;

  explicit MemoryList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit MemoryList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _strings_type =
    std::vector<naoqi_bridge_msgs::msg::MemoryPairString_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<naoqi_bridge_msgs::msg::MemoryPairString_<ContainerAllocator>>>;
  _strings_type strings;
  using _ints_type =
    std::vector<naoqi_bridge_msgs::msg::MemoryPairInt_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<naoqi_bridge_msgs::msg::MemoryPairInt_<ContainerAllocator>>>;
  _ints_type ints;
  using _floats_type =
    std::vector<naoqi_bridge_msgs::msg::MemoryPairFloat_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<naoqi_bridge_msgs::msg::MemoryPairFloat_<ContainerAllocator>>>;
  _floats_type floats;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__strings(
    const std::vector<naoqi_bridge_msgs::msg::MemoryPairString_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<naoqi_bridge_msgs::msg::MemoryPairString_<ContainerAllocator>>> & _arg)
  {
    this->strings = _arg;
    return *this;
  }
  Type & set__ints(
    const std::vector<naoqi_bridge_msgs::msg::MemoryPairInt_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<naoqi_bridge_msgs::msg::MemoryPairInt_<ContainerAllocator>>> & _arg)
  {
    this->ints = _arg;
    return *this;
  }
  Type & set__floats(
    const std::vector<naoqi_bridge_msgs::msg::MemoryPairFloat_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<naoqi_bridge_msgs::msg::MemoryPairFloat_<ContainerAllocator>>> & _arg)
  {
    this->floats = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    naoqi_bridge_msgs::msg::MemoryList_<ContainerAllocator> *;
  using ConstRawPtr =
    const naoqi_bridge_msgs::msg::MemoryList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<naoqi_bridge_msgs::msg::MemoryList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<naoqi_bridge_msgs::msg::MemoryList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      naoqi_bridge_msgs::msg::MemoryList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<naoqi_bridge_msgs::msg::MemoryList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      naoqi_bridge_msgs::msg::MemoryList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<naoqi_bridge_msgs::msg::MemoryList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<naoqi_bridge_msgs::msg::MemoryList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<naoqi_bridge_msgs::msg::MemoryList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__naoqi_bridge_msgs__msg__MemoryList
    std::shared_ptr<naoqi_bridge_msgs::msg::MemoryList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__naoqi_bridge_msgs__msg__MemoryList
    std::shared_ptr<naoqi_bridge_msgs::msg::MemoryList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MemoryList_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->strings != other.strings) {
      return false;
    }
    if (this->ints != other.ints) {
      return false;
    }
    if (this->floats != other.floats) {
      return false;
    }
    return true;
  }
  bool operator!=(const MemoryList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MemoryList_

// alias to use template instance with default allocator
using MemoryList =
  naoqi_bridge_msgs::msg::MemoryList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace naoqi_bridge_msgs

#endif  // NAOQI_BRIDGE_MSGS__MSG__DETAIL__MEMORY_LIST__STRUCT_HPP_
