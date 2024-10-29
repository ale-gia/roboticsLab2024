// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from naoqi_bridge_msgs:msg/JointAnglesWithSpeed.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__MSG__DETAIL__JOINT_ANGLES_WITH_SPEED__BUILDER_HPP_
#define NAOQI_BRIDGE_MSGS__MSG__DETAIL__JOINT_ANGLES_WITH_SPEED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "naoqi_bridge_msgs/msg/detail/joint_angles_with_speed__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace naoqi_bridge_msgs
{

namespace msg
{

namespace builder
{

class Init_JointAnglesWithSpeed_relative
{
public:
  explicit Init_JointAnglesWithSpeed_relative(::naoqi_bridge_msgs::msg::JointAnglesWithSpeed & msg)
  : msg_(msg)
  {}
  ::naoqi_bridge_msgs::msg::JointAnglesWithSpeed relative(::naoqi_bridge_msgs::msg::JointAnglesWithSpeed::_relative_type arg)
  {
    msg_.relative = std::move(arg);
    return std::move(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::JointAnglesWithSpeed msg_;
};

class Init_JointAnglesWithSpeed_speed
{
public:
  explicit Init_JointAnglesWithSpeed_speed(::naoqi_bridge_msgs::msg::JointAnglesWithSpeed & msg)
  : msg_(msg)
  {}
  Init_JointAnglesWithSpeed_relative speed(::naoqi_bridge_msgs::msg::JointAnglesWithSpeed::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_JointAnglesWithSpeed_relative(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::JointAnglesWithSpeed msg_;
};

class Init_JointAnglesWithSpeed_joint_angles
{
public:
  explicit Init_JointAnglesWithSpeed_joint_angles(::naoqi_bridge_msgs::msg::JointAnglesWithSpeed & msg)
  : msg_(msg)
  {}
  Init_JointAnglesWithSpeed_speed joint_angles(::naoqi_bridge_msgs::msg::JointAnglesWithSpeed::_joint_angles_type arg)
  {
    msg_.joint_angles = std::move(arg);
    return Init_JointAnglesWithSpeed_speed(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::JointAnglesWithSpeed msg_;
};

class Init_JointAnglesWithSpeed_joint_names
{
public:
  explicit Init_JointAnglesWithSpeed_joint_names(::naoqi_bridge_msgs::msg::JointAnglesWithSpeed & msg)
  : msg_(msg)
  {}
  Init_JointAnglesWithSpeed_joint_angles joint_names(::naoqi_bridge_msgs::msg::JointAnglesWithSpeed::_joint_names_type arg)
  {
    msg_.joint_names = std::move(arg);
    return Init_JointAnglesWithSpeed_joint_angles(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::JointAnglesWithSpeed msg_;
};

class Init_JointAnglesWithSpeed_header
{
public:
  Init_JointAnglesWithSpeed_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointAnglesWithSpeed_joint_names header(::naoqi_bridge_msgs::msg::JointAnglesWithSpeed::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_JointAnglesWithSpeed_joint_names(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::JointAnglesWithSpeed msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::naoqi_bridge_msgs::msg::JointAnglesWithSpeed>()
{
  return naoqi_bridge_msgs::msg::builder::Init_JointAnglesWithSpeed_header();
}

}  // namespace naoqi_bridge_msgs

#endif  // NAOQI_BRIDGE_MSGS__MSG__DETAIL__JOINT_ANGLES_WITH_SPEED__BUILDER_HPP_
