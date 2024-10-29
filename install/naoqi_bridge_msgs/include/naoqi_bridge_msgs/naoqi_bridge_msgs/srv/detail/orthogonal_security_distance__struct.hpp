// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from naoqi_bridge_msgs:srv/OrthogonalSecurityDistance.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__SRV__DETAIL__ORTHOGONAL_SECURITY_DISTANCE__STRUCT_HPP_
#define NAOQI_BRIDGE_MSGS__SRV__DETAIL__ORTHOGONAL_SECURITY_DISTANCE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'orthogonal_distance'
#include "std_msgs/msg/detail/float32__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Request __attribute__((deprecated))
#else
# define DEPRECATED__naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Request __declspec(deprecated)
#endif

namespace naoqi_bridge_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct OrthogonalSecurityDistance_Request_
{
  using Type = OrthogonalSecurityDistance_Request_<ContainerAllocator>;

  explicit OrthogonalSecurityDistance_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : orthogonal_distance(_init)
  {
    (void)_init;
  }

  explicit OrthogonalSecurityDistance_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : orthogonal_distance(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _orthogonal_distance_type =
    std_msgs::msg::Float32_<ContainerAllocator>;
  _orthogonal_distance_type orthogonal_distance;

  // setters for named parameter idiom
  Type & set__orthogonal_distance(
    const std_msgs::msg::Float32_<ContainerAllocator> & _arg)
  {
    this->orthogonal_distance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    naoqi_bridge_msgs::srv::OrthogonalSecurityDistance_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const naoqi_bridge_msgs::srv::OrthogonalSecurityDistance_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<naoqi_bridge_msgs::srv::OrthogonalSecurityDistance_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<naoqi_bridge_msgs::srv::OrthogonalSecurityDistance_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      naoqi_bridge_msgs::srv::OrthogonalSecurityDistance_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<naoqi_bridge_msgs::srv::OrthogonalSecurityDistance_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      naoqi_bridge_msgs::srv::OrthogonalSecurityDistance_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<naoqi_bridge_msgs::srv::OrthogonalSecurityDistance_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<naoqi_bridge_msgs::srv::OrthogonalSecurityDistance_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<naoqi_bridge_msgs::srv::OrthogonalSecurityDistance_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Request
    std::shared_ptr<naoqi_bridge_msgs::srv::OrthogonalSecurityDistance_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Request
    std::shared_ptr<naoqi_bridge_msgs::srv::OrthogonalSecurityDistance_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OrthogonalSecurityDistance_Request_ & other) const
  {
    if (this->orthogonal_distance != other.orthogonal_distance) {
      return false;
    }
    return true;
  }
  bool operator!=(const OrthogonalSecurityDistance_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OrthogonalSecurityDistance_Request_

// alias to use template instance with default allocator
using OrthogonalSecurityDistance_Request =
  naoqi_bridge_msgs::srv::OrthogonalSecurityDistance_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace naoqi_bridge_msgs


#ifndef _WIN32
# define DEPRECATED__naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Response __attribute__((deprecated))
#else
# define DEPRECATED__naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Response __declspec(deprecated)
#endif

namespace naoqi_bridge_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct OrthogonalSecurityDistance_Response_
{
  using Type = OrthogonalSecurityDistance_Response_<ContainerAllocator>;

  explicit OrthogonalSecurityDistance_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit OrthogonalSecurityDistance_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    naoqi_bridge_msgs::srv::OrthogonalSecurityDistance_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const naoqi_bridge_msgs::srv::OrthogonalSecurityDistance_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<naoqi_bridge_msgs::srv::OrthogonalSecurityDistance_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<naoqi_bridge_msgs::srv::OrthogonalSecurityDistance_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      naoqi_bridge_msgs::srv::OrthogonalSecurityDistance_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<naoqi_bridge_msgs::srv::OrthogonalSecurityDistance_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      naoqi_bridge_msgs::srv::OrthogonalSecurityDistance_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<naoqi_bridge_msgs::srv::OrthogonalSecurityDistance_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<naoqi_bridge_msgs::srv::OrthogonalSecurityDistance_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<naoqi_bridge_msgs::srv::OrthogonalSecurityDistance_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Response
    std::shared_ptr<naoqi_bridge_msgs::srv::OrthogonalSecurityDistance_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Response
    std::shared_ptr<naoqi_bridge_msgs::srv::OrthogonalSecurityDistance_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OrthogonalSecurityDistance_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const OrthogonalSecurityDistance_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OrthogonalSecurityDistance_Response_

// alias to use template instance with default allocator
using OrthogonalSecurityDistance_Response =
  naoqi_bridge_msgs::srv::OrthogonalSecurityDistance_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace naoqi_bridge_msgs

namespace naoqi_bridge_msgs
{

namespace srv
{

struct OrthogonalSecurityDistance
{
  using Request = naoqi_bridge_msgs::srv::OrthogonalSecurityDistance_Request;
  using Response = naoqi_bridge_msgs::srv::OrthogonalSecurityDistance_Response;
};

}  // namespace srv

}  // namespace naoqi_bridge_msgs

#endif  // NAOQI_BRIDGE_MSGS__SRV__DETAIL__ORTHOGONAL_SECURITY_DISTANCE__STRUCT_HPP_
