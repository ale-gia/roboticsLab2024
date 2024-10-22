// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from naoqi_bridge_msgs:msg/HeadTouch.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__MSG__DETAIL__HEAD_TOUCH__BUILDER_HPP_
#define NAOQI_BRIDGE_MSGS__MSG__DETAIL__HEAD_TOUCH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "naoqi_bridge_msgs/msg/detail/head_touch__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace naoqi_bridge_msgs
{

namespace msg
{

namespace builder
{

class Init_HeadTouch_state
{
public:
  explicit Init_HeadTouch_state(::naoqi_bridge_msgs::msg::HeadTouch & msg)
  : msg_(msg)
  {}
  ::naoqi_bridge_msgs::msg::HeadTouch state(::naoqi_bridge_msgs::msg::HeadTouch::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::HeadTouch msg_;
};

class Init_HeadTouch_button
{
public:
  Init_HeadTouch_button()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HeadTouch_state button(::naoqi_bridge_msgs::msg::HeadTouch::_button_type arg)
  {
    msg_.button = std::move(arg);
    return Init_HeadTouch_state(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::HeadTouch msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::naoqi_bridge_msgs::msg::HeadTouch>()
{
  return naoqi_bridge_msgs::msg::builder::Init_HeadTouch_button();
}

}  // namespace naoqi_bridge_msgs

#endif  // NAOQI_BRIDGE_MSGS__MSG__DETAIL__HEAD_TOUCH__BUILDER_HPP_
