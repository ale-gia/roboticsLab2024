// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from naoqi_bridge_msgs:msg/FaceROI.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__MSG__DETAIL__FACE_ROI__STRUCT_HPP_
#define NAOQI_BRIDGE_MSGS__MSG__DETAIL__FACE_ROI__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__naoqi_bridge_msgs__msg__FaceROI __attribute__((deprecated))
#else
# define DEPRECATED__naoqi_bridge_msgs__msg__FaceROI __declspec(deprecated)
#endif

namespace naoqi_bridge_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FaceROI_
{
  using Type = FaceROI_<ContainerAllocator>;

  explicit FaceROI_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->angle = 0.0f;
      this->cx = 0.0f;
      this->cy = 0.0f;
      this->height = 0.0f;
      this->width = 0.0f;
      this->confidence = 0.0f;
    }
  }

  explicit FaceROI_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->angle = 0.0f;
      this->cx = 0.0f;
      this->cy = 0.0f;
      this->height = 0.0f;
      this->width = 0.0f;
      this->confidence = 0.0f;
    }
  }

  // field types and members
  using _angle_type =
    float;
  _angle_type angle;
  using _cx_type =
    float;
  _cx_type cx;
  using _cy_type =
    float;
  _cy_type cy;
  using _height_type =
    float;
  _height_type height;
  using _width_type =
    float;
  _width_type width;
  using _confidence_type =
    float;
  _confidence_type confidence;

  // setters for named parameter idiom
  Type & set__angle(
    const float & _arg)
  {
    this->angle = _arg;
    return *this;
  }
  Type & set__cx(
    const float & _arg)
  {
    this->cx = _arg;
    return *this;
  }
  Type & set__cy(
    const float & _arg)
  {
    this->cy = _arg;
    return *this;
  }
  Type & set__height(
    const float & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__width(
    const float & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__confidence(
    const float & _arg)
  {
    this->confidence = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    naoqi_bridge_msgs::msg::FaceROI_<ContainerAllocator> *;
  using ConstRawPtr =
    const naoqi_bridge_msgs::msg::FaceROI_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<naoqi_bridge_msgs::msg::FaceROI_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<naoqi_bridge_msgs::msg::FaceROI_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      naoqi_bridge_msgs::msg::FaceROI_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<naoqi_bridge_msgs::msg::FaceROI_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      naoqi_bridge_msgs::msg::FaceROI_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<naoqi_bridge_msgs::msg::FaceROI_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<naoqi_bridge_msgs::msg::FaceROI_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<naoqi_bridge_msgs::msg::FaceROI_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__naoqi_bridge_msgs__msg__FaceROI
    std::shared_ptr<naoqi_bridge_msgs::msg::FaceROI_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__naoqi_bridge_msgs__msg__FaceROI
    std::shared_ptr<naoqi_bridge_msgs::msg::FaceROI_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FaceROI_ & other) const
  {
    if (this->angle != other.angle) {
      return false;
    }
    if (this->cx != other.cx) {
      return false;
    }
    if (this->cy != other.cy) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    return true;
  }
  bool operator!=(const FaceROI_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FaceROI_

// alias to use template instance with default allocator
using FaceROI =
  naoqi_bridge_msgs::msg::FaceROI_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace naoqi_bridge_msgs

#endif  // NAOQI_BRIDGE_MSGS__MSG__DETAIL__FACE_ROI__STRUCT_HPP_
