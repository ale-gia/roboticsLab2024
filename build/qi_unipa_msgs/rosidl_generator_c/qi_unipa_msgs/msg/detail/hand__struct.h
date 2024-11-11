// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from qi_unipa_msgs:msg/Hand.idl
// generated code does not contain a copyright notice

#ifndef QI_UNIPA_MSGS__MSG__DETAIL__HAND__STRUCT_H_
#define QI_UNIPA_MSGS__MSG__DETAIL__HAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'hand'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Hand in the package qi_unipa_msgs.
typedef struct qi_unipa_msgs__msg__Hand
{
  rosidl_runtime_c__String hand;
  int32_t fun;
} qi_unipa_msgs__msg__Hand;

// Struct for a sequence of qi_unipa_msgs__msg__Hand.
typedef struct qi_unipa_msgs__msg__Hand__Sequence
{
  qi_unipa_msgs__msg__Hand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} qi_unipa_msgs__msg__Hand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // QI_UNIPA_MSGS__MSG__DETAIL__HAND__STRUCT_H_
