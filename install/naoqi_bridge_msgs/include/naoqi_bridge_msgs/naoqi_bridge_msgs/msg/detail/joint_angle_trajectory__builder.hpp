// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from naoqi_bridge_msgs:msg/JointAngleTrajectory.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__MSG__DETAIL__JOINT_ANGLE_TRAJECTORY__BUILDER_HPP_
#define NAOQI_BRIDGE_MSGS__MSG__DETAIL__JOINT_ANGLE_TRAJECTORY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "naoqi_bridge_msgs/msg/detail/joint_angle_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace naoqi_bridge_msgs
{

namespace msg
{

namespace builder
{

class Init_JointAngleTrajectory_relative
{
public:
  explicit Init_JointAngleTrajectory_relative(::naoqi_bridge_msgs::msg::JointAngleTrajectory & msg)
  : msg_(msg)
  {}
  ::naoqi_bridge_msgs::msg::JointAngleTrajectory relative(::naoqi_bridge_msgs::msg::JointAngleTrajectory::_relative_type arg)
  {
    msg_.relative = std::move(arg);
    return std::move(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::JointAngleTrajectory msg_;
};

class Init_JointAngleTrajectory_times
{
public:
  explicit Init_JointAngleTrajectory_times(::naoqi_bridge_msgs::msg::JointAngleTrajectory & msg)
  : msg_(msg)
  {}
  Init_JointAngleTrajectory_relative times(::naoqi_bridge_msgs::msg::JointAngleTrajectory::_times_type arg)
  {
    msg_.times = std::move(arg);
    return Init_JointAngleTrajectory_relative(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::JointAngleTrajectory msg_;
};

class Init_JointAngleTrajectory_joint_angles
{
public:
  explicit Init_JointAngleTrajectory_joint_angles(::naoqi_bridge_msgs::msg::JointAngleTrajectory & msg)
  : msg_(msg)
  {}
  Init_JointAngleTrajectory_times joint_angles(::naoqi_bridge_msgs::msg::JointAngleTrajectory::_joint_angles_type arg)
  {
    msg_.joint_angles = std::move(arg);
    return Init_JointAngleTrajectory_times(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::JointAngleTrajectory msg_;
};

class Init_JointAngleTrajectory_joint_names
{
public:
  explicit Init_JointAngleTrajectory_joint_names(::naoqi_bridge_msgs::msg::JointAngleTrajectory & msg)
  : msg_(msg)
  {}
  Init_JointAngleTrajectory_joint_angles joint_names(::naoqi_bridge_msgs::msg::JointAngleTrajectory::_joint_names_type arg)
  {
    msg_.joint_names = std::move(arg);
    return Init_JointAngleTrajectory_joint_angles(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::JointAngleTrajectory msg_;
};

class Init_JointAngleTrajectory_header
{
public:
  Init_JointAngleTrajectory_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointAngleTrajectory_joint_names header(::naoqi_bridge_msgs::msg::JointAngleTrajectory::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_JointAngleTrajectory_joint_names(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::JointAngleTrajectory msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::naoqi_bridge_msgs::msg::JointAngleTrajectory>()
{
  return naoqi_bridge_msgs::msg::builder::Init_JointAngleTrajectory_header();
}

}  // namespace naoqi_bridge_msgs

#endif  // NAOQI_BRIDGE_MSGS__MSG__DETAIL__JOINT_ANGLE_TRAJECTORY__BUILDER_HPP_
