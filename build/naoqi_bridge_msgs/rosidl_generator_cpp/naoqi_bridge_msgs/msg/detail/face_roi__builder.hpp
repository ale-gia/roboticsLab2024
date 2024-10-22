// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from naoqi_bridge_msgs:msg/FaceROI.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__MSG__DETAIL__FACE_ROI__BUILDER_HPP_
#define NAOQI_BRIDGE_MSGS__MSG__DETAIL__FACE_ROI__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "naoqi_bridge_msgs/msg/detail/face_roi__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace naoqi_bridge_msgs
{

namespace msg
{

namespace builder
{

class Init_FaceROI_confidence
{
public:
  explicit Init_FaceROI_confidence(::naoqi_bridge_msgs::msg::FaceROI & msg)
  : msg_(msg)
  {}
  ::naoqi_bridge_msgs::msg::FaceROI confidence(::naoqi_bridge_msgs::msg::FaceROI::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::FaceROI msg_;
};

class Init_FaceROI_width
{
public:
  explicit Init_FaceROI_width(::naoqi_bridge_msgs::msg::FaceROI & msg)
  : msg_(msg)
  {}
  Init_FaceROI_confidence width(::naoqi_bridge_msgs::msg::FaceROI::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_FaceROI_confidence(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::FaceROI msg_;
};

class Init_FaceROI_height
{
public:
  explicit Init_FaceROI_height(::naoqi_bridge_msgs::msg::FaceROI & msg)
  : msg_(msg)
  {}
  Init_FaceROI_width height(::naoqi_bridge_msgs::msg::FaceROI::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_FaceROI_width(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::FaceROI msg_;
};

class Init_FaceROI_cy
{
public:
  explicit Init_FaceROI_cy(::naoqi_bridge_msgs::msg::FaceROI & msg)
  : msg_(msg)
  {}
  Init_FaceROI_height cy(::naoqi_bridge_msgs::msg::FaceROI::_cy_type arg)
  {
    msg_.cy = std::move(arg);
    return Init_FaceROI_height(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::FaceROI msg_;
};

class Init_FaceROI_cx
{
public:
  explicit Init_FaceROI_cx(::naoqi_bridge_msgs::msg::FaceROI & msg)
  : msg_(msg)
  {}
  Init_FaceROI_cy cx(::naoqi_bridge_msgs::msg::FaceROI::_cx_type arg)
  {
    msg_.cx = std::move(arg);
    return Init_FaceROI_cy(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::FaceROI msg_;
};

class Init_FaceROI_angle
{
public:
  Init_FaceROI_angle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FaceROI_cx angle(::naoqi_bridge_msgs::msg::FaceROI::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return Init_FaceROI_cx(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::FaceROI msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::naoqi_bridge_msgs::msg::FaceROI>()
{
  return naoqi_bridge_msgs::msg::builder::Init_FaceROI_angle();
}

}  // namespace naoqi_bridge_msgs

#endif  // NAOQI_BRIDGE_MSGS__MSG__DETAIL__FACE_ROI__BUILDER_HPP_
