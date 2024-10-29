// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from naoqi_bridge_msgs:msg/FloatArrayStamped.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__MSG__DETAIL__FLOAT_ARRAY_STAMPED__BUILDER_HPP_
#define NAOQI_BRIDGE_MSGS__MSG__DETAIL__FLOAT_ARRAY_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "naoqi_bridge_msgs/msg/detail/float_array_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace naoqi_bridge_msgs
{

namespace msg
{

namespace builder
{

class Init_FloatArrayStamped_data
{
public:
  explicit Init_FloatArrayStamped_data(::naoqi_bridge_msgs::msg::FloatArrayStamped & msg)
  : msg_(msg)
  {}
  ::naoqi_bridge_msgs::msg::FloatArrayStamped data(::naoqi_bridge_msgs::msg::FloatArrayStamped::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::FloatArrayStamped msg_;
};

class Init_FloatArrayStamped_header
{
public:
  Init_FloatArrayStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FloatArrayStamped_data header(::naoqi_bridge_msgs::msg::FloatArrayStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_FloatArrayStamped_data(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::FloatArrayStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::naoqi_bridge_msgs::msg::FloatArrayStamped>()
{
  return naoqi_bridge_msgs::msg::builder::Init_FloatArrayStamped_header();
}

}  // namespace naoqi_bridge_msgs

#endif  // NAOQI_BRIDGE_MSGS__MSG__DETAIL__FLOAT_ARRAY_STAMPED__BUILDER_HPP_
