// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from naoqi_bridge_msgs:msg/Bumper.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__MSG__DETAIL__BUMPER__BUILDER_HPP_
#define NAOQI_BRIDGE_MSGS__MSG__DETAIL__BUMPER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "naoqi_bridge_msgs/msg/detail/bumper__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace naoqi_bridge_msgs
{

namespace msg
{

namespace builder
{

class Init_Bumper_state
{
public:
  explicit Init_Bumper_state(::naoqi_bridge_msgs::msg::Bumper & msg)
  : msg_(msg)
  {}
  ::naoqi_bridge_msgs::msg::Bumper state(::naoqi_bridge_msgs::msg::Bumper::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::Bumper msg_;
};

class Init_Bumper_bumper
{
public:
  Init_Bumper_bumper()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Bumper_state bumper(::naoqi_bridge_msgs::msg::Bumper::_bumper_type arg)
  {
    msg_.bumper = std::move(arg);
    return Init_Bumper_state(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::Bumper msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::naoqi_bridge_msgs::msg::Bumper>()
{
  return naoqi_bridge_msgs::msg::builder::Init_Bumper_bumper();
}

}  // namespace naoqi_bridge_msgs

#endif  // NAOQI_BRIDGE_MSGS__MSG__DETAIL__BUMPER__BUILDER_HPP_
