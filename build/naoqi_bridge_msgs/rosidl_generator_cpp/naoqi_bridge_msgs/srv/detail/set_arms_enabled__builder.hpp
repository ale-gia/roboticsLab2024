// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from naoqi_bridge_msgs:srv/SetArmsEnabled.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__SRV__DETAIL__SET_ARMS_ENABLED__BUILDER_HPP_
#define NAOQI_BRIDGE_MSGS__SRV__DETAIL__SET_ARMS_ENABLED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "naoqi_bridge_msgs/srv/detail/set_arms_enabled__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace naoqi_bridge_msgs
{

namespace srv
{

namespace builder
{

class Init_SetArmsEnabled_Request_right_arm
{
public:
  explicit Init_SetArmsEnabled_Request_right_arm(::naoqi_bridge_msgs::srv::SetArmsEnabled_Request & msg)
  : msg_(msg)
  {}
  ::naoqi_bridge_msgs::srv::SetArmsEnabled_Request right_arm(::naoqi_bridge_msgs::srv::SetArmsEnabled_Request::_right_arm_type arg)
  {
    msg_.right_arm = std::move(arg);
    return std::move(msg_);
  }

private:
  ::naoqi_bridge_msgs::srv::SetArmsEnabled_Request msg_;
};

class Init_SetArmsEnabled_Request_left_arm
{
public:
  Init_SetArmsEnabled_Request_left_arm()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetArmsEnabled_Request_right_arm left_arm(::naoqi_bridge_msgs::srv::SetArmsEnabled_Request::_left_arm_type arg)
  {
    msg_.left_arm = std::move(arg);
    return Init_SetArmsEnabled_Request_right_arm(msg_);
  }

private:
  ::naoqi_bridge_msgs::srv::SetArmsEnabled_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::naoqi_bridge_msgs::srv::SetArmsEnabled_Request>()
{
  return naoqi_bridge_msgs::srv::builder::Init_SetArmsEnabled_Request_left_arm();
}

}  // namespace naoqi_bridge_msgs


namespace naoqi_bridge_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::naoqi_bridge_msgs::srv::SetArmsEnabled_Response>()
{
  return ::naoqi_bridge_msgs::srv::SetArmsEnabled_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace naoqi_bridge_msgs

#endif  // NAOQI_BRIDGE_MSGS__SRV__DETAIL__SET_ARMS_ENABLED__BUILDER_HPP_
