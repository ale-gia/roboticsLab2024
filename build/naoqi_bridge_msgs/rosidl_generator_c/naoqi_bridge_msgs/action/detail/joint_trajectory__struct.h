// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from naoqi_bridge_msgs:action/JointTrajectory.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__ACTION__DETAIL__JOINT_TRAJECTORY__STRUCT_H_
#define NAOQI_BRIDGE_MSGS__ACTION__DETAIL__JOINT_TRAJECTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'trajectory'
#include "trajectory_msgs/msg/detail/joint_trajectory__struct.h"

/// Struct defined in action/JointTrajectory in the package naoqi_bridge_msgs.
typedef struct naoqi_bridge_msgs__action__JointTrajectory_Goal
{
  trajectory_msgs__msg__JointTrajectory trajectory;
  /// flag whether motion is absolute (=0, default) or relative (=1)
  uint8_t relative;
} naoqi_bridge_msgs__action__JointTrajectory_Goal;

// Struct for a sequence of naoqi_bridge_msgs__action__JointTrajectory_Goal.
typedef struct naoqi_bridge_msgs__action__JointTrajectory_Goal__Sequence
{
  naoqi_bridge_msgs__action__JointTrajectory_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} naoqi_bridge_msgs__action__JointTrajectory_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_position'
#include "sensor_msgs/msg/detail/joint_state__struct.h"

/// Struct defined in action/JointTrajectory in the package naoqi_bridge_msgs.
typedef struct naoqi_bridge_msgs__action__JointTrajectory_Result
{
  sensor_msgs__msg__JointState goal_position;
} naoqi_bridge_msgs__action__JointTrajectory_Result;

// Struct for a sequence of naoqi_bridge_msgs__action__JointTrajectory_Result.
typedef struct naoqi_bridge_msgs__action__JointTrajectory_Result__Sequence
{
  naoqi_bridge_msgs__action__JointTrajectory_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} naoqi_bridge_msgs__action__JointTrajectory_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/JointTrajectory in the package naoqi_bridge_msgs.
typedef struct naoqi_bridge_msgs__action__JointTrajectory_Feedback
{
  uint8_t structure_needs_at_least_one_member;
} naoqi_bridge_msgs__action__JointTrajectory_Feedback;

// Struct for a sequence of naoqi_bridge_msgs__action__JointTrajectory_Feedback.
typedef struct naoqi_bridge_msgs__action__JointTrajectory_Feedback__Sequence
{
  naoqi_bridge_msgs__action__JointTrajectory_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} naoqi_bridge_msgs__action__JointTrajectory_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "naoqi_bridge_msgs/action/detail/joint_trajectory__struct.h"

/// Struct defined in action/JointTrajectory in the package naoqi_bridge_msgs.
typedef struct naoqi_bridge_msgs__action__JointTrajectory_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  naoqi_bridge_msgs__action__JointTrajectory_Goal goal;
} naoqi_bridge_msgs__action__JointTrajectory_SendGoal_Request;

// Struct for a sequence of naoqi_bridge_msgs__action__JointTrajectory_SendGoal_Request.
typedef struct naoqi_bridge_msgs__action__JointTrajectory_SendGoal_Request__Sequence
{
  naoqi_bridge_msgs__action__JointTrajectory_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} naoqi_bridge_msgs__action__JointTrajectory_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/JointTrajectory in the package naoqi_bridge_msgs.
typedef struct naoqi_bridge_msgs__action__JointTrajectory_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} naoqi_bridge_msgs__action__JointTrajectory_SendGoal_Response;

// Struct for a sequence of naoqi_bridge_msgs__action__JointTrajectory_SendGoal_Response.
typedef struct naoqi_bridge_msgs__action__JointTrajectory_SendGoal_Response__Sequence
{
  naoqi_bridge_msgs__action__JointTrajectory_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} naoqi_bridge_msgs__action__JointTrajectory_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/JointTrajectory in the package naoqi_bridge_msgs.
typedef struct naoqi_bridge_msgs__action__JointTrajectory_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} naoqi_bridge_msgs__action__JointTrajectory_GetResult_Request;

// Struct for a sequence of naoqi_bridge_msgs__action__JointTrajectory_GetResult_Request.
typedef struct naoqi_bridge_msgs__action__JointTrajectory_GetResult_Request__Sequence
{
  naoqi_bridge_msgs__action__JointTrajectory_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} naoqi_bridge_msgs__action__JointTrajectory_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "naoqi_bridge_msgs/action/detail/joint_trajectory__struct.h"

/// Struct defined in action/JointTrajectory in the package naoqi_bridge_msgs.
typedef struct naoqi_bridge_msgs__action__JointTrajectory_GetResult_Response
{
  int8_t status;
  naoqi_bridge_msgs__action__JointTrajectory_Result result;
} naoqi_bridge_msgs__action__JointTrajectory_GetResult_Response;

// Struct for a sequence of naoqi_bridge_msgs__action__JointTrajectory_GetResult_Response.
typedef struct naoqi_bridge_msgs__action__JointTrajectory_GetResult_Response__Sequence
{
  naoqi_bridge_msgs__action__JointTrajectory_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} naoqi_bridge_msgs__action__JointTrajectory_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "naoqi_bridge_msgs/action/detail/joint_trajectory__struct.h"

/// Struct defined in action/JointTrajectory in the package naoqi_bridge_msgs.
typedef struct naoqi_bridge_msgs__action__JointTrajectory_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  naoqi_bridge_msgs__action__JointTrajectory_Feedback feedback;
} naoqi_bridge_msgs__action__JointTrajectory_FeedbackMessage;

// Struct for a sequence of naoqi_bridge_msgs__action__JointTrajectory_FeedbackMessage.
typedef struct naoqi_bridge_msgs__action__JointTrajectory_FeedbackMessage__Sequence
{
  naoqi_bridge_msgs__action__JointTrajectory_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} naoqi_bridge_msgs__action__JointTrajectory_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAOQI_BRIDGE_MSGS__ACTION__DETAIL__JOINT_TRAJECTORY__STRUCT_H_
