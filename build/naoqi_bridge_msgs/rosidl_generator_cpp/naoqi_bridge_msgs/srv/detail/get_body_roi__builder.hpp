// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from naoqi_bridge_msgs:srv/GetBodyROI.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__SRV__DETAIL__GET_BODY_ROI__BUILDER_HPP_
#define NAOQI_BRIDGE_MSGS__SRV__DETAIL__GET_BODY_ROI__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "naoqi_bridge_msgs/srv/detail/get_body_roi__struct.hpp"
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
auto build<::naoqi_bridge_msgs::srv::GetBodyROI_Request>()
{
  return ::naoqi_bridge_msgs::srv::GetBodyROI_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace naoqi_bridge_msgs


namespace naoqi_bridge_msgs
{

namespace srv
{

namespace builder
{

class Init_GetBodyROI_Response_bodies
{
public:
  Init_GetBodyROI_Response_bodies()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::naoqi_bridge_msgs::srv::GetBodyROI_Response bodies(::naoqi_bridge_msgs::srv::GetBodyROI_Response::_bodies_type arg)
  {
    msg_.bodies = std::move(arg);
    return std::move(msg_);
  }

private:
  ::naoqi_bridge_msgs::srv::GetBodyROI_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::naoqi_bridge_msgs::srv::GetBodyROI_Response>()
{
  return naoqi_bridge_msgs::srv::builder::Init_GetBodyROI_Response_bodies();
}

}  // namespace naoqi_bridge_msgs

#endif  // NAOQI_BRIDGE_MSGS__SRV__DETAIL__GET_BODY_ROI__BUILDER_HPP_
