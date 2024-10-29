// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from naoqi_bridge_msgs:msg/SoundLocated.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__MSG__DETAIL__SOUND_LOCATED__STRUCT_H_
#define NAOQI_BRIDGE_MSGS__MSG__DETAIL__SOUND_LOCATED__STRUCT_H_

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
// Member 'head_position_frame_torso'
// Member 'head_position_frame_robot'
#include "geometry_msgs/msg/detail/twist__struct.h"

/// Struct defined in msg/SoundLocated in the package naoqi_bridge_msgs.
typedef struct naoqi_bridge_msgs__msg__SoundLocated
{
  std_msgs__msg__Header header;
  double azimuth;
  double elevation;
  double confidence;
  double energy;
  geometry_msgs__msg__Twist head_position_frame_torso;
  geometry_msgs__msg__Twist head_position_frame_robot;
} naoqi_bridge_msgs__msg__SoundLocated;

// Struct for a sequence of naoqi_bridge_msgs__msg__SoundLocated.
typedef struct naoqi_bridge_msgs__msg__SoundLocated__Sequence
{
  naoqi_bridge_msgs__msg__SoundLocated * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} naoqi_bridge_msgs__msg__SoundLocated__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAOQI_BRIDGE_MSGS__MSG__DETAIL__SOUND_LOCATED__STRUCT_H_
