// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from naoqi_bridge_msgs:srv/GetRobotInfo.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__SRV__DETAIL__GET_ROBOT_INFO__STRUCT_H_
#define NAOQI_BRIDGE_MSGS__SRV__DETAIL__GET_ROBOT_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetRobotInfo in the package naoqi_bridge_msgs.
typedef struct naoqi_bridge_msgs__srv__GetRobotInfo_Request
{
  uint8_t structure_needs_at_least_one_member;
} naoqi_bridge_msgs__srv__GetRobotInfo_Request;

// Struct for a sequence of naoqi_bridge_msgs__srv__GetRobotInfo_Request.
typedef struct naoqi_bridge_msgs__srv__GetRobotInfo_Request__Sequence
{
  naoqi_bridge_msgs__srv__GetRobotInfo_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} naoqi_bridge_msgs__srv__GetRobotInfo_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "naoqi_bridge_msgs/msg/detail/robot_info__struct.h"

/// Struct defined in srv/GetRobotInfo in the package naoqi_bridge_msgs.
typedef struct naoqi_bridge_msgs__srv__GetRobotInfo_Response
{
  naoqi_bridge_msgs__msg__RobotInfo info;
} naoqi_bridge_msgs__srv__GetRobotInfo_Response;

// Struct for a sequence of naoqi_bridge_msgs__srv__GetRobotInfo_Response.
typedef struct naoqi_bridge_msgs__srv__GetRobotInfo_Response__Sequence
{
  naoqi_bridge_msgs__srv__GetRobotInfo_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} naoqi_bridge_msgs__srv__GetRobotInfo_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAOQI_BRIDGE_MSGS__SRV__DETAIL__GET_ROBOT_INFO__STRUCT_H_
