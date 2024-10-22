// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from naoqi_bridge_msgs:msg/EventStamped.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__MSG__DETAIL__EVENT_STAMPED__BUILDER_HPP_
#define NAOQI_BRIDGE_MSGS__MSG__DETAIL__EVENT_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "naoqi_bridge_msgs/msg/detail/event_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace naoqi_bridge_msgs
{

namespace msg
{

namespace builder
{

class Init_EventStamped_data
{
public:
  explicit Init_EventStamped_data(::naoqi_bridge_msgs::msg::EventStamped & msg)
  : msg_(msg)
  {}
  ::naoqi_bridge_msgs::msg::EventStamped data(::naoqi_bridge_msgs::msg::EventStamped::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::EventStamped msg_;
};

class Init_EventStamped_name
{
public:
  explicit Init_EventStamped_name(::naoqi_bridge_msgs::msg::EventStamped & msg)
  : msg_(msg)
  {}
  Init_EventStamped_data name(::naoqi_bridge_msgs::msg::EventStamped::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_EventStamped_data(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::EventStamped msg_;
};

class Init_EventStamped_header
{
public:
  Init_EventStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EventStamped_name header(::naoqi_bridge_msgs::msg::EventStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_EventStamped_name(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::EventStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::naoqi_bridge_msgs::msg::EventStamped>()
{
  return naoqi_bridge_msgs::msg::builder::Init_EventStamped_header();
}

}  // namespace naoqi_bridge_msgs

#endif  // NAOQI_BRIDGE_MSGS__MSG__DETAIL__EVENT_STAMPED__BUILDER_HPP_
