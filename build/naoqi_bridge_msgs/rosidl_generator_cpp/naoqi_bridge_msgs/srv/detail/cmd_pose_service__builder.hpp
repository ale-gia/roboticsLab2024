// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from naoqi_bridge_msgs:srv/CmdPoseService.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__SRV__DETAIL__CMD_POSE_SERVICE__BUILDER_HPP_
#define NAOQI_BRIDGE_MSGS__SRV__DETAIL__CMD_POSE_SERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "naoqi_bridge_msgs/srv/detail/cmd_pose_service__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace naoqi_bridge_msgs
{

namespace srv
{

namespace builder
{

class Init_CmdPoseService_Request_pose
{
public:
  Init_CmdPoseService_Request_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::naoqi_bridge_msgs::srv::CmdPoseService_Request pose(::naoqi_bridge_msgs::srv::CmdPoseService_Request::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::naoqi_bridge_msgs::srv::CmdPoseService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::naoqi_bridge_msgs::srv::CmdPoseService_Request>()
{
  return naoqi_bridge_msgs::srv::builder::Init_CmdPoseService_Request_pose();
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
auto build<::naoqi_bridge_msgs::srv::CmdPoseService_Response>()
{
  return ::naoqi_bridge_msgs::srv::CmdPoseService_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace naoqi_bridge_msgs

#endif  // NAOQI_BRIDGE_MSGS__SRV__DETAIL__CMD_POSE_SERVICE__BUILDER_HPP_
