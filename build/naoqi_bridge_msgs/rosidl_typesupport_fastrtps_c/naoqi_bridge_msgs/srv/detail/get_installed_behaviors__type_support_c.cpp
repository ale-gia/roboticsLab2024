// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from naoqi_bridge_msgs:srv/GetInstalledBehaviors.idl
// generated code does not contain a copyright notice
#include "naoqi_bridge_msgs/srv/detail/get_installed_behaviors__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "naoqi_bridge_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "naoqi_bridge_msgs/srv/detail/get_installed_behaviors__struct.h"
#include "naoqi_bridge_msgs/srv/detail/get_installed_behaviors__functions.h"
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


// forward declare type support functions


using _GetInstalledBehaviors_Request__ros_msg_type = naoqi_bridge_msgs__srv__GetInstalledBehaviors_Request;

static bool _GetInstalledBehaviors_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetInstalledBehaviors_Request__ros_msg_type * ros_message = static_cast<const _GetInstalledBehaviors_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _GetInstalledBehaviors_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetInstalledBehaviors_Request__ros_msg_type * ros_message = static_cast<_GetInstalledBehaviors_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_naoqi_bridge_msgs
size_t get_serialized_size_naoqi_bridge_msgs__srv__GetInstalledBehaviors_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetInstalledBehaviors_Request__ros_msg_type * ros_message = static_cast<const _GetInstalledBehaviors_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetInstalledBehaviors_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_naoqi_bridge_msgs__srv__GetInstalledBehaviors_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_naoqi_bridge_msgs
size_t max_serialized_size_naoqi_bridge_msgs__srv__GetInstalledBehaviors_Request(
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

  // member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = naoqi_bridge_msgs__srv__GetInstalledBehaviors_Request;
    is_plain =
      (
      offsetof(DataType, structure_needs_at_least_one_member) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GetInstalledBehaviors_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_naoqi_bridge_msgs__srv__GetInstalledBehaviors_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetInstalledBehaviors_Request = {
  "naoqi_bridge_msgs::srv",
  "GetInstalledBehaviors_Request",
  _GetInstalledBehaviors_Request__cdr_serialize,
  _GetInstalledBehaviors_Request__cdr_deserialize,
  _GetInstalledBehaviors_Request__get_serialized_size,
  _GetInstalledBehaviors_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetInstalledBehaviors_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetInstalledBehaviors_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, naoqi_bridge_msgs, srv, GetInstalledBehaviors_Request)() {
  return &_GetInstalledBehaviors_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "naoqi_bridge_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "naoqi_bridge_msgs/srv/detail/get_installed_behaviors__struct.h"
// already included above
// #include "naoqi_bridge_msgs/srv/detail/get_installed_behaviors__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

#include "rosidl_runtime_c/string.h"  // behaviors
#include "rosidl_runtime_c/string_functions.h"  // behaviors

// forward declare type support functions


using _GetInstalledBehaviors_Response__ros_msg_type = naoqi_bridge_msgs__srv__GetInstalledBehaviors_Response;

static bool _GetInstalledBehaviors_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetInstalledBehaviors_Response__ros_msg_type * ros_message = static_cast<const _GetInstalledBehaviors_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: behaviors
  {
    size_t size = ros_message->behaviors.size;
    auto array_ptr = ros_message->behaviors.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  return true;
}

static bool _GetInstalledBehaviors_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetInstalledBehaviors_Response__ros_msg_type * ros_message = static_cast<_GetInstalledBehaviors_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: behaviors
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->behaviors.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->behaviors);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->behaviors, size)) {
      fprintf(stderr, "failed to create array for field 'behaviors'");
      return false;
    }
    auto array_ptr = ros_message->behaviors.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'behaviors'\n");
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_naoqi_bridge_msgs
size_t get_serialized_size_naoqi_bridge_msgs__srv__GetInstalledBehaviors_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetInstalledBehaviors_Response__ros_msg_type * ros_message = static_cast<const _GetInstalledBehaviors_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name behaviors
  {
    size_t array_size = ros_message->behaviors.size;
    auto array_ptr = ros_message->behaviors.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetInstalledBehaviors_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_naoqi_bridge_msgs__srv__GetInstalledBehaviors_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_naoqi_bridge_msgs
size_t max_serialized_size_naoqi_bridge_msgs__srv__GetInstalledBehaviors_Response(
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

  // member: behaviors
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = naoqi_bridge_msgs__srv__GetInstalledBehaviors_Response;
    is_plain =
      (
      offsetof(DataType, behaviors) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GetInstalledBehaviors_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_naoqi_bridge_msgs__srv__GetInstalledBehaviors_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetInstalledBehaviors_Response = {
  "naoqi_bridge_msgs::srv",
  "GetInstalledBehaviors_Response",
  _GetInstalledBehaviors_Response__cdr_serialize,
  _GetInstalledBehaviors_Response__cdr_deserialize,
  _GetInstalledBehaviors_Response__get_serialized_size,
  _GetInstalledBehaviors_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetInstalledBehaviors_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetInstalledBehaviors_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, naoqi_bridge_msgs, srv, GetInstalledBehaviors_Response)() {
  return &_GetInstalledBehaviors_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "naoqi_bridge_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "naoqi_bridge_msgs/srv/get_installed_behaviors.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetInstalledBehaviors__callbacks = {
  "naoqi_bridge_msgs::srv",
  "GetInstalledBehaviors",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, naoqi_bridge_msgs, srv, GetInstalledBehaviors_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, naoqi_bridge_msgs, srv, GetInstalledBehaviors_Response)(),
};

static rosidl_service_type_support_t GetInstalledBehaviors__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetInstalledBehaviors__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, naoqi_bridge_msgs, srv, GetInstalledBehaviors)() {
  return &GetInstalledBehaviors__handle;
}

#if defined(__cplusplus)
}
#endif
