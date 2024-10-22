// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from naoqi_bridge_msgs:srv/CmdVelService.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__SRV__DETAIL__CMD_VEL_SERVICE__BUILDER_HPP_
#define NAOQI_BRIDGE_MSGS__SRV__DETAIL__CMD_VEL_SERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "naoqi_bridge_msgs/srv/detail/cmd_vel_service__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace naoqi_bridge_msgs
{

namespace srv
{

namespace builder
{

class Init_CmdVelService_Request_twist
{
public:
  Init_CmdVelService_Request_twist()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::naoqi_bridge_msgs::srv::CmdVelService_Request twist(::naoqi_bridge_msgs::srv::CmdVelService_Request::_twist_type arg)
  {
    msg_.twist = std::move(arg);
    return std::move(msg_);
  }

private:
  ::naoqi_bridge_msgs::srv::CmdVelService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::naoqi_bridge_msgs::srv::CmdVelService_Request>()
{
  return naoqi_bridge_msgs::srv::builder::Init_CmdVelService_Request_twist();
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
auto build<::naoqi_bridge_msgs::srv::CmdVelService_Response>()
{
  return ::naoqi_bridge_msgs::srv::CmdVelService_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace naoqi_bridge_msgs

#endif  // NAOQI_BRIDGE_MSGS__SRV__DETAIL__CMD_VEL_SERVICE__BUILDER_HPP_
