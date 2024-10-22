// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from naoqi_bridge_msgs:msg/RobotInfo.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__MSG__DETAIL__ROBOT_INFO__STRUCT_H_
#define NAOQI_BRIDGE_MSGS__MSG__DETAIL__ROBOT_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NAO'.
/**
  * enums describing the robot type
 */
enum
{
  naoqi_bridge_msgs__msg__RobotInfo__NAO = 0
};

/// Constant 'ROMEO'.
enum
{
  naoqi_bridge_msgs__msg__RobotInfo__ROMEO = 1
};

/// Constant 'PEPPER'.
enum
{
  naoqi_bridge_msgs__msg__RobotInfo__PEPPER = 2
};

// Include directives for member types
// Member 'model'
// Member 'head_version'
// Member 'body_version'
// Member 'arm_version'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/RobotInfo in the package naoqi_bridge_msgs.
/**
  * info here is inspired by http://doc.aldebaran.com/2-1/naoqi/motion/tools-general-api.html?highlight=getrobotconfig#ALMotionProxy::getRobotConfig
 */
typedef struct naoqi_bridge_msgs__msg__RobotInfo
{
  /// one of NAO, ROMEO, PEPPER
  uint8_t type;
  /// "Model Type"   : "naoH25", "naoH21", "naoT14" or "naoT2".
  rosidl_runtime_c__String model;
  /// "Head Version" : "VERSION_32" or "VERSION_33" or "VERSION_40".
  rosidl_runtime_c__String head_version;
  /// "Body Version" : "VERSION_32" or "VERSION_33" or "VERSION_40".
  rosidl_runtime_c__String body_version;
  /// "Arm Version"  : "VERSION_32" or "VERSION_33" or "VERSION_40".
  rosidl_runtime_c__String arm_version;
  /// "Laser"        : True or False.
  bool has_laser;
  /// "Extended Arms": True or False.
  bool has_extended_arms;
  /// Number of Legs : 0 or 2
  int32_t number_of_legs;
  /// Number of Arms : 0 or 2
  int32_t number_of_arms;
  /// Number of Hands: 0 or 2
  int32_t number_of_hands;
} naoqi_bridge_msgs__msg__RobotInfo;

// Struct for a sequence of naoqi_bridge_msgs__msg__RobotInfo.
typedef struct naoqi_bridge_msgs__msg__RobotInfo__Sequence
{
  naoqi_bridge_msgs__msg__RobotInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} naoqi_bridge_msgs__msg__RobotInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAOQI_BRIDGE_MSGS__MSG__DETAIL__ROBOT_INFO__STRUCT_H_
