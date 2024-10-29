// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from naoqi_bridge_msgs:action/Listen.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__ACTION__DETAIL__LISTEN__STRUCT_H_
#define NAOQI_BRIDGE_MSGS__ACTION__DETAIL__LISTEN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'expected'
// Member 'language'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/Listen in the package naoqi_bridge_msgs.
typedef struct naoqi_bridge_msgs__action__Listen_Goal
{
  /// Set of strings that are expected to be heard.
  /// Used to pre-configure the speech recognition.
  /// Can be left empty.
  rosidl_runtime_c__String__Sequence expected;
  /// The language in which to listen.
  /// If empty, the current language is used.
  rosidl_runtime_c__String language;
} naoqi_bridge_msgs__action__Listen_Goal;

// Struct for a sequence of naoqi_bridge_msgs__action__Listen_Goal.
typedef struct naoqi_bridge_msgs__action__Listen_Goal__Sequence
{
  naoqi_bridge_msgs__action__Listen_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} naoqi_bridge_msgs__action__Listen_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/Listen in the package naoqi_bridge_msgs.
typedef struct naoqi_bridge_msgs__action__Listen_Result
{
  rosidl_runtime_c__String__Sequence result;
} naoqi_bridge_msgs__action__Listen_Result;

// Struct for a sequence of naoqi_bridge_msgs__action__Listen_Result.
typedef struct naoqi_bridge_msgs__action__Listen_Result__Sequence
{
  naoqi_bridge_msgs__action__Listen_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} naoqi_bridge_msgs__action__Listen_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'partial_result'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/Listen in the package naoqi_bridge_msgs.
typedef struct naoqi_bridge_msgs__action__Listen_Feedback
{
  rosidl_runtime_c__String__Sequence partial_result;
} naoqi_bridge_msgs__action__Listen_Feedback;

// Struct for a sequence of naoqi_bridge_msgs__action__Listen_Feedback.
typedef struct naoqi_bridge_msgs__action__Listen_Feedback__Sequence
{
  naoqi_bridge_msgs__action__Listen_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} naoqi_bridge_msgs__action__Listen_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "naoqi_bridge_msgs/action/detail/listen__struct.h"

/// Struct defined in action/Listen in the package naoqi_bridge_msgs.
typedef struct naoqi_bridge_msgs__action__Listen_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  naoqi_bridge_msgs__action__Listen_Goal goal;
} naoqi_bridge_msgs__action__Listen_SendGoal_Request;

// Struct for a sequence of naoqi_bridge_msgs__action__Listen_SendGoal_Request.
typedef struct naoqi_bridge_msgs__action__Listen_SendGoal_Request__Sequence
{
  naoqi_bridge_msgs__action__Listen_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} naoqi_bridge_msgs__action__Listen_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Listen in the package naoqi_bridge_msgs.
typedef struct naoqi_bridge_msgs__action__Listen_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} naoqi_bridge_msgs__action__Listen_SendGoal_Response;

// Struct for a sequence of naoqi_bridge_msgs__action__Listen_SendGoal_Response.
typedef struct naoqi_bridge_msgs__action__Listen_SendGoal_Response__Sequence
{
  naoqi_bridge_msgs__action__Listen_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} naoqi_bridge_msgs__action__Listen_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Listen in the package naoqi_bridge_msgs.
typedef struct naoqi_bridge_msgs__action__Listen_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} naoqi_bridge_msgs__action__Listen_GetResult_Request;

// Struct for a sequence of naoqi_bridge_msgs__action__Listen_GetResult_Request.
typedef struct naoqi_bridge_msgs__action__Listen_GetResult_Request__Sequence
{
  naoqi_bridge_msgs__action__Listen_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} naoqi_bridge_msgs__action__Listen_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "naoqi_bridge_msgs/action/detail/listen__struct.h"

/// Struct defined in action/Listen in the package naoqi_bridge_msgs.
typedef struct naoqi_bridge_msgs__action__Listen_GetResult_Response
{
  int8_t status;
  naoqi_bridge_msgs__action__Listen_Result result;
} naoqi_bridge_msgs__action__Listen_GetResult_Response;

// Struct for a sequence of naoqi_bridge_msgs__action__Listen_GetResult_Response.
typedef struct naoqi_bridge_msgs__action__Listen_GetResult_Response__Sequence
{
  naoqi_bridge_msgs__action__Listen_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} naoqi_bridge_msgs__action__Listen_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "naoqi_bridge_msgs/action/detail/listen__struct.h"

/// Struct defined in action/Listen in the package naoqi_bridge_msgs.
typedef struct naoqi_bridge_msgs__action__Listen_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  naoqi_bridge_msgs__action__Listen_Feedback feedback;
} naoqi_bridge_msgs__action__Listen_FeedbackMessage;

// Struct for a sequence of naoqi_bridge_msgs__action__Listen_FeedbackMessage.
typedef struct naoqi_bridge_msgs__action__Listen_FeedbackMessage__Sequence
{
  naoqi_bridge_msgs__action__Listen_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} naoqi_bridge_msgs__action__Listen_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAOQI_BRIDGE_MSGS__ACTION__DETAIL__LISTEN__STRUCT_H_
