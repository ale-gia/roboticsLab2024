// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from qi_unipa_msgs:msg/PostureWithSpeed.idl
// generated code does not contain a copyright notice

#ifndef QI_UNIPA_MSGS__MSG__DETAIL__POSTURE_WITH_SPEED__BUILDER_HPP_
#define QI_UNIPA_MSGS__MSG__DETAIL__POSTURE_WITH_SPEED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "qi_unipa_msgs/msg/detail/posture_with_speed__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace qi_unipa_msgs
{

namespace msg
{

namespace builder
{

class Init_PostureWithSpeed_speed
{
public:
  explicit Init_PostureWithSpeed_speed(::qi_unipa_msgs::msg::PostureWithSpeed & msg)
  : msg_(msg)
  {}
  ::qi_unipa_msgs::msg::PostureWithSpeed speed(::qi_unipa_msgs::msg::PostureWithSpeed::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::qi_unipa_msgs::msg::PostureWithSpeed msg_;
};

class Init_PostureWithSpeed_posture_name
{
public:
  Init_PostureWithSpeed_posture_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PostureWithSpeed_speed posture_name(::qi_unipa_msgs::msg::PostureWithSpeed::_posture_name_type arg)
  {
    msg_.posture_name = std::move(arg);
    return Init_PostureWithSpeed_speed(msg_);
  }

private:
  ::qi_unipa_msgs::msg::PostureWithSpeed msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::qi_unipa_msgs::msg::PostureWithSpeed>()
{
  return qi_unipa_msgs::msg::builder::Init_PostureWithSpeed_posture_name();
}

}  // namespace qi_unipa_msgs

#endif  // QI_UNIPA_MSGS__MSG__DETAIL__POSTURE_WITH_SPEED__BUILDER_HPP_
