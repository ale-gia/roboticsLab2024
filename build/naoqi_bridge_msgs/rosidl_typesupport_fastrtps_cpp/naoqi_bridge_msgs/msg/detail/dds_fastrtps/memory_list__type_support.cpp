// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from naoqi_bridge_msgs:msg/MemoryList.idl
// generated code does not contain a copyright notice
#include "naoqi_bridge_msgs/msg/detail/memory_list__rosidl_typesupport_fastrtps_cpp.hpp"
#include "naoqi_bridge_msgs/msg/detail/memory_list__struct.hpp"

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
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs

namespace naoqi_bridge_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const naoqi_bridge_msgs::msg::MemoryPairString &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  naoqi_bridge_msgs::msg::MemoryPairString &);
size_t get_serialized_size(
  const naoqi_bridge_msgs::msg::MemoryPairString &,
  size_t current_alignment);
size_t
max_serialized_size_MemoryPairString(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace naoqi_bridge_msgs

namespace naoqi_bridge_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const naoqi_bridge_msgs::msg::MemoryPairInt &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  naoqi_bridge_msgs::msg::MemoryPairInt &);
size_t get_serialized_size(
  const naoqi_bridge_msgs::msg::MemoryPairInt &,
  size_t current_alignment);
size_t
max_serialized_size_MemoryPairInt(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace naoqi_bridge_msgs

namespace naoqi_bridge_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const naoqi_bridge_msgs::msg::MemoryPairFloat &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  naoqi_bridge_msgs::msg::MemoryPairFloat &);
size_t get_serialized_size(
  const naoqi_bridge_msgs::msg::MemoryPairFloat &,
  size_t current_alignment);
size_t
max_serialized_size_MemoryPairFloat(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace naoqi_bridge_msgs


namespace naoqi_bridge_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_naoqi_bridge_msgs
cdr_serialize(
  const naoqi_bridge_msgs::msg::MemoryList & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: strings
  {
    size_t size = ros_message.strings.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      naoqi_bridge_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.strings[i],
        cdr);
    }
  }
  // Member: ints
  {
    size_t size = ros_message.ints.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      naoqi_bridge_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.ints[i],
        cdr);
    }
  }
  // Member: floats
  {
    size_t size = ros_message.floats.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      naoqi_bridge_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.floats[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_naoqi_bridge_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  naoqi_bridge_msgs::msg::MemoryList & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: strings
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.strings.resize(size);
    for (size_t i = 0; i < size; i++) {
      naoqi_bridge_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.strings[i]);
    }
  }

  // Member: ints
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.ints.resize(size);
    for (size_t i = 0; i < size; i++) {
      naoqi_bridge_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.ints[i]);
    }
  }

  // Member: floats
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.floats.resize(size);
    for (size_t i = 0; i < size; i++) {
      naoqi_bridge_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.floats[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_naoqi_bridge_msgs
get_serialized_size(
  const naoqi_bridge_msgs::msg::MemoryList & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: strings
  {
    size_t array_size = ros_message.strings.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        naoqi_bridge_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.strings[index], current_alignment);
    }
  }
  // Member: ints
  {
    size_t array_size = ros_message.ints.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        naoqi_bridge_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.ints[index], current_alignment);
    }
  }
  // Member: floats
  {
    size_t array_size = ros_message.floats.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        naoqi_bridge_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.floats[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_naoqi_bridge_msgs
max_serialized_size_MemoryList(
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


  // Member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: strings
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        naoqi_bridge_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_MemoryPairString(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: ints
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        naoqi_bridge_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_MemoryPairInt(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: floats
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        naoqi_bridge_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_MemoryPairFloat(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = naoqi_bridge_msgs::msg::MemoryList;
    is_plain =
      (
      offsetof(DataType, floats) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _MemoryList__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const naoqi_bridge_msgs::msg::MemoryList *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MemoryList__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<naoqi_bridge_msgs::msg::MemoryList *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MemoryList__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const naoqi_bridge_msgs::msg::MemoryList *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MemoryList__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MemoryList(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MemoryList__callbacks = {
  "naoqi_bridge_msgs::msg",
  "MemoryList",
  _MemoryList__cdr_serialize,
  _MemoryList__cdr_deserialize,
  _MemoryList__get_serialized_size,
  _MemoryList__max_serialized_size
};

static rosidl_message_type_support_t _MemoryList__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MemoryList__callbacks,
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
get_message_type_support_handle<naoqi_bridge_msgs::msg::MemoryList>()
{
  return &naoqi_bridge_msgs::msg::typesupport_fastrtps_cpp::_MemoryList__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, naoqi_bridge_msgs, msg, MemoryList)() {
  return &naoqi_bridge_msgs::msg::typesupport_fastrtps_cpp::_MemoryList__handle;
}

#ifdef __cplusplus
}
#endif
