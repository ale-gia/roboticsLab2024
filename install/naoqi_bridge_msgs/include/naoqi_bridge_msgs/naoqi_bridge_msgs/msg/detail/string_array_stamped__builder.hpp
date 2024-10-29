// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from naoqi_bridge_msgs:msg/StringArrayStamped.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__MSG__DETAIL__STRING_ARRAY_STAMPED__BUILDER_HPP_
#define NAOQI_BRIDGE_MSGS__MSG__DETAIL__STRING_ARRAY_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "naoqi_bridge_msgs/msg/detail/string_array_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace naoqi_bridge_msgs
{

namespace msg
{

namespace builder
{

class Init_StringArrayStamped_data
{
public:
  explicit Init_StringArrayStamped_data(::naoqi_bridge_msgs::msg::StringArrayStamped & msg)
  : msg_(msg)
  {}
  ::naoqi_bridge_msgs::msg::StringArrayStamped data(::naoqi_bridge_msgs::msg::StringArrayStamped::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::StringArrayStamped msg_;
};

class Init_StringArrayStamped_header
{
public:
  Init_StringArrayStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StringArrayStamped_data header(::naoqi_bridge_msgs::msg::StringArrayStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_StringArrayStamped_data(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::StringArrayStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::naoqi_bridge_msgs::msg::StringArrayStamped>()
{
  return naoqi_bridge_msgs::msg::builder::Init_StringArrayStamped_header();
}

}  // namespace naoqi_bridge_msgs

#endif  // NAOQI_BRIDGE_MSGS__MSG__DETAIL__STRING_ARRAY_STAMPED__BUILDER_HPP_
