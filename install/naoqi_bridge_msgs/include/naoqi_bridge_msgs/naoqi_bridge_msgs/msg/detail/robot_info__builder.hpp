// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from naoqi_bridge_msgs:msg/RobotInfo.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__MSG__DETAIL__ROBOT_INFO__BUILDER_HPP_
#define NAOQI_BRIDGE_MSGS__MSG__DETAIL__ROBOT_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "naoqi_bridge_msgs/msg/detail/robot_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace naoqi_bridge_msgs
{

namespace msg
{

namespace builder
{

class Init_RobotInfo_number_of_hands
{
public:
  explicit Init_RobotInfo_number_of_hands(::naoqi_bridge_msgs::msg::RobotInfo & msg)
  : msg_(msg)
  {}
  ::naoqi_bridge_msgs::msg::RobotInfo number_of_hands(::naoqi_bridge_msgs::msg::RobotInfo::_number_of_hands_type arg)
  {
    msg_.number_of_hands = std::move(arg);
    return std::move(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::RobotInfo msg_;
};

class Init_RobotInfo_number_of_arms
{
public:
  explicit Init_RobotInfo_number_of_arms(::naoqi_bridge_msgs::msg::RobotInfo & msg)
  : msg_(msg)
  {}
  Init_RobotInfo_number_of_hands number_of_arms(::naoqi_bridge_msgs::msg::RobotInfo::_number_of_arms_type arg)
  {
    msg_.number_of_arms = std::move(arg);
    return Init_RobotInfo_number_of_hands(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::RobotInfo msg_;
};

class Init_RobotInfo_number_of_legs
{
public:
  explicit Init_RobotInfo_number_of_legs(::naoqi_bridge_msgs::msg::RobotInfo & msg)
  : msg_(msg)
  {}
  Init_RobotInfo_number_of_arms number_of_legs(::naoqi_bridge_msgs::msg::RobotInfo::_number_of_legs_type arg)
  {
    msg_.number_of_legs = std::move(arg);
    return Init_RobotInfo_number_of_arms(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::RobotInfo msg_;
};

class Init_RobotInfo_has_extended_arms
{
public:
  explicit Init_RobotInfo_has_extended_arms(::naoqi_bridge_msgs::msg::RobotInfo & msg)
  : msg_(msg)
  {}
  Init_RobotInfo_number_of_legs has_extended_arms(::naoqi_bridge_msgs::msg::RobotInfo::_has_extended_arms_type arg)
  {
    msg_.has_extended_arms = std::move(arg);
    return Init_RobotInfo_number_of_legs(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::RobotInfo msg_;
};

class Init_RobotInfo_has_laser
{
public:
  explicit Init_RobotInfo_has_laser(::naoqi_bridge_msgs::msg::RobotInfo & msg)
  : msg_(msg)
  {}
  Init_RobotInfo_has_extended_arms has_laser(::naoqi_bridge_msgs::msg::RobotInfo::_has_laser_type arg)
  {
    msg_.has_laser = std::move(arg);
    return Init_RobotInfo_has_extended_arms(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::RobotInfo msg_;
};

class Init_RobotInfo_arm_version
{
public:
  explicit Init_RobotInfo_arm_version(::naoqi_bridge_msgs::msg::RobotInfo & msg)
  : msg_(msg)
  {}
  Init_RobotInfo_has_laser arm_version(::naoqi_bridge_msgs::msg::RobotInfo::_arm_version_type arg)
  {
    msg_.arm_version = std::move(arg);
    return Init_RobotInfo_has_laser(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::RobotInfo msg_;
};

class Init_RobotInfo_body_version
{
public:
  explicit Init_RobotInfo_body_version(::naoqi_bridge_msgs::msg::RobotInfo & msg)
  : msg_(msg)
  {}
  Init_RobotInfo_arm_version body_version(::naoqi_bridge_msgs::msg::RobotInfo::_body_version_type arg)
  {
    msg_.body_version = std::move(arg);
    return Init_RobotInfo_arm_version(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::RobotInfo msg_;
};

class Init_RobotInfo_head_version
{
public:
  explicit Init_RobotInfo_head_version(::naoqi_bridge_msgs::msg::RobotInfo & msg)
  : msg_(msg)
  {}
  Init_RobotInfo_body_version head_version(::naoqi_bridge_msgs::msg::RobotInfo::_head_version_type arg)
  {
    msg_.head_version = std::move(arg);
    return Init_RobotInfo_body_version(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::RobotInfo msg_;
};

class Init_RobotInfo_model
{
public:
  explicit Init_RobotInfo_model(::naoqi_bridge_msgs::msg::RobotInfo & msg)
  : msg_(msg)
  {}
  Init_RobotInfo_head_version model(::naoqi_bridge_msgs::msg::RobotInfo::_model_type arg)
  {
    msg_.model = std::move(arg);
    return Init_RobotInfo_head_version(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::RobotInfo msg_;
};

class Init_RobotInfo_type
{
public:
  Init_RobotInfo_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotInfo_model type(::naoqi_bridge_msgs::msg::RobotInfo::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_RobotInfo_model(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::RobotInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::naoqi_bridge_msgs::msg::RobotInfo>()
{
  return naoqi_bridge_msgs::msg::builder::Init_RobotInfo_type();
}

}  // namespace naoqi_bridge_msgs

#endif  // NAOQI_BRIDGE_MSGS__MSG__DETAIL__ROBOT_INFO__BUILDER_HPP_
