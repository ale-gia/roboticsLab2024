// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from naoqi_bridge_msgs:msg/HandTouch.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__MSG__DETAIL__HAND_TOUCH__BUILDER_HPP_
#define NAOQI_BRIDGE_MSGS__MSG__DETAIL__HAND_TOUCH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "naoqi_bridge_msgs/msg/detail/hand_touch__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace naoqi_bridge_msgs
{

namespace msg
{

namespace builder
{

class Init_HandTouch_state
{
public:
  explicit Init_HandTouch_state(::naoqi_bridge_msgs::msg::HandTouch & msg)
  : msg_(msg)
  {}
  ::naoqi_bridge_msgs::msg::HandTouch state(::naoqi_bridge_msgs::msg::HandTouch::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::HandTouch msg_;
};

class Init_HandTouch_hand
{
public:
  Init_HandTouch_hand()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HandTouch_state hand(::naoqi_bridge_msgs::msg::HandTouch::_hand_type arg)
  {
    msg_.hand = std::move(arg);
    return Init_HandTouch_state(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::HandTouch msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::naoqi_bridge_msgs::msg::HandTouch>()
{
  return naoqi_bridge_msgs::msg::builder::Init_HandTouch_hand();
}

}  // namespace naoqi_bridge_msgs

#endif  // NAOQI_BRIDGE_MSGS__MSG__DETAIL__HAND_TOUCH__BUILDER_HPP_
