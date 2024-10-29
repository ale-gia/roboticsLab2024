// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from naoqi_bridge_msgs:action/RunBehavior.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__ACTION__DETAIL__RUN_BEHAVIOR__STRUCT_H_
#define NAOQI_BRIDGE_MSGS__ACTION__DETAIL__RUN_BEHAVIOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'behavior'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/RunBehavior in the package naoqi_bridge_msgs.
typedef struct naoqi_bridge_msgs__action__RunBehavior_Goal
{
  rosidl_runtime_c__String behavior;
} naoqi_bridge_msgs__action__RunBehavior_Goal;

// Struct for a sequence of naoqi_bridge_msgs__action__RunBehavior_Goal.
typedef struct naoqi_bridge_msgs__action__RunBehavior_Goal__Sequence
{
  naoqi_bridge_msgs__action__RunBehavior_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} naoqi_bridge_msgs__action__RunBehavior_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/RunBehavior in the package naoqi_bridge_msgs.
typedef struct naoqi_bridge_msgs__action__RunBehavior_Result
{
  uint8_t structure_needs_at_least_one_member;
} naoqi_bridge_msgs__action__RunBehavior_Result;

// Struct for a sequence of naoqi_bridge_msgs__action__RunBehavior_Result.
typedef struct naoqi_bridge_msgs__action__RunBehavior_Result__Sequence
{
  naoqi_bridge_msgs__action__RunBehavior_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} naoqi_bridge_msgs__action__RunBehavior_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/RunBehavior in the package naoqi_bridge_msgs.
typedef struct naoqi_bridge_msgs__action__RunBehavior_Feedback
{
  uint8_t structure_needs_at_least_one_member;
} naoqi_bridge_msgs__action__RunBehavior_Feedback;

// Struct for a sequence of naoqi_bridge_msgs__action__RunBehavior_Feedback.
typedef struct naoqi_bridge_msgs__action__RunBehavior_Feedback__Sequence
{
  naoqi_bridge_msgs__action__RunBehavior_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} naoqi_bridge_msgs__action__RunBehavior_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "naoqi_bridge_msgs/action/detail/run_behavior__struct.h"

/// Struct defined in action/RunBehavior in the package naoqi_bridge_msgs.
typedef struct naoqi_bridge_msgs__action__RunBehavior_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  naoqi_bridge_msgs__action__RunBehavior_Goal goal;
} naoqi_bridge_msgs__action__RunBehavior_SendGoal_Request;

// Struct for a sequence of naoqi_bridge_msgs__action__RunBehavior_SendGoal_Request.
typedef struct naoqi_bridge_msgs__action__RunBehavior_SendGoal_Request__Sequence
{
  naoqi_bridge_msgs__action__RunBehavior_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} naoqi_bridge_msgs__action__RunBehavior_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/RunBehavior in the package naoqi_bridge_msgs.
typedef struct naoqi_bridge_msgs__action__RunBehavior_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} naoqi_bridge_msgs__action__RunBehavior_SendGoal_Response;

// Struct for a sequence of naoqi_bridge_msgs__action__RunBehavior_SendGoal_Response.
typedef struct naoqi_bridge_msgs__action__RunBehavior_SendGoal_Response__Sequence
{
  naoqi_bridge_msgs__action__RunBehavior_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} naoqi_bridge_msgs__action__RunBehavior_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/RunBehavior in the package naoqi_bridge_msgs.
typedef struct naoqi_bridge_msgs__action__RunBehavior_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} naoqi_bridge_msgs__action__RunBehavior_GetResult_Request;

// Struct for a sequence of naoqi_bridge_msgs__action__RunBehavior_GetResult_Request.
typedef struct naoqi_bridge_msgs__action__RunBehavior_GetResult_Request__Sequence
{
  naoqi_bridge_msgs__action__RunBehavior_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} naoqi_bridge_msgs__action__RunBehavior_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "naoqi_bridge_msgs/action/detail/run_behavior__struct.h"

/// Struct defined in action/RunBehavior in the package naoqi_bridge_msgs.
typedef struct naoqi_bridge_msgs__action__RunBehavior_GetResult_Response
{
  int8_t status;
  naoqi_bridge_msgs__action__RunBehavior_Result result;
} naoqi_bridge_msgs__action__RunBehavior_GetResult_Response;

// Struct for a sequence of naoqi_bridge_msgs__action__RunBehavior_GetResult_Response.
typedef struct naoqi_bridge_msgs__action__RunBehavior_GetResult_Response__Sequence
{
  naoqi_bridge_msgs__action__RunBehavior_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} naoqi_bridge_msgs__action__RunBehavior_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "naoqi_bridge_msgs/action/detail/run_behavior__struct.h"

/// Struct defined in action/RunBehavior in the package naoqi_bridge_msgs.
typedef struct naoqi_bridge_msgs__action__RunBehavior_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  naoqi_bridge_msgs__action__RunBehavior_Feedback feedback;
} naoqi_bridge_msgs__action__RunBehavior_FeedbackMessage;

// Struct for a sequence of naoqi_bridge_msgs__action__RunBehavior_FeedbackMessage.
typedef struct naoqi_bridge_msgs__action__RunBehavior_FeedbackMessage__Sequence
{
  naoqi_bridge_msgs__action__RunBehavior_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} naoqi_bridge_msgs__action__RunBehavior_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAOQI_BRIDGE_MSGS__ACTION__DETAIL__RUN_BEHAVIOR__STRUCT_H_
