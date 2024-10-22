// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from naoqi_bridge_msgs:msg/SoundLocated.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__MSG__DETAIL__SOUND_LOCATED__STRUCT_HPP_
#define NAOQI_BRIDGE_MSGS__MSG__DETAIL__SOUND_LOCATED__STRUCT_HPP_

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
// Member 'head_position_frame_torso'
// Member 'head_position_frame_robot'
#include "geometry_msgs/msg/detail/twist__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__naoqi_bridge_msgs__msg__SoundLocated __attribute__((deprecated))
#else
# define DEPRECATED__naoqi_bridge_msgs__msg__SoundLocated __declspec(deprecated)
#endif

namespace naoqi_bridge_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SoundLocated_
{
  using Type = SoundLocated_<ContainerAllocator>;

  explicit SoundLocated_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    head_position_frame_torso(_init),
    head_position_frame_robot(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->azimuth = 0.0;
      this->elevation = 0.0;
      this->confidence = 0.0;
      this->energy = 0.0;
    }
  }

  explicit SoundLocated_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    head_position_frame_torso(_alloc, _init),
    head_position_frame_robot(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->azimuth = 0.0;
      this->elevation = 0.0;
      this->confidence = 0.0;
      this->energy = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _azimuth_type =
    double;
  _azimuth_type azimuth;
  using _elevation_type =
    double;
  _elevation_type elevation;
  using _confidence_type =
    double;
  _confidence_type confidence;
  using _energy_type =
    double;
  _energy_type energy;
  using _head_position_frame_torso_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _head_position_frame_torso_type head_position_frame_torso;
  using _head_position_frame_robot_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _head_position_frame_robot_type head_position_frame_robot;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__azimuth(
    const double & _arg)
  {
    this->azimuth = _arg;
    return *this;
  }
  Type & set__elevation(
    const double & _arg)
  {
    this->elevation = _arg;
    return *this;
  }
  Type & set__confidence(
    const double & _arg)
  {
    this->confidence = _arg;
    return *this;
  }
  Type & set__energy(
    const double & _arg)
  {
    this->energy = _arg;
    return *this;
  }
  Type & set__head_position_frame_torso(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->head_position_frame_torso = _arg;
    return *this;
  }
  Type & set__head_position_frame_robot(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->head_position_frame_robot = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    naoqi_bridge_msgs::msg::SoundLocated_<ContainerAllocator> *;
  using ConstRawPtr =
    const naoqi_bridge_msgs::msg::SoundLocated_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<naoqi_bridge_msgs::msg::SoundLocated_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<naoqi_bridge_msgs::msg::SoundLocated_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      naoqi_bridge_msgs::msg::SoundLocated_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<naoqi_bridge_msgs::msg::SoundLocated_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      naoqi_bridge_msgs::msg::SoundLocated_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<naoqi_bridge_msgs::msg::SoundLocated_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<naoqi_bridge_msgs::msg::SoundLocated_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<naoqi_bridge_msgs::msg::SoundLocated_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__naoqi_bridge_msgs__msg__SoundLocated
    std::shared_ptr<naoqi_bridge_msgs::msg::SoundLocated_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__naoqi_bridge_msgs__msg__SoundLocated
    std::shared_ptr<naoqi_bridge_msgs::msg::SoundLocated_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SoundLocated_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->azimuth != other.azimuth) {
      return false;
    }
    if (this->elevation != other.elevation) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    if (this->energy != other.energy) {
      return false;
    }
    if (this->head_position_frame_torso != other.head_position_frame_torso) {
      return false;
    }
    if (this->head_position_frame_robot != other.head_position_frame_robot) {
      return false;
    }
    return true;
  }
  bool operator!=(const SoundLocated_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SoundLocated_

// alias to use template instance with default allocator
using SoundLocated =
  naoqi_bridge_msgs::msg::SoundLocated_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace naoqi_bridge_msgs

#endif  // NAOQI_BRIDGE_MSGS__MSG__DETAIL__SOUND_LOCATED__STRUCT_HPP_
