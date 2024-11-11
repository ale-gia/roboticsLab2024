// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from qi_unipa_msgs:msg/Sonar.idl
// generated code does not contain a copyright notice
#include "qi_unipa_msgs/msg/detail/sonar__rosidl_typesupport_fastrtps_cpp.hpp"
#include "qi_unipa_msgs/msg/detail/sonar__struct.hpp"

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

namespace qi_unipa_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_qi_unipa_msgs
cdr_serialize(
  const qi_unipa_msgs::msg::Sonar & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: front_sonar
  cdr << ros_message.front_sonar;
  // Member: back_sonar
  cdr << ros_message.back_sonar;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_qi_unipa_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  qi_unipa_msgs::msg::Sonar & ros_message)
{
  // Member: front_sonar
  cdr >> ros_message.front_sonar;

  // Member: back_sonar
  cdr >> ros_message.back_sonar;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_qi_unipa_msgs
get_serialized_size(
  const qi_unipa_msgs::msg::Sonar & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: front_sonar
  {
    size_t item_size = sizeof(ros_message.front_sonar);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: back_sonar
  {
    size_t item_size = sizeof(ros_message.back_sonar);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_qi_unipa_msgs
max_serialized_size_Sonar(
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


  // Member: front_sonar
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: back_sonar
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
    using DataType = qi_unipa_msgs::msg::Sonar;
    is_plain =
      (
      offsetof(DataType, back_sonar) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Sonar__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const qi_unipa_msgs::msg::Sonar *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Sonar__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<qi_unipa_msgs::msg::Sonar *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Sonar__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const qi_unipa_msgs::msg::Sonar *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Sonar__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Sonar(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Sonar__callbacks = {
  "qi_unipa_msgs::msg",
  "Sonar",
  _Sonar__cdr_serialize,
  _Sonar__cdr_deserialize,
  _Sonar__get_serialized_size,
  _Sonar__max_serialized_size
};

static rosidl_message_type_support_t _Sonar__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Sonar__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace qi_unipa_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_qi_unipa_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<qi_unipa_msgs::msg::Sonar>()
{
  return &qi_unipa_msgs::msg::typesupport_fastrtps_cpp::_Sonar__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, qi_unipa_msgs, msg, Sonar)() {
  return &qi_unipa_msgs::msg::typesupport_fastrtps_cpp::_Sonar__handle;
}

#ifdef __cplusplus
}
#endif
