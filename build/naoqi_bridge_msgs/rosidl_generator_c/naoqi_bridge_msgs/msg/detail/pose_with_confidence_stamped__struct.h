// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from naoqi_bridge_msgs:msg/PoseWithConfidenceStamped.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__MSG__DETAIL__POSE_WITH_CONFIDENCE_STAMPED__STRUCT_H_
#define NAOQI_BRIDGE_MSGS__MSG__DETAIL__POSE_WITH_CONFIDENCE_STAMPED__STRUCT_H_

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
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/PoseWithConfidenceStamped in the package naoqi_bridge_msgs.
typedef struct naoqi_bridge_msgs__msg__PoseWithConfidenceStamped
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Pose pose;
  float confidence_index;
} naoqi_bridge_msgs__msg__PoseWithConfidenceStamped;

// Struct for a sequence of naoqi_bridge_msgs__msg__PoseWithConfidenceStamped.
typedef struct naoqi_bridge_msgs__msg__PoseWithConfidenceStamped__Sequence
{
  naoqi_bridge_msgs__msg__PoseWithConfidenceStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} naoqi_bridge_msgs__msg__PoseWithConfidenceStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAOQI_BRIDGE_MSGS__MSG__DETAIL__POSE_WITH_CONFIDENCE_STAMPED__STRUCT_H_
