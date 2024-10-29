// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from naoqi_bridge_msgs:msg/JointAngleTrajectory.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__MSG__DETAIL__JOINT_ANGLE_TRAJECTORY__STRUCT_H_
#define NAOQI_BRIDGE_MSGS__MSG__DETAIL__JOINT_ANGLE_TRAJECTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'joint_names'
#include "rosidl_runtime_c/string.h"
// Member 'joint_angles'
// Member 'times'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/JointAngleTrajectory in the package naoqi_bridge_msgs.
typedef struct naoqi_bridge_msgs__msg__JointAngleTrajectory
{
  std_msgs__msg__Header header;
  /// A list of joint names, corresponding to their names in the Nao docs.
  /// This must be either the same lenght of joint_angles or 1 if it's a
  /// keyword such as 'Body' (for all angles)
  rosidl_runtime_c__String__Sequence joint_names;
  rosidl_runtime_c__float__Sequence joint_angles;
  rosidl_runtime_c__float__Sequence times;
  /// Absolute angle(=0, default) or relative change
  uint8_t relative;
} naoqi_bridge_msgs__msg__JointAngleTrajectory;

// Struct for a sequence of naoqi_bridge_msgs__msg__JointAngleTrajectory.
typedef struct naoqi_bridge_msgs__msg__JointAngleTrajectory__Sequence
{
  naoqi_bridge_msgs__msg__JointAngleTrajectory * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} naoqi_bridge_msgs__msg__JointAngleTrajectory__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAOQI_BRIDGE_MSGS__MSG__DETAIL__JOINT_ANGLE_TRAJECTORY__STRUCT_H_
