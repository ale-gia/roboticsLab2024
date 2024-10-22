// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from naoqi_bridge_msgs:msg/StatusChangeStamped.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__MSG__DETAIL__STATUS_CHANGE_STAMPED__BUILDER_HPP_
#define NAOQI_BRIDGE_MSGS__MSG__DETAIL__STATUS_CHANGE_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "naoqi_bridge_msgs/msg/detail/status_change_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace naoqi_bridge_msgs
{

namespace msg
{

namespace builder
{

class Init_StatusChangeStamped_new_status
{
public:
  explicit Init_StatusChangeStamped_new_status(::naoqi_bridge_msgs::msg::StatusChangeStamped & msg)
  : msg_(msg)
  {}
  ::naoqi_bridge_msgs::msg::StatusChangeStamped new_status(::naoqi_bridge_msgs::msg::StatusChangeStamped::_new_status_type arg)
  {
    msg_.new_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::StatusChangeStamped msg_;
};

class Init_StatusChangeStamped_old_status
{
public:
  explicit Init_StatusChangeStamped_old_status(::naoqi_bridge_msgs::msg::StatusChangeStamped & msg)
  : msg_(msg)
  {}
  Init_StatusChangeStamped_new_status old_status(::naoqi_bridge_msgs::msg::StatusChangeStamped::_old_status_type arg)
  {
    msg_.old_status = std::move(arg);
    return Init_StatusChangeStamped_new_status(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::StatusChangeStamped msg_;
};

class Init_StatusChangeStamped_recharge_type
{
public:
  explicit Init_StatusChangeStamped_recharge_type(::naoqi_bridge_msgs::msg::StatusChangeStamped & msg)
  : msg_(msg)
  {}
  Init_StatusChangeStamped_old_status recharge_type(::naoqi_bridge_msgs::msg::StatusChangeStamped::_recharge_type_type arg)
  {
    msg_.recharge_type = std::move(arg);
    return Init_StatusChangeStamped_old_status(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::StatusChangeStamped msg_;
};

class Init_StatusChangeStamped_header
{
public:
  Init_StatusChangeStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StatusChangeStamped_recharge_type header(::naoqi_bridge_msgs::msg::StatusChangeStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_StatusChangeStamped_recharge_type(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::StatusChangeStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::naoqi_bridge_msgs::msg::StatusChangeStamped>()
{
  return naoqi_bridge_msgs::msg::builder::Init_StatusChangeStamped_header();
}

}  // namespace naoqi_bridge_msgs

#endif  // NAOQI_BRIDGE_MSGS__MSG__DETAIL__STATUS_CHANGE_STAMPED__BUILDER_HPP_
