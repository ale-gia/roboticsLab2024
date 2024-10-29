// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from naoqi_bridge_msgs:msg/IntStamped.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__MSG__DETAIL__INT_STAMPED__BUILDER_HPP_
#define NAOQI_BRIDGE_MSGS__MSG__DETAIL__INT_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "naoqi_bridge_msgs/msg/detail/int_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace naoqi_bridge_msgs
{

namespace msg
{

namespace builder
{

class Init_IntStamped_data
{
public:
  explicit Init_IntStamped_data(::naoqi_bridge_msgs::msg::IntStamped & msg)
  : msg_(msg)
  {}
  ::naoqi_bridge_msgs::msg::IntStamped data(::naoqi_bridge_msgs::msg::IntStamped::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::IntStamped msg_;
};

class Init_IntStamped_header
{
public:
  Init_IntStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IntStamped_data header(::naoqi_bridge_msgs::msg::IntStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_IntStamped_data(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::IntStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::naoqi_bridge_msgs::msg::IntStamped>()
{
  return naoqi_bridge_msgs::msg::builder::Init_IntStamped_header();
}

}  // namespace naoqi_bridge_msgs

#endif  // NAOQI_BRIDGE_MSGS__MSG__DETAIL__INT_STAMPED__BUILDER_HPP_
