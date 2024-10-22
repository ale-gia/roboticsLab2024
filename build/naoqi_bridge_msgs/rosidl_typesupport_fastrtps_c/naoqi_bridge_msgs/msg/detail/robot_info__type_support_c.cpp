// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from naoqi_bridge_msgs:msg/RobotInfo.idl
// generated code does not contain a copyright notice
#include "naoqi_bridge_msgs/msg/detail/robot_info__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "naoqi_bridge_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "naoqi_bridge_msgs/msg/detail/robot_info__struct.h"
#include "naoqi_bridge_msgs/msg/detail/robot_info__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // arm_version, body_version, head_version, model
#include "rosidl_runtime_c/string_functions.h"  // arm_version, body_version, head_version, model

// forward declare type support functions


using _RobotInfo__ros_msg_type = naoqi_bridge_msgs__msg__RobotInfo;

static bool _RobotInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RobotInfo__ros_msg_type * ros_message = static_cast<const _RobotInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: type
  {
    cdr << ros_message->type;
  }

  // Field name: model
  {
    const rosidl_runtime_c__String * str = &ros_message->model;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: head_version
  {
    const rosidl_runtime_c__String * str = &ros_message->head_version;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: body_version
  {
    const rosidl_runtime_c__String * str = &ros_message->body_version;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: arm_version
  {
    const rosidl_runtime_c__String * str = &ros_message->arm_version;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: has_laser
  {
    cdr << (ros_message->has_laser ? true : false);
  }

  // Field name: has_extended_arms
  {
    cdr << (ros_message->has_extended_arms ? true : false);
  }

  // Field name: number_of_legs
  {
    cdr << ros_message->number_of_legs;
  }

  // Field name: number_of_arms
  {
    cdr << ros_message->number_of_arms;
  }

  // Field name: number_of_hands
  {
    cdr << ros_message->number_of_hands;
  }

  return true;
}

static bool _RobotInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RobotInfo__ros_msg_type * ros_message = static_cast<_RobotInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: type
  {
    cdr >> ros_message->type;
  }

  // Field name: model
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->model.data) {
      rosidl_runtime_c__String__init(&ros_message->model);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->model,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'model'\n");
      return false;
    }
  }

  // Field name: head_version
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->head_version.data) {
      rosidl_runtime_c__String__init(&ros_message->head_version);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->head_version,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'head_version'\n");
      return false;
    }
  }

  // Field name: body_version
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->body_version.data) {
      rosidl_runtime_c__String__init(&ros_message->body_version);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->body_version,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'body_version'\n");
      return false;
    }
  }

  // Field name: arm_version
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->arm_version.data) {
      rosidl_runtime_c__String__init(&ros_message->arm_version);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->arm_version,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'arm_version'\n");
      return false;
    }
  }

  // Field name: has_laser
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->has_laser = tmp ? true : false;
  }

  // Field name: has_extended_arms
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->has_extended_arms = tmp ? true : false;
  }

  // Field name: number_of_legs
  {
    cdr >> ros_message->number_of_legs;
  }

  // Field name: number_of_arms
  {
    cdr >> ros_message->number_of_arms;
  }

  // Field name: number_of_hands
  {
    cdr >> ros_message->number_of_hands;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_naoqi_bridge_msgs
size_t get_serialized_size_naoqi_bridge_msgs__msg__RobotInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RobotInfo__ros_msg_type * ros_message = static_cast<const _RobotInfo__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name type
  {
    size_t item_size = sizeof(ros_message->type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name model
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->model.size + 1);
  // field.name head_version
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->head_version.size + 1);
  // field.name body_version
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->body_version.size + 1);
  // field.name arm_version
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->arm_version.size + 1);
  // field.name has_laser
  {
    size_t item_size = sizeof(ros_message->has_laser);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name has_extended_arms
  {
    size_t item_size = sizeof(ros_message->has_extended_arms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name number_of_legs
  {
    size_t item_size = sizeof(ros_message->number_of_legs);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name number_of_arms
  {
    size_t item_size = sizeof(ros_message->number_of_arms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name number_of_hands
  {
    size_t item_size = sizeof(ros_message->number_of_hands);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RobotInfo__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_naoqi_bridge_msgs__msg__RobotInfo(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_naoqi_bridge_msgs
size_t max_serialized_size_naoqi_bridge_msgs__msg__RobotInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: model
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: head_version
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: body_version
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: arm_version
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: has_laser
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: has_extended_arms
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: number_of_legs
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: number_of_arms
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: number_of_hands
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = naoqi_bridge_msgs__msg__RobotInfo;
    is_plain =
      (
      offsetof(DataType, number_of_hands) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _RobotInfo__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_naoqi_bridge_msgs__msg__RobotInfo(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RobotInfo = {
  "naoqi_bridge_msgs::msg",
  "RobotInfo",
  _RobotInfo__cdr_serialize,
  _RobotInfo__cdr_deserialize,
  _RobotInfo__get_serialized_size,
  _RobotInfo__max_serialized_size
};

static rosidl_message_type_support_t _RobotInfo__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RobotInfo,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, naoqi_bridge_msgs, msg, RobotInfo)() {
  return &_RobotInfo__type_support;
}

#if defined(__cplusplus)
}
#endif
