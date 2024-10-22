// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from naoqi_bridge_msgs:srv/SetTransform.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__SRV__DETAIL__SET_TRANSFORM__BUILDER_HPP_
#define NAOQI_BRIDGE_MSGS__SRV__DETAIL__SET_TRANSFORM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "naoqi_bridge_msgs/srv/detail/set_transform__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace naoqi_bridge_msgs
{

namespace srv
{

namespace builder
{

class Init_SetTransform_Request_offset
{
public:
  Init_SetTransform_Request_offset()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::naoqi_bridge_msgs::srv::SetTransform_Request offset(::naoqi_bridge_msgs::srv::SetTransform_Request::_offset_type arg)
  {
    msg_.offset = std::move(arg);
    return std::move(msg_);
  }

private:
  ::naoqi_bridge_msgs::srv::SetTransform_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::naoqi_bridge_msgs::srv::SetTransform_Request>()
{
  return naoqi_bridge_msgs::srv::builder::Init_SetTransform_Request_offset();
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
auto build<::naoqi_bridge_msgs::srv::SetTransform_Response>()
{
  return ::naoqi_bridge_msgs::srv::SetTransform_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace naoqi_bridge_msgs

#endif  // NAOQI_BRIDGE_MSGS__SRV__DETAIL__SET_TRANSFORM__BUILDER_HPP_
