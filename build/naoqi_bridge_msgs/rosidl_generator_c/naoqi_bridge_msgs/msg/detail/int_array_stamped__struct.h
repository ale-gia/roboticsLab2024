// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from naoqi_bridge_msgs:msg/IntArrayStamped.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__MSG__DETAIL__INT_ARRAY_STAMPED__STRUCT_H_
#define NAOQI_BRIDGE_MSGS__MSG__DETAIL__INT_ARRAY_STAMPED__STRUCT_H_

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
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/IntArrayStamped in the package naoqi_bridge_msgs.
typedef struct naoqi_bridge_msgs__msg__IntArrayStamped
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__int32__Sequence data;
} naoqi_bridge_msgs__msg__IntArrayStamped;

// Struct for a sequence of naoqi_bridge_msgs__msg__IntArrayStamped.
typedef struct naoqi_bridge_msgs__msg__IntArrayStamped__Sequence
{
  naoqi_bridge_msgs__msg__IntArrayStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} naoqi_bridge_msgs__msg__IntArrayStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAOQI_BRIDGE_MSGS__MSG__DETAIL__INT_ARRAY_STAMPED__STRUCT_H_
