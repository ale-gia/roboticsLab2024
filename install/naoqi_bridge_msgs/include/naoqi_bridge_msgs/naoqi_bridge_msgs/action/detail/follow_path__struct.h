// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from naoqi_bridge_msgs:action/FollowPath.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__ACTION__DETAIL__FOLLOW_PATH__STRUCT_H_
#define NAOQI_BRIDGE_MSGS__ACTION__DETAIL__FOLLOW_PATH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'path'
#include "nav_msgs/msg/detail/path__struct.h"

/// Struct defined in action/FollowPath in the package naoqi_bridge_msgs.
typedef struct naoqi_bridge_msgs__action__FollowPath_Goal
{
  nav_msgs__msg__Path path;
} naoqi_bridge_msgs__action__FollowPath_Goal;

// Struct for a sequence of naoqi_bridge_msgs__action__FollowPath_Goal.
typedef struct naoqi_bridge_msgs__action__FollowPath_Goal__Sequence
{
  naoqi_bridge_msgs__action__FollowPath_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} naoqi_bridge_msgs__action__FollowPath_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/FollowPath in the package naoqi_bridge_msgs.
typedef struct naoqi_bridge_msgs__action__FollowPath_Result
{
  uint8_t structure_needs_at_least_one_member;
} naoqi_bridge_msgs__action__FollowPath_Result;

// Struct for a sequence of naoqi_bridge_msgs__action__FollowPath_Result.
typedef struct naoqi_bridge_msgs__action__FollowPath_Result__Sequence
{
  naoqi_bridge_msgs__action__FollowPath_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} naoqi_bridge_msgs__action__FollowPath_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/FollowPath in the package naoqi_bridge_msgs.
typedef struct naoqi_bridge_msgs__action__FollowPath_Feedback
{
  uint32_t index;
} naoqi_bridge_msgs__action__FollowPath_Feedback;

// Struct for a sequence of naoqi_bridge_msgs__action__FollowPath_Feedback.
typedef struct naoqi_bridge_msgs__action__FollowPath_Feedback__Sequence
{
  naoqi_bridge_msgs__action__FollowPath_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} naoqi_bridge_msgs__action__FollowPath_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "naoqi_bridge_msgs/action/detail/follow_path__struct.h"

/// Struct defined in action/FollowPath in the package naoqi_bridge_msgs.
typedef struct naoqi_bridge_msgs__action__FollowPath_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  naoqi_bridge_msgs__action__FollowPath_Goal goal;
} naoqi_bridge_msgs__action__FollowPath_SendGoal_Request;

// Struct for a sequence of naoqi_bridge_msgs__action__FollowPath_SendGoal_Request.
typedef struct naoqi_bridge_msgs__action__FollowPath_SendGoal_Request__Sequence
{
  naoqi_bridge_msgs__action__FollowPath_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} naoqi_bridge_msgs__action__FollowPath_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/FollowPath in the package naoqi_bridge_msgs.
typedef struct naoqi_bridge_msgs__action__FollowPath_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} naoqi_bridge_msgs__action__FollowPath_SendGoal_Response;

// Struct for a sequence of naoqi_bridge_msgs__action__FollowPath_SendGoal_Response.
typedef struct naoqi_bridge_msgs__action__FollowPath_SendGoal_Response__Sequence
{
  naoqi_bridge_msgs__action__FollowPath_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} naoqi_bridge_msgs__action__FollowPath_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/FollowPath in the package naoqi_bridge_msgs.
typedef struct naoqi_bridge_msgs__action__FollowPath_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} naoqi_bridge_msgs__action__FollowPath_GetResult_Request;

// Struct for a sequence of naoqi_bridge_msgs__action__FollowPath_GetResult_Request.
typedef struct naoqi_bridge_msgs__action__FollowPath_GetResult_Request__Sequence
{
  naoqi_bridge_msgs__action__FollowPath_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} naoqi_bridge_msgs__action__FollowPath_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "naoqi_bridge_msgs/action/detail/follow_path__struct.h"

/// Struct defined in action/FollowPath in the package naoqi_bridge_msgs.
typedef struct naoqi_bridge_msgs__action__FollowPath_GetResult_Response
{
  int8_t status;
  naoqi_bridge_msgs__action__FollowPath_Result result;
} naoqi_bridge_msgs__action__FollowPath_GetResult_Response;

// Struct for a sequence of naoqi_bridge_msgs__action__FollowPath_GetResult_Response.
typedef struct naoqi_bridge_msgs__action__FollowPath_GetResult_Response__Sequence
{
  naoqi_bridge_msgs__action__FollowPath_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} naoqi_bridge_msgs__action__FollowPath_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "naoqi_bridge_msgs/action/detail/follow_path__struct.h"

/// Struct defined in action/FollowPath in the package naoqi_bridge_msgs.
typedef struct naoqi_bridge_msgs__action__FollowPath_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  naoqi_bridge_msgs__action__FollowPath_Feedback feedback;
} naoqi_bridge_msgs__action__FollowPath_FeedbackMessage;

// Struct for a sequence of naoqi_bridge_msgs__action__FollowPath_FeedbackMessage.
typedef struct naoqi_bridge_msgs__action__FollowPath_FeedbackMessage__Sequence
{
  naoqi_bridge_msgs__action__FollowPath_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} naoqi_bridge_msgs__action__FollowPath_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAOQI_BRIDGE_MSGS__ACTION__DETAIL__FOLLOW_PATH__STRUCT_H_
