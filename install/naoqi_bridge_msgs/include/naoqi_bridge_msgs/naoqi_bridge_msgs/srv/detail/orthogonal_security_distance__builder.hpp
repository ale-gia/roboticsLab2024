// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from naoqi_bridge_msgs:srv/OrthogonalSecurityDistance.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__SRV__DETAIL__ORTHOGONAL_SECURITY_DISTANCE__BUILDER_HPP_
#define NAOQI_BRIDGE_MSGS__SRV__DETAIL__ORTHOGONAL_SECURITY_DISTANCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "naoqi_bridge_msgs/srv/detail/orthogonal_security_distance__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace naoqi_bridge_msgs
{

namespace srv
{

namespace builder
{

class Init_OrthogonalSecurityDistance_Request_orthogonal_distance
{
public:
  Init_OrthogonalSecurityDistance_Request_orthogonal_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::naoqi_bridge_msgs::srv::OrthogonalSecurityDistance_Request orthogonal_distance(::naoqi_bridge_msgs::srv::OrthogonalSecurityDistance_Request::_orthogonal_distance_type arg)
  {
    msg_.orthogonal_distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::naoqi_bridge_msgs::srv::OrthogonalSecurityDistance_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::naoqi_bridge_msgs::srv::OrthogonalSecurityDistance_Request>()
{
  return naoqi_bridge_msgs::srv::builder::Init_OrthogonalSecurityDistance_Request_orthogonal_distance();
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
auto build<::naoqi_bridge_msgs::srv::OrthogonalSecurityDistance_Response>()
{
  return ::naoqi_bridge_msgs::srv::OrthogonalSecurityDistance_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace naoqi_bridge_msgs

#endif  // NAOQI_BRIDGE_MSGS__SRV__DETAIL__ORTHOGONAL_SECURITY_DISTANCE__BUILDER_HPP_
