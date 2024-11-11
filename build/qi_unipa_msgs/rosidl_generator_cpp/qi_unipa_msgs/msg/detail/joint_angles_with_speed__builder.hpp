// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from qi_unipa_msgs:msg/JointAnglesWithSpeed.idl
// generated code does not contain a copyright notice

#ifndef QI_UNIPA_MSGS__MSG__DETAIL__JOINT_ANGLES_WITH_SPEED__BUILDER_HPP_
#define QI_UNIPA_MSGS__MSG__DETAIL__JOINT_ANGLES_WITH_SPEED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "qi_unipa_msgs/msg/detail/joint_angles_with_speed__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace qi_unipa_msgs
{

namespace msg
{

namespace builder
{

class Init_JointAnglesWithSpeed_speed
{
public:
  explicit Init_JointAnglesWithSpeed_speed(::qi_unipa_msgs::msg::JointAnglesWithSpeed & msg)
  : msg_(msg)
  {}
  ::qi_unipa_msgs::msg::JointAnglesWithSpeed speed(::qi_unipa_msgs::msg::JointAnglesWithSpeed::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::qi_unipa_msgs::msg::JointAnglesWithSpeed msg_;
};

class Init_JointAnglesWithSpeed_angles
{
public:
  explicit Init_JointAnglesWithSpeed_angles(::qi_unipa_msgs::msg::JointAnglesWithSpeed & msg)
  : msg_(msg)
  {}
  Init_JointAnglesWithSpeed_speed angles(::qi_unipa_msgs::msg::JointAnglesWithSpeed::_angles_type arg)
  {
    msg_.angles = std::move(arg);
    return Init_JointAnglesWithSpeed_speed(msg_);
  }

private:
  ::qi_unipa_msgs::msg::JointAnglesWithSpeed msg_;
};

class Init_JointAnglesWithSpeed_names
{
public:
  Init_JointAnglesWithSpeed_names()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointAnglesWithSpeed_angles names(::qi_unipa_msgs::msg::JointAnglesWithSpeed::_names_type arg)
  {
    msg_.names = std::move(arg);
    return Init_JointAnglesWithSpeed_angles(msg_);
  }

private:
  ::qi_unipa_msgs::msg::JointAnglesWithSpeed msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::qi_unipa_msgs::msg::JointAnglesWithSpeed>()
{
  return qi_unipa_msgs::msg::builder::Init_JointAnglesWithSpeed_names();
}

}  // namespace qi_unipa_msgs

#endif  // QI_UNIPA_MSGS__MSG__DETAIL__JOINT_ANGLES_WITH_SPEED__BUILDER_HPP_
