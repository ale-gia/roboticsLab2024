// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from naoqi_bridge_msgs:srv/GetFloat.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__SRV__DETAIL__GET_FLOAT__BUILDER_HPP_
#define NAOQI_BRIDGE_MSGS__SRV__DETAIL__GET_FLOAT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "naoqi_bridge_msgs/srv/detail/get_float__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace naoqi_bridge_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::naoqi_bridge_msgs::srv::GetFloat_Request>()
{
  return ::naoqi_bridge_msgs::srv::GetFloat_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace naoqi_bridge_msgs


namespace naoqi_bridge_msgs
{

namespace srv
{

namespace builder
{

class Init_GetFloat_Response_message
{
public:
  explicit Init_GetFloat_Response_message(::naoqi_bridge_msgs::srv::GetFloat_Response & msg)
  : msg_(msg)
  {}
  ::naoqi_bridge_msgs::srv::GetFloat_Response message(::naoqi_bridge_msgs::srv::GetFloat_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::naoqi_bridge_msgs::srv::GetFloat_Response msg_;
};

class Init_GetFloat_Response_data
{
public:
  Init_GetFloat_Response_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetFloat_Response_message data(::naoqi_bridge_msgs::srv::GetFloat_Response::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_GetFloat_Response_message(msg_);
  }

private:
  ::naoqi_bridge_msgs::srv::GetFloat_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::naoqi_bridge_msgs::srv::GetFloat_Response>()
{
  return naoqi_bridge_msgs::srv::builder::Init_GetFloat_Response_data();
}

}  // namespace naoqi_bridge_msgs

#endif  // NAOQI_BRIDGE_MSGS__SRV__DETAIL__GET_FLOAT__BUILDER_HPP_
