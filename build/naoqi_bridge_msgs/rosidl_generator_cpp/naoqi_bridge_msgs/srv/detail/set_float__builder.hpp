// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from naoqi_bridge_msgs:srv/SetFloat.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__SRV__DETAIL__SET_FLOAT__BUILDER_HPP_
#define NAOQI_BRIDGE_MSGS__SRV__DETAIL__SET_FLOAT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "naoqi_bridge_msgs/srv/detail/set_float__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace naoqi_bridge_msgs
{

namespace srv
{

namespace builder
{

class Init_SetFloat_Request_data
{
public:
  Init_SetFloat_Request_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::naoqi_bridge_msgs::srv::SetFloat_Request data(::naoqi_bridge_msgs::srv::SetFloat_Request::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::naoqi_bridge_msgs::srv::SetFloat_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::naoqi_bridge_msgs::srv::SetFloat_Request>()
{
  return naoqi_bridge_msgs::srv::builder::Init_SetFloat_Request_data();
}

}  // namespace naoqi_bridge_msgs


namespace naoqi_bridge_msgs
{

namespace srv
{

namespace builder
{

class Init_SetFloat_Response_message
{
public:
  explicit Init_SetFloat_Response_message(::naoqi_bridge_msgs::srv::SetFloat_Response & msg)
  : msg_(msg)
  {}
  ::naoqi_bridge_msgs::srv::SetFloat_Response message(::naoqi_bridge_msgs::srv::SetFloat_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::naoqi_bridge_msgs::srv::SetFloat_Response msg_;
};

class Init_SetFloat_Response_success
{
public:
  Init_SetFloat_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetFloat_Response_message success(::naoqi_bridge_msgs::srv::SetFloat_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetFloat_Response_message(msg_);
  }

private:
  ::naoqi_bridge_msgs::srv::SetFloat_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::naoqi_bridge_msgs::srv::SetFloat_Response>()
{
  return naoqi_bridge_msgs::srv::builder::Init_SetFloat_Response_success();
}

}  // namespace naoqi_bridge_msgs

#endif  // NAOQI_BRIDGE_MSGS__SRV__DETAIL__SET_FLOAT__BUILDER_HPP_
