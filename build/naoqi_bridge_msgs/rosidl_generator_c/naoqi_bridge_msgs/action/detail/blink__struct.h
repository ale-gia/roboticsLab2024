// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from naoqi_bridge_msgs:action/Blink.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__ACTION__DETAIL__BLINK__STRUCT_H_
#define NAOQI_BRIDGE_MSGS__ACTION__DETAIL__BLINK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'colors'
// Member 'bg_color'
#include "std_msgs/msg/detail/color_rgba__struct.h"
// Member 'blink_duration'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in action/Blink in the package naoqi_bridge_msgs.
typedef struct naoqi_bridge_msgs__action__Blink_Goal
{
  std_msgs__msg__ColorRGBA__Sequence colors;
  std_msgs__msg__ColorRGBA bg_color;
  builtin_interfaces__msg__Duration blink_duration;
  float blink_rate_mean;
  float blink_rate_sd;
} naoqi_bridge_msgs__action__Blink_Goal;

// Struct for a sequence of naoqi_bridge_msgs__action__Blink_Goal.
typedef struct naoqi_bridge_msgs__action__Blink_Goal__Sequence
{
  naoqi_bridge_msgs__action__Blink_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} naoqi_bridge_msgs__action__Blink_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/Blink in the package naoqi_bridge_msgs.
typedef struct naoqi_bridge_msgs__action__Blink_Result
{
  bool still_blinking;
} naoqi_bridge_msgs__action__Blink_Result;

// Struct for a sequence of naoqi_bridge_msgs__action__Blink_Result.
typedef struct naoqi_bridge_msgs__action__Blink_Result__Sequence
{
  naoqi_bridge_msgs__action__Blink_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} naoqi_bridge_msgs__action__Blink_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'last_color'
// already included above
// #include "std_msgs/msg/detail/color_rgba__struct.h"

/// Struct defined in action/Blink in the package naoqi_bridge_msgs.
typedef struct naoqi_bridge_msgs__action__Blink_Feedback
{
  std_msgs__msg__ColorRGBA last_color;
} naoqi_bridge_msgs__action__Blink_Feedback;

// Struct for a sequence of naoqi_bridge_msgs__action__Blink_Feedback.
typedef struct naoqi_bridge_msgs__action__Blink_Feedback__Sequence
{
  naoqi_bridge_msgs__action__Blink_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} naoqi_bridge_msgs__action__Blink_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "naoqi_bridge_msgs/action/detail/blink__struct.h"

/// Struct defined in action/Blink in the package naoqi_bridge_msgs.
typedef struct naoqi_bridge_msgs__action__Blink_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  naoqi_bridge_msgs__action__Blink_Goal goal;
} naoqi_bridge_msgs__action__Blink_SendGoal_Request;

// Struct for a sequence of naoqi_bridge_msgs__action__Blink_SendGoal_Request.
typedef struct naoqi_bridge_msgs__action__Blink_SendGoal_Request__Sequence
{
  naoqi_bridge_msgs__action__Blink_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} naoqi_bridge_msgs__action__Blink_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Blink in the package naoqi_bridge_msgs.
typedef struct naoqi_bridge_msgs__action__Blink_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} naoqi_bridge_msgs__action__Blink_SendGoal_Response;

// Struct for a sequence of naoqi_bridge_msgs__action__Blink_SendGoal_Response.
typedef struct naoqi_bridge_msgs__action__Blink_SendGoal_Response__Sequence
{
  naoqi_bridge_msgs__action__Blink_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} naoqi_bridge_msgs__action__Blink_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Blink in the package naoqi_bridge_msgs.
typedef struct naoqi_bridge_msgs__action__Blink_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} naoqi_bridge_msgs__action__Blink_GetResult_Request;

// Struct for a sequence of naoqi_bridge_msgs__action__Blink_GetResult_Request.
typedef struct naoqi_bridge_msgs__action__Blink_GetResult_Request__Sequence
{
  naoqi_bridge_msgs__action__Blink_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} naoqi_bridge_msgs__action__Blink_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "naoqi_bridge_msgs/action/detail/blink__struct.h"

/// Struct defined in action/Blink in the package naoqi_bridge_msgs.
typedef struct naoqi_bridge_msgs__action__Blink_GetResult_Response
{
  int8_t status;
  naoqi_bridge_msgs__action__Blink_Result result;
} naoqi_bridge_msgs__action__Blink_GetResult_Response;

// Struct for a sequence of naoqi_bridge_msgs__action__Blink_GetResult_Response.
typedef struct naoqi_bridge_msgs__action__Blink_GetResult_Response__Sequence
{
  naoqi_bridge_msgs__action__Blink_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} naoqi_bridge_msgs__action__Blink_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "naoqi_bridge_msgs/action/detail/blink__struct.h"

/// Struct defined in action/Blink in the package naoqi_bridge_msgs.
typedef struct naoqi_bridge_msgs__action__Blink_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  naoqi_bridge_msgs__action__Blink_Feedback feedback;
} naoqi_bridge_msgs__action__Blink_FeedbackMessage;

// Struct for a sequence of naoqi_bridge_msgs__action__Blink_FeedbackMessage.
typedef struct naoqi_bridge_msgs__action__Blink_FeedbackMessage__Sequence
{
  naoqi_bridge_msgs__action__Blink_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} naoqi_bridge_msgs__action__Blink_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAOQI_BRIDGE_MSGS__ACTION__DETAIL__BLINK__STRUCT_H_
