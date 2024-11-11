// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from qi_unipa_msgs:msg/JointAnglesWithSpeed.idl
// generated code does not contain a copyright notice

#ifndef QI_UNIPA_MSGS__MSG__DETAIL__JOINT_ANGLES_WITH_SPEED__STRUCT_H_
#define QI_UNIPA_MSGS__MSG__DETAIL__JOINT_ANGLES_WITH_SPEED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'names'
#include "rosidl_runtime_c/string.h"
// Member 'angles'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/JointAnglesWithSpeed in the package qi_unipa_msgs.
typedef struct qi_unipa_msgs__msg__JointAnglesWithSpeed
{
  rosidl_runtime_c__String__Sequence names;
  rosidl_runtime_c__float__Sequence angles;
  float speed;
} qi_unipa_msgs__msg__JointAnglesWithSpeed;

// Struct for a sequence of qi_unipa_msgs__msg__JointAnglesWithSpeed.
typedef struct qi_unipa_msgs__msg__JointAnglesWithSpeed__Sequence
{
  qi_unipa_msgs__msg__JointAnglesWithSpeed * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} qi_unipa_msgs__msg__JointAnglesWithSpeed__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // QI_UNIPA_MSGS__MSG__DETAIL__JOINT_ANGLES_WITH_SPEED__STRUCT_H_
