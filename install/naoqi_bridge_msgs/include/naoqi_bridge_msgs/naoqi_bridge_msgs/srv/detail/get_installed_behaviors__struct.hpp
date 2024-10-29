// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from naoqi_bridge_msgs:srv/GetInstalledBehaviors.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__SRV__DETAIL__GET_INSTALLED_BEHAVIORS__STRUCT_HPP_
#define NAOQI_BRIDGE_MSGS__SRV__DETAIL__GET_INSTALLED_BEHAVIORS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__naoqi_bridge_msgs__srv__GetInstalledBehaviors_Request __attribute__((deprecated))
#else
# define DEPRECATED__naoqi_bridge_msgs__srv__GetInstalledBehaviors_Request __declspec(deprecated)
#endif

namespace naoqi_bridge_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetInstalledBehaviors_Request_
{
  using Type = GetInstalledBehaviors_Request_<ContainerAllocator>;

  explicit GetInstalledBehaviors_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetInstalledBehaviors_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    naoqi_bridge_msgs::srv::GetInstalledBehaviors_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const naoqi_bridge_msgs::srv::GetInstalledBehaviors_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<naoqi_bridge_msgs::srv::GetInstalledBehaviors_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<naoqi_bridge_msgs::srv::GetInstalledBehaviors_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      naoqi_bridge_msgs::srv::GetInstalledBehaviors_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<naoqi_bridge_msgs::srv::GetInstalledBehaviors_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      naoqi_bridge_msgs::srv::GetInstalledBehaviors_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<naoqi_bridge_msgs::srv::GetInstalledBehaviors_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<naoqi_bridge_msgs::srv::GetInstalledBehaviors_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<naoqi_bridge_msgs::srv::GetInstalledBehaviors_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__naoqi_bridge_msgs__srv__GetInstalledBehaviors_Request
    std::shared_ptr<naoqi_bridge_msgs::srv::GetInstalledBehaviors_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__naoqi_bridge_msgs__srv__GetInstalledBehaviors_Request
    std::shared_ptr<naoqi_bridge_msgs::srv::GetInstalledBehaviors_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetInstalledBehaviors_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetInstalledBehaviors_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetInstalledBehaviors_Request_

// alias to use template instance with default allocator
using GetInstalledBehaviors_Request =
  naoqi_bridge_msgs::srv::GetInstalledBehaviors_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace naoqi_bridge_msgs


#ifndef _WIN32
# define DEPRECATED__naoqi_bridge_msgs__srv__GetInstalledBehaviors_Response __attribute__((deprecated))
#else
# define DEPRECATED__naoqi_bridge_msgs__srv__GetInstalledBehaviors_Response __declspec(deprecated)
#endif

namespace naoqi_bridge_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetInstalledBehaviors_Response_
{
  using Type = GetInstalledBehaviors_Response_<ContainerAllocator>;

  explicit GetInstalledBehaviors_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit GetInstalledBehaviors_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _behaviors_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _behaviors_type behaviors;

  // setters for named parameter idiom
  Type & set__behaviors(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->behaviors = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    naoqi_bridge_msgs::srv::GetInstalledBehaviors_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const naoqi_bridge_msgs::srv::GetInstalledBehaviors_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<naoqi_bridge_msgs::srv::GetInstalledBehaviors_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<naoqi_bridge_msgs::srv::GetInstalledBehaviors_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      naoqi_bridge_msgs::srv::GetInstalledBehaviors_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<naoqi_bridge_msgs::srv::GetInstalledBehaviors_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      naoqi_bridge_msgs::srv::GetInstalledBehaviors_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<naoqi_bridge_msgs::srv::GetInstalledBehaviors_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<naoqi_bridge_msgs::srv::GetInstalledBehaviors_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<naoqi_bridge_msgs::srv::GetInstalledBehaviors_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__naoqi_bridge_msgs__srv__GetInstalledBehaviors_Response
    std::shared_ptr<naoqi_bridge_msgs::srv::GetInstalledBehaviors_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__naoqi_bridge_msgs__srv__GetInstalledBehaviors_Response
    std::shared_ptr<naoqi_bridge_msgs::srv::GetInstalledBehaviors_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetInstalledBehaviors_Response_ & other) const
  {
    if (this->behaviors != other.behaviors) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetInstalledBehaviors_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetInstalledBehaviors_Response_

// alias to use template instance with default allocator
using GetInstalledBehaviors_Response =
  naoqi_bridge_msgs::srv::GetInstalledBehaviors_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace naoqi_bridge_msgs

namespace naoqi_bridge_msgs
{

namespace srv
{

struct GetInstalledBehaviors
{
  using Request = naoqi_bridge_msgs::srv::GetInstalledBehaviors_Request;
  using Response = naoqi_bridge_msgs::srv::GetInstalledBehaviors_Response;
};

}  // namespace srv

}  // namespace naoqi_bridge_msgs

#endif  // NAOQI_BRIDGE_MSGS__SRV__DETAIL__GET_INSTALLED_BEHAVIORS__STRUCT_HPP_
