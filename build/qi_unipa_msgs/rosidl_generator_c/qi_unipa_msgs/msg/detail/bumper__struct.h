// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from qi_unipa_msgs:msg/Bumper.idl
// generated code does not contain a copyright notice

#ifndef QI_UNIPA_MSGS__MSG__DETAIL__BUMPER__STRUCT_H_
#define QI_UNIPA_MSGS__MSG__DETAIL__BUMPER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Bumper in the package qi_unipa_msgs.
typedef struct qi_unipa_msgs__msg__Bumper
{
  float left;
  float right;
  float back;
} qi_unipa_msgs__msg__Bumper;

// Struct for a sequence of qi_unipa_msgs__msg__Bumper.
typedef struct qi_unipa_msgs__msg__Bumper__Sequence
{
  qi_unipa_msgs__msg__Bumper * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} qi_unipa_msgs__msg__Bumper__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // QI_UNIPA_MSGS__MSG__DETAIL__BUMPER__STRUCT_H_
