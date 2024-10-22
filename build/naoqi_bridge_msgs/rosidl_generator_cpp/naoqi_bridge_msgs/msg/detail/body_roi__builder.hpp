// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from naoqi_bridge_msgs:msg/BodyROI.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__MSG__DETAIL__BODY_ROI__BUILDER_HPP_
#define NAOQI_BRIDGE_MSGS__MSG__DETAIL__BODY_ROI__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "naoqi_bridge_msgs/msg/detail/body_roi__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace naoqi_bridge_msgs
{

namespace msg
{

namespace builder
{

class Init_BodyROI_confidence
{
public:
  explicit Init_BodyROI_confidence(::naoqi_bridge_msgs::msg::BodyROI & msg)
  : msg_(msg)
  {}
  ::naoqi_bridge_msgs::msg::BodyROI confidence(::naoqi_bridge_msgs::msg::BodyROI::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::BodyROI msg_;
};

class Init_BodyROI_width
{
public:
  explicit Init_BodyROI_width(::naoqi_bridge_msgs::msg::BodyROI & msg)
  : msg_(msg)
  {}
  Init_BodyROI_confidence width(::naoqi_bridge_msgs::msg::BodyROI::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_BodyROI_confidence(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::BodyROI msg_;
};

class Init_BodyROI_height
{
public:
  explicit Init_BodyROI_height(::naoqi_bridge_msgs::msg::BodyROI & msg)
  : msg_(msg)
  {}
  Init_BodyROI_width height(::naoqi_bridge_msgs::msg::BodyROI::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_BodyROI_width(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::BodyROI msg_;
};

class Init_BodyROI_cy
{
public:
  explicit Init_BodyROI_cy(::naoqi_bridge_msgs::msg::BodyROI & msg)
  : msg_(msg)
  {}
  Init_BodyROI_height cy(::naoqi_bridge_msgs::msg::BodyROI::_cy_type arg)
  {
    msg_.cy = std::move(arg);
    return Init_BodyROI_height(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::BodyROI msg_;
};

class Init_BodyROI_cx
{
public:
  explicit Init_BodyROI_cx(::naoqi_bridge_msgs::msg::BodyROI & msg)
  : msg_(msg)
  {}
  Init_BodyROI_cy cx(::naoqi_bridge_msgs::msg::BodyROI::_cx_type arg)
  {
    msg_.cx = std::move(arg);
    return Init_BodyROI_cy(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::BodyROI msg_;
};

class Init_BodyROI_angle
{
public:
  Init_BodyROI_angle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BodyROI_cx angle(::naoqi_bridge_msgs::msg::BodyROI::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return Init_BodyROI_cx(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::BodyROI msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::naoqi_bridge_msgs::msg::BodyROI>()
{
  return naoqi_bridge_msgs::msg::builder::Init_BodyROI_angle();
}

}  // namespace naoqi_bridge_msgs

#endif  // NAOQI_BRIDGE_MSGS__MSG__DETAIL__BODY_ROI__BUILDER_HPP_
