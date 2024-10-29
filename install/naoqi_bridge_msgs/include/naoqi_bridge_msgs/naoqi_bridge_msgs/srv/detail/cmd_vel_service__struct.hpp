// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from naoqi_bridge_msgs:srv/CmdVelService.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__SRV__DETAIL__CMD_VEL_SERVICE__STRUCT_HPP_
#define NAOQI_BRIDGE_MSGS__SRV__DETAIL__CMD_VEL_SERVICE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__naoqi_bridge_msgs__srv__CmdVelService_Request __attribute__((deprecated))
#else
# define DEPRECATED__naoqi_bridge_msgs__srv__CmdVelService_Request __declspec(deprecated)
#endif

namespace naoqi_bridge_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CmdVelService_Request_
{
  using Type = CmdVelService_Request_<ContainerAllocator>;

  explicit CmdVelService_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : twist(_init)
  {
    (void)_init;
  }

  explicit CmdVelService_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : twist(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _twist_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _twist_type twist;

  // setters for named parameter idiom
  Type & set__twist(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->twist = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    naoqi_bridge_msgs::srv::CmdVelService_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const naoqi_bridge_msgs::srv::CmdVelService_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<naoqi_bridge_msgs::srv::CmdVelService_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<naoqi_bridge_msgs::srv::CmdVelService_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      naoqi_bridge_msgs::srv::CmdVelService_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<naoqi_bridge_msgs::srv::CmdVelService_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      naoqi_bridge_msgs::srv::CmdVelService_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<naoqi_bridge_msgs::srv::CmdVelService_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<naoqi_bridge_msgs::srv::CmdVelService_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<naoqi_bridge_msgs::srv::CmdVelService_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__naoqi_bridge_msgs__srv__CmdVelService_Request
    std::shared_ptr<naoqi_bridge_msgs::srv::CmdVelService_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__naoqi_bridge_msgs__srv__CmdVelService_Request
    std::shared_ptr<naoqi_bridge_msgs::srv::CmdVelService_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CmdVelService_Request_ & other) const
  {
    if (this->twist != other.twist) {
      return false;
    }
    return true;
  }
  bool operator!=(const CmdVelService_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CmdVelService_Request_

// alias to use template instance with default allocator
using CmdVelService_Request =
  naoqi_bridge_msgs::srv::CmdVelService_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace naoqi_bridge_msgs


#ifndef _WIN32
# define DEPRECATED__naoqi_bridge_msgs__srv__CmdVelService_Response __attribute__((deprecated))
#else
# define DEPRECATED__naoqi_bridge_msgs__srv__CmdVelService_Response __declspec(deprecated)
#endif

namespace naoqi_bridge_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CmdVelService_Response_
{
  using Type = CmdVelService_Response_<ContainerAllocator>;

  explicit CmdVelService_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit CmdVelService_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    naoqi_bridge_msgs::srv::CmdVelService_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const naoqi_bridge_msgs::srv::CmdVelService_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<naoqi_bridge_msgs::srv::CmdVelService_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<naoqi_bridge_msgs::srv::CmdVelService_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      naoqi_bridge_msgs::srv::CmdVelService_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<naoqi_bridge_msgs::srv::CmdVelService_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      naoqi_bridge_msgs::srv::CmdVelService_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<naoqi_bridge_msgs::srv::CmdVelService_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<naoqi_bridge_msgs::srv::CmdVelService_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<naoqi_bridge_msgs::srv::CmdVelService_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__naoqi_bridge_msgs__srv__CmdVelService_Response
    std::shared_ptr<naoqi_bridge_msgs::srv::CmdVelService_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__naoqi_bridge_msgs__srv__CmdVelService_Response
    std::shared_ptr<naoqi_bridge_msgs::srv::CmdVelService_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CmdVelService_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const CmdVelService_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CmdVelService_Response_

// alias to use template instance with default allocator
using CmdVelService_Response =
  naoqi_bridge_msgs::srv::CmdVelService_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace naoqi_bridge_msgs

namespace naoqi_bridge_msgs
{

namespace srv
{

struct CmdVelService
{
  using Request = naoqi_bridge_msgs::srv::CmdVelService_Request;
  using Response = naoqi_bridge_msgs::srv::CmdVelService_Response;
};

}  // namespace srv

}  // namespace naoqi_bridge_msgs

#endif  // NAOQI_BRIDGE_MSGS__SRV__DETAIL__CMD_VEL_SERVICE__STRUCT_HPP_
