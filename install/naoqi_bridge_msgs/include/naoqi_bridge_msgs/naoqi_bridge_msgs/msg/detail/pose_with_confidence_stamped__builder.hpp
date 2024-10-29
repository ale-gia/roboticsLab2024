// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from naoqi_bridge_msgs:msg/PoseWithConfidenceStamped.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__MSG__DETAIL__POSE_WITH_CONFIDENCE_STAMPED__BUILDER_HPP_
#define NAOQI_BRIDGE_MSGS__MSG__DETAIL__POSE_WITH_CONFIDENCE_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "naoqi_bridge_msgs/msg/detail/pose_with_confidence_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace naoqi_bridge_msgs
{

namespace msg
{

namespace builder
{

class Init_PoseWithConfidenceStamped_confidence_index
{
public:
  explicit Init_PoseWithConfidenceStamped_confidence_index(::naoqi_bridge_msgs::msg::PoseWithConfidenceStamped & msg)
  : msg_(msg)
  {}
  ::naoqi_bridge_msgs::msg::PoseWithConfidenceStamped confidence_index(::naoqi_bridge_msgs::msg::PoseWithConfidenceStamped::_confidence_index_type arg)
  {
    msg_.confidence_index = std::move(arg);
    return std::move(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::PoseWithConfidenceStamped msg_;
};

class Init_PoseWithConfidenceStamped_pose
{
public:
  explicit Init_PoseWithConfidenceStamped_pose(::naoqi_bridge_msgs::msg::PoseWithConfidenceStamped & msg)
  : msg_(msg)
  {}
  Init_PoseWithConfidenceStamped_confidence_index pose(::naoqi_bridge_msgs::msg::PoseWithConfidenceStamped::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_PoseWithConfidenceStamped_confidence_index(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::PoseWithConfidenceStamped msg_;
};

class Init_PoseWithConfidenceStamped_header
{
public:
  Init_PoseWithConfidenceStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PoseWithConfidenceStamped_pose header(::naoqi_bridge_msgs::msg::PoseWithConfidenceStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PoseWithConfidenceStamped_pose(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::PoseWithConfidenceStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::naoqi_bridge_msgs::msg::PoseWithConfidenceStamped>()
{
  return naoqi_bridge_msgs::msg::builder::Init_PoseWithConfidenceStamped_header();
}

}  // namespace naoqi_bridge_msgs

#endif  // NAOQI_BRIDGE_MSGS__MSG__DETAIL__POSE_WITH_CONFIDENCE_STAMPED__BUILDER_HPP_
