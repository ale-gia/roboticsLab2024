// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from naoqi_bridge_msgs:msg/PoseWithConfidenceStamped.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__MSG__DETAIL__POSE_WITH_CONFIDENCE_STAMPED__STRUCT_HPP_
#define NAOQI_BRIDGE_MSGS__MSG__DETAIL__POSE_WITH_CONFIDENCE_STAMPED__STRUCT_HPP_

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
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__naoqi_bridge_msgs__msg__PoseWithConfidenceStamped __attribute__((deprecated))
#else
# define DEPRECATED__naoqi_bridge_msgs__msg__PoseWithConfidenceStamped __declspec(deprecated)
#endif

namespace naoqi_bridge_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PoseWithConfidenceStamped_
{
  using Type = PoseWithConfidenceStamped_<ContainerAllocator>;

  explicit PoseWithConfidenceStamped_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->confidence_index = 0.0f;
    }
  }

  explicit PoseWithConfidenceStamped_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->confidence_index = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _confidence_index_type =
    float;
  _confidence_index_type confidence_index;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__confidence_index(
    const float & _arg)
  {
    this->confidence_index = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    naoqi_bridge_msgs::msg::PoseWithConfidenceStamped_<ContainerAllocator> *;
  using ConstRawPtr =
    const naoqi_bridge_msgs::msg::PoseWithConfidenceStamped_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<naoqi_bridge_msgs::msg::PoseWithConfidenceStamped_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<naoqi_bridge_msgs::msg::PoseWithConfidenceStamped_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      naoqi_bridge_msgs::msg::PoseWithConfidenceStamped_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<naoqi_bridge_msgs::msg::PoseWithConfidenceStamped_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      naoqi_bridge_msgs::msg::PoseWithConfidenceStamped_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<naoqi_bridge_msgs::msg::PoseWithConfidenceStamped_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<naoqi_bridge_msgs::msg::PoseWithConfidenceStamped_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<naoqi_bridge_msgs::msg::PoseWithConfidenceStamped_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__naoqi_bridge_msgs__msg__PoseWithConfidenceStamped
    std::shared_ptr<naoqi_bridge_msgs::msg::PoseWithConfidenceStamped_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__naoqi_bridge_msgs__msg__PoseWithConfidenceStamped
    std::shared_ptr<naoqi_bridge_msgs::msg::PoseWithConfidenceStamped_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PoseWithConfidenceStamped_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->confidence_index != other.confidence_index) {
      return false;
    }
    return true;
  }
  bool operator!=(const PoseWithConfidenceStamped_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PoseWithConfidenceStamped_

// alias to use template instance with default allocator
using PoseWithConfidenceStamped =
  naoqi_bridge_msgs::msg::PoseWithConfidenceStamped_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace naoqi_bridge_msgs

#endif  // NAOQI_BRIDGE_MSGS__MSG__DETAIL__POSE_WITH_CONFIDENCE_STAMPED__STRUCT_HPP_
