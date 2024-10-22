// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from naoqi_bridge_msgs:msg/RobotInfo.idl
// generated code does not contain a copyright notice
#include "naoqi_bridge_msgs/msg/detail/robot_info__rosidl_typesupport_fastrtps_cpp.hpp"
#include "naoqi_bridge_msgs/msg/detail/robot_info__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace naoqi_bridge_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_naoqi_bridge_msgs
cdr_serialize(
  const naoqi_bridge_msgs::msg::RobotInfo & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: type
  cdr << ros_message.type;
  // Member: model
  cdr << ros_message.model;
  // Member: head_version
  cdr << ros_message.head_version;
  // Member: body_version
  cdr << ros_message.body_version;
  // Member: arm_version
  cdr << ros_message.arm_version;
  // Member: has_laser
  cdr << (ros_message.has_laser ? true : false);
  // Member: has_extended_arms
  cdr << (ros_message.has_extended_arms ? true : false);
  // Member: number_of_legs
  cdr << ros_message.number_of_legs;
  // Member: number_of_arms
  cdr << ros_message.number_of_arms;
  // Member: number_of_hands
  cdr << ros_message.number_of_hands;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_naoqi_bridge_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  naoqi_bridge_msgs::msg::RobotInfo & ros_message)
{
  // Member: type
  cdr >> ros_message.type;

  // Member: model
  cdr >> ros_message.model;

  // Member: head_version
  cdr >> ros_message.head_version;

  // Member: body_version
  cdr >> ros_message.body_version;

  // Member: arm_version
  cdr >> ros_message.arm_version;

  // Member: has_laser
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.has_laser = tmp ? true : false;
  }

  // Member: has_extended_arms
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.has_extended_arms = tmp ? true : false;
  }

  // Member: number_of_legs
  cdr >> ros_message.number_of_legs;

  // Member: number_of_arms
  cdr >> ros_message.number_of_arms;

  // Member: number_of_hands
  cdr >> ros_message.number_of_hands;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_naoqi_bridge_msgs
get_serialized_size(
  const naoqi_bridge_msgs::msg::RobotInfo & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: type
  {
    size_t item_size = sizeof(ros_message.type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: model
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.model.size() + 1);
  // Member: head_version
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.head_version.size() + 1);
  // Member: body_version
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.body_version.size() + 1);
  // Member: arm_version
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.arm_version.size() + 1);
  // Member: has_laser
  {
    size_t item_size = sizeof(ros_message.has_laser);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: has_extended_arms
  {
    size_t item_size = sizeof(ros_message.has_extended_arms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: number_of_legs
  {
    size_t item_size = sizeof(ros_message.number_of_legs);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: number_of_arms
  {
    size_t item_size = sizeof(ros_message.number_of_arms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: number_of_hands
  {
    size_t item_size = sizeof(ros_message.number_of_hands);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_naoqi_bridge_msgs
max_serialized_size_RobotInfo(
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


  // Member: type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: model
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

  // Member: head_version
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

  // Member: body_version
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

  // Member: arm_version
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

  // Member: has_laser
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: has_extended_arms
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: number_of_legs
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: number_of_arms
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: number_of_hands
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
    using DataType = naoqi_bridge_msgs::msg::RobotInfo;
    is_plain =
      (
      offsetof(DataType, number_of_hands) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _RobotInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const naoqi_bridge_msgs::msg::RobotInfo *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RobotInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<naoqi_bridge_msgs::msg::RobotInfo *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RobotInfo__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const naoqi_bridge_msgs::msg::RobotInfo *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RobotInfo__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_RobotInfo(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _RobotInfo__callbacks = {
  "naoqi_bridge_msgs::msg",
  "RobotInfo",
  _RobotInfo__cdr_serialize,
  _RobotInfo__cdr_deserialize,
  _RobotInfo__get_serialized_size,
  _RobotInfo__max_serialized_size
};

static rosidl_message_type_support_t _RobotInfo__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RobotInfo__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace naoqi_bridge_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_naoqi_bridge_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<naoqi_bridge_msgs::msg::RobotInfo>()
{
  return &naoqi_bridge_msgs::msg::typesupport_fastrtps_cpp::_RobotInfo__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, naoqi_bridge_msgs, msg, RobotInfo)() {
  return &naoqi_bridge_msgs::msg::typesupport_fastrtps_cpp::_RobotInfo__handle;
}

#ifdef __cplusplus
}
#endif
