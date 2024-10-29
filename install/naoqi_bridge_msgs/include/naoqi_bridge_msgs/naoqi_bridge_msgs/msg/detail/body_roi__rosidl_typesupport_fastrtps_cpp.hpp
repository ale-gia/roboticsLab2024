// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from naoqi_bridge_msgs:msg/BodyROI.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__MSG__DETAIL__BODY_ROI__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define NAOQI_BRIDGE_MSGS__MSG__DETAIL__BODY_ROI__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "naoqi_bridge_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "naoqi_bridge_msgs/msg/detail/body_roi__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace naoqi_bridge_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_naoqi_bridge_msgs
cdr_serialize(
  const naoqi_bridge_msgs::msg::BodyROI & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_naoqi_bridge_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  naoqi_bridge_msgs::msg::BodyROI & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_naoqi_bridge_msgs
get_serialized_size(
  const naoqi_bridge_msgs::msg::BodyROI & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_naoqi_bridge_msgs
max_serialized_size_BodyROI(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace naoqi_bridge_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_naoqi_bridge_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, naoqi_bridge_msgs, msg, BodyROI)();

#ifdef __cplusplus
}
#endif

#endif  // NAOQI_BRIDGE_MSGS__MSG__DETAIL__BODY_ROI__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
