// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from naoqi_bridge_msgs:srv/GetFacesROI.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__SRV__DETAIL__GET_FACES_ROI__BUILDER_HPP_
#define NAOQI_BRIDGE_MSGS__SRV__DETAIL__GET_FACES_ROI__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "naoqi_bridge_msgs/srv/detail/get_faces_roi__struct.hpp"
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
auto build<::naoqi_bridge_msgs::srv::GetFacesROI_Request>()
{
  return ::naoqi_bridge_msgs::srv::GetFacesROI_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace naoqi_bridge_msgs


namespace naoqi_bridge_msgs
{

namespace srv
{

namespace builder
{

class Init_GetFacesROI_Response_faces
{
public:
  Init_GetFacesROI_Response_faces()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::naoqi_bridge_msgs::srv::GetFacesROI_Response faces(::naoqi_bridge_msgs::srv::GetFacesROI_Response::_faces_type arg)
  {
    msg_.faces = std::move(arg);
    return std::move(msg_);
  }

private:
  ::naoqi_bridge_msgs::srv::GetFacesROI_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::naoqi_bridge_msgs::srv::GetFacesROI_Response>()
{
  return naoqi_bridge_msgs::srv::builder::Init_GetFacesROI_Response_faces();
}

}  // namespace naoqi_bridge_msgs

#endif  // NAOQI_BRIDGE_MSGS__SRV__DETAIL__GET_FACES_ROI__BUILDER_HPP_
