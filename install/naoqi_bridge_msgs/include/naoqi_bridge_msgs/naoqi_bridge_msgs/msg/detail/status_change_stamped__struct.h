// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from naoqi_bridge_msgs:msg/StatusChangeStamped.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__MSG__DETAIL__STATUS_CHANGE_STAMPED__STRUCT_H_
#define NAOQI_BRIDGE_MSGS__MSG__DETAIL__STATUS_CHANGE_STAMPED__STRUCT_H_

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
// Member 'old_status'
// Member 'new_status'
#include "std_msgs/msg/detail/string__struct.h"

/// Struct defined in msg/StatusChangeStamped in the package naoqi_bridge_msgs.
typedef struct naoqi_bridge_msgs__msg__StatusChangeStamped
{
  std_msgs__msg__Header header;
  int16_t recharge_type;
  std_msgs__msg__String old_status;
  std_msgs__msg__String new_status;
} naoqi_bridge_msgs__msg__StatusChangeStamped;

// Struct for a sequence of naoqi_bridge_msgs__msg__StatusChangeStamped.
typedef struct naoqi_bridge_msgs__msg__StatusChangeStamped__Sequence
{
  naoqi_bridge_msgs__msg__StatusChangeStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} naoqi_bridge_msgs__msg__StatusChangeStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAOQI_BRIDGE_MSGS__MSG__DETAIL__STATUS_CHANGE_STAMPED__STRUCT_H_
