// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from naoqi_bridge_msgs:srv/TangentialSecurityDistance.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__SRV__DETAIL__TANGENTIAL_SECURITY_DISTANCE__BUILDER_HPP_
#define NAOQI_BRIDGE_MSGS__SRV__DETAIL__TANGENTIAL_SECURITY_DISTANCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "naoqi_bridge_msgs/srv/detail/tangential_security_distance__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace naoqi_bridge_msgs
{

namespace srv
{

namespace builder
{

class Init_TangentialSecurityDistance_Request_tangential_distance
{
public:
  Init_TangentialSecurityDistance_Request_tangential_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::naoqi_bridge_msgs::srv::TangentialSecurityDistance_Request tangential_distance(::naoqi_bridge_msgs::srv::TangentialSecurityDistance_Request::_tangential_distance_type arg)
  {
    msg_.tangential_distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::naoqi_bridge_msgs::srv::TangentialSecurityDistance_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::naoqi_bridge_msgs::srv::TangentialSecurityDistance_Request>()
{
  return naoqi_bridge_msgs::srv::builder::Init_TangentialSecurityDistance_Request_tangential_distance();
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
auto build<::naoqi_bridge_msgs::srv::TangentialSecurityDistance_Response>()
{
  return ::naoqi_bridge_msgs::srv::TangentialSecurityDistance_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace naoqi_bridge_msgs

#endif  // NAOQI_BRIDGE_MSGS__SRV__DETAIL__TANGENTIAL_SECURITY_DISTANCE__BUILDER_HPP_
