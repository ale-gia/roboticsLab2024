// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from naoqi_bridge_msgs:msg/MemoryList.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__MSG__DETAIL__MEMORY_LIST__STRUCT_H_
#define NAOQI_BRIDGE_MSGS__MSG__DETAIL__MEMORY_LIST__STRUCT_H_

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
// Member 'strings'
#include "naoqi_bridge_msgs/msg/detail/memory_pair_string__struct.h"
// Member 'ints'
#include "naoqi_bridge_msgs/msg/detail/memory_pair_int__struct.h"
// Member 'floats'
#include "naoqi_bridge_msgs/msg/detail/memory_pair_float__struct.h"

/// Struct defined in msg/MemoryList in the package naoqi_bridge_msgs.
typedef struct naoqi_bridge_msgs__msg__MemoryList
{
  std_msgs__msg__Header header;
  naoqi_bridge_msgs__msg__MemoryPairString__Sequence strings;
  naoqi_bridge_msgs__msg__MemoryPairInt__Sequence ints;
  naoqi_bridge_msgs__msg__MemoryPairFloat__Sequence floats;
} naoqi_bridge_msgs__msg__MemoryList;

// Struct for a sequence of naoqi_bridge_msgs__msg__MemoryList.
typedef struct naoqi_bridge_msgs__msg__MemoryList__Sequence
{
  naoqi_bridge_msgs__msg__MemoryList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} naoqi_bridge_msgs__msg__MemoryList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAOQI_BRIDGE_MSGS__MSG__DETAIL__MEMORY_LIST__STRUCT_H_
