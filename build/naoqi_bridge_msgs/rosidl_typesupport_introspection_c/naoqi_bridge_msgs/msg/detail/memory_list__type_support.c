// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from naoqi_bridge_msgs:msg/MemoryList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "naoqi_bridge_msgs/msg/detail/memory_list__rosidl_typesupport_introspection_c.h"
#include "naoqi_bridge_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "naoqi_bridge_msgs/msg/detail/memory_list__functions.h"
#include "naoqi_bridge_msgs/msg/detail/memory_list__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `strings`
#include "naoqi_bridge_msgs/msg/memory_pair_string.h"
// Member `strings`
#include "naoqi_bridge_msgs/msg/detail/memory_pair_string__rosidl_typesupport_introspection_c.h"
// Member `ints`
#include "naoqi_bridge_msgs/msg/memory_pair_int.h"
// Member `ints`
#include "naoqi_bridge_msgs/msg/detail/memory_pair_int__rosidl_typesupport_introspection_c.h"
// Member `floats`
#include "naoqi_bridge_msgs/msg/memory_pair_float.h"
// Member `floats`
#include "naoqi_bridge_msgs/msg/detail/memory_pair_float__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void naoqi_bridge_msgs__msg__MemoryList__rosidl_typesupport_introspection_c__MemoryList_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  naoqi_bridge_msgs__msg__MemoryList__init(message_memory);
}

void naoqi_bridge_msgs__msg__MemoryList__rosidl_typesupport_introspection_c__MemoryList_fini_function(void * message_memory)
{
  naoqi_bridge_msgs__msg__MemoryList__fini(message_memory);
}

size_t naoqi_bridge_msgs__msg__MemoryList__rosidl_typesupport_introspection_c__size_function__MemoryList__strings(
  const void * untyped_member)
{
  const naoqi_bridge_msgs__msg__MemoryPairString__Sequence * member =
    (const naoqi_bridge_msgs__msg__MemoryPairString__Sequence *)(untyped_member);
  return member->size;
}

const void * naoqi_bridge_msgs__msg__MemoryList__rosidl_typesupport_introspection_c__get_const_function__MemoryList__strings(
  const void * untyped_member, size_t index)
{
  const naoqi_bridge_msgs__msg__MemoryPairString__Sequence * member =
    (const naoqi_bridge_msgs__msg__MemoryPairString__Sequence *)(untyped_member);
  return &member->data[index];
}

void * naoqi_bridge_msgs__msg__MemoryList__rosidl_typesupport_introspection_c__get_function__MemoryList__strings(
  void * untyped_member, size_t index)
{
  naoqi_bridge_msgs__msg__MemoryPairString__Sequence * member =
    (naoqi_bridge_msgs__msg__MemoryPairString__Sequence *)(untyped_member);
  return &member->data[index];
}

void naoqi_bridge_msgs__msg__MemoryList__rosidl_typesupport_introspection_c__fetch_function__MemoryList__strings(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const naoqi_bridge_msgs__msg__MemoryPairString * item =
    ((const naoqi_bridge_msgs__msg__MemoryPairString *)
    naoqi_bridge_msgs__msg__MemoryList__rosidl_typesupport_introspection_c__get_const_function__MemoryList__strings(untyped_member, index));
  naoqi_bridge_msgs__msg__MemoryPairString * value =
    (naoqi_bridge_msgs__msg__MemoryPairString *)(untyped_value);
  *value = *item;
}

void naoqi_bridge_msgs__msg__MemoryList__rosidl_typesupport_introspection_c__assign_function__MemoryList__strings(
  void * untyped_member, size_t index, const void * untyped_value)
{
  naoqi_bridge_msgs__msg__MemoryPairString * item =
    ((naoqi_bridge_msgs__msg__MemoryPairString *)
    naoqi_bridge_msgs__msg__MemoryList__rosidl_typesupport_introspection_c__get_function__MemoryList__strings(untyped_member, index));
  const naoqi_bridge_msgs__msg__MemoryPairString * value =
    (const naoqi_bridge_msgs__msg__MemoryPairString *)(untyped_value);
  *item = *value;
}

bool naoqi_bridge_msgs__msg__MemoryList__rosidl_typesupport_introspection_c__resize_function__MemoryList__strings(
  void * untyped_member, size_t size)
{
  naoqi_bridge_msgs__msg__MemoryPairString__Sequence * member =
    (naoqi_bridge_msgs__msg__MemoryPairString__Sequence *)(untyped_member);
  naoqi_bridge_msgs__msg__MemoryPairString__Sequence__fini(member);
  return naoqi_bridge_msgs__msg__MemoryPairString__Sequence__init(member, size);
}

size_t naoqi_bridge_msgs__msg__MemoryList__rosidl_typesupport_introspection_c__size_function__MemoryList__ints(
  const void * untyped_member)
{
  const naoqi_bridge_msgs__msg__MemoryPairInt__Sequence * member =
    (const naoqi_bridge_msgs__msg__MemoryPairInt__Sequence *)(untyped_member);
  return member->size;
}

const void * naoqi_bridge_msgs__msg__MemoryList__rosidl_typesupport_introspection_c__get_const_function__MemoryList__ints(
  const void * untyped_member, size_t index)
{
  const naoqi_bridge_msgs__msg__MemoryPairInt__Sequence * member =
    (const naoqi_bridge_msgs__msg__MemoryPairInt__Sequence *)(untyped_member);
  return &member->data[index];
}

void * naoqi_bridge_msgs__msg__MemoryList__rosidl_typesupport_introspection_c__get_function__MemoryList__ints(
  void * untyped_member, size_t index)
{
  naoqi_bridge_msgs__msg__MemoryPairInt__Sequence * member =
    (naoqi_bridge_msgs__msg__MemoryPairInt__Sequence *)(untyped_member);
  return &member->data[index];
}

void naoqi_bridge_msgs__msg__MemoryList__rosidl_typesupport_introspection_c__fetch_function__MemoryList__ints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const naoqi_bridge_msgs__msg__MemoryPairInt * item =
    ((const naoqi_bridge_msgs__msg__MemoryPairInt *)
    naoqi_bridge_msgs__msg__MemoryList__rosidl_typesupport_introspection_c__get_const_function__MemoryList__ints(untyped_member, index));
  naoqi_bridge_msgs__msg__MemoryPairInt * value =
    (naoqi_bridge_msgs__msg__MemoryPairInt *)(untyped_value);
  *value = *item;
}

void naoqi_bridge_msgs__msg__MemoryList__rosidl_typesupport_introspection_c__assign_function__MemoryList__ints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  naoqi_bridge_msgs__msg__MemoryPairInt * item =
    ((naoqi_bridge_msgs__msg__MemoryPairInt *)
    naoqi_bridge_msgs__msg__MemoryList__rosidl_typesupport_introspection_c__get_function__MemoryList__ints(untyped_member, index));
  const naoqi_bridge_msgs__msg__MemoryPairInt * value =
    (const naoqi_bridge_msgs__msg__MemoryPairInt *)(untyped_value);
  *item = *value;
}

bool naoqi_bridge_msgs__msg__MemoryList__rosidl_typesupport_introspection_c__resize_function__MemoryList__ints(
  void * untyped_member, size_t size)
{
  naoqi_bridge_msgs__msg__MemoryPairInt__Sequence * member =
    (naoqi_bridge_msgs__msg__MemoryPairInt__Sequence *)(untyped_member);
  naoqi_bridge_msgs__msg__MemoryPairInt__Sequence__fini(member);
  return naoqi_bridge_msgs__msg__MemoryPairInt__Sequence__init(member, size);
}

size_t naoqi_bridge_msgs__msg__MemoryList__rosidl_typesupport_introspection_c__size_function__MemoryList__floats(
  const void * untyped_member)
{
  const naoqi_bridge_msgs__msg__MemoryPairFloat__Sequence * member =
    (const naoqi_bridge_msgs__msg__MemoryPairFloat__Sequence *)(untyped_member);
  return member->size;
}

const void * naoqi_bridge_msgs__msg__MemoryList__rosidl_typesupport_introspection_c__get_const_function__MemoryList__floats(
  const void * untyped_member, size_t index)
{
  const naoqi_bridge_msgs__msg__MemoryPairFloat__Sequence * member =
    (const naoqi_bridge_msgs__msg__MemoryPairFloat__Sequence *)(untyped_member);
  return &member->data[index];
}

void * naoqi_bridge_msgs__msg__MemoryList__rosidl_typesupport_introspection_c__get_function__MemoryList__floats(
  void * untyped_member, size_t index)
{
  naoqi_bridge_msgs__msg__MemoryPairFloat__Sequence * member =
    (naoqi_bridge_msgs__msg__MemoryPairFloat__Sequence *)(untyped_member);
  return &member->data[index];
}

void naoqi_bridge_msgs__msg__MemoryList__rosidl_typesupport_introspection_c__fetch_function__MemoryList__floats(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const naoqi_bridge_msgs__msg__MemoryPairFloat * item =
    ((const naoqi_bridge_msgs__msg__MemoryPairFloat *)
    naoqi_bridge_msgs__msg__MemoryList__rosidl_typesupport_introspection_c__get_const_function__MemoryList__floats(untyped_member, index));
  naoqi_bridge_msgs__msg__MemoryPairFloat * value =
    (naoqi_bridge_msgs__msg__MemoryPairFloat *)(untyped_value);
  *value = *item;
}

void naoqi_bridge_msgs__msg__MemoryList__rosidl_typesupport_introspection_c__assign_function__MemoryList__floats(
  void * untyped_member, size_t index, const void * untyped_value)
{
  naoqi_bridge_msgs__msg__MemoryPairFloat * item =
    ((naoqi_bridge_msgs__msg__MemoryPairFloat *)
    naoqi_bridge_msgs__msg__MemoryList__rosidl_typesupport_introspection_c__get_function__MemoryList__floats(untyped_member, index));
  const naoqi_bridge_msgs__msg__MemoryPairFloat * value =
    (const naoqi_bridge_msgs__msg__MemoryPairFloat *)(untyped_value);
  *item = *value;
}

bool naoqi_bridge_msgs__msg__MemoryList__rosidl_typesupport_introspection_c__resize_function__MemoryList__floats(
  void * untyped_member, size_t size)
{
  naoqi_bridge_msgs__msg__MemoryPairFloat__Sequence * member =
    (naoqi_bridge_msgs__msg__MemoryPairFloat__Sequence *)(untyped_member);
  naoqi_bridge_msgs__msg__MemoryPairFloat__Sequence__fini(member);
  return naoqi_bridge_msgs__msg__MemoryPairFloat__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember naoqi_bridge_msgs__msg__MemoryList__rosidl_typesupport_introspection_c__MemoryList_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(naoqi_bridge_msgs__msg__MemoryList, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "strings",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(naoqi_bridge_msgs__msg__MemoryList, strings),  // bytes offset in struct
    NULL,  // default value
    naoqi_bridge_msgs__msg__MemoryList__rosidl_typesupport_introspection_c__size_function__MemoryList__strings,  // size() function pointer
    naoqi_bridge_msgs__msg__MemoryList__rosidl_typesupport_introspection_c__get_const_function__MemoryList__strings,  // get_const(index) function pointer
    naoqi_bridge_msgs__msg__MemoryList__rosidl_typesupport_introspection_c__get_function__MemoryList__strings,  // get(index) function pointer
    naoqi_bridge_msgs__msg__MemoryList__rosidl_typesupport_introspection_c__fetch_function__MemoryList__strings,  // fetch(index, &value) function pointer
    naoqi_bridge_msgs__msg__MemoryList__rosidl_typesupport_introspection_c__assign_function__MemoryList__strings,  // assign(index, value) function pointer
    naoqi_bridge_msgs__msg__MemoryList__rosidl_typesupport_introspection_c__resize_function__MemoryList__strings  // resize(index) function pointer
  },
  {
    "ints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(naoqi_bridge_msgs__msg__MemoryList, ints),  // bytes offset in struct
    NULL,  // default value
    naoqi_bridge_msgs__msg__MemoryList__rosidl_typesupport_introspection_c__size_function__MemoryList__ints,  // size() function pointer
    naoqi_bridge_msgs__msg__MemoryList__rosidl_typesupport_introspection_c__get_const_function__MemoryList__ints,  // get_const(index) function pointer
    naoqi_bridge_msgs__msg__MemoryList__rosidl_typesupport_introspection_c__get_function__MemoryList__ints,  // get(index) function pointer
    naoqi_bridge_msgs__msg__MemoryList__rosidl_typesupport_introspection_c__fetch_function__MemoryList__ints,  // fetch(index, &value) function pointer
    naoqi_bridge_msgs__msg__MemoryList__rosidl_typesupport_introspection_c__assign_function__MemoryList__ints,  // assign(index, value) function pointer
    naoqi_bridge_msgs__msg__MemoryList__rosidl_typesupport_introspection_c__resize_function__MemoryList__ints  // resize(index) function pointer
  },
  {
    "floats",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(naoqi_bridge_msgs__msg__MemoryList, floats),  // bytes offset in struct
    NULL,  // default value
    naoqi_bridge_msgs__msg__MemoryList__rosidl_typesupport_introspection_c__size_function__MemoryList__floats,  // size() function pointer
    naoqi_bridge_msgs__msg__MemoryList__rosidl_typesupport_introspection_c__get_const_function__MemoryList__floats,  // get_const(index) function pointer
    naoqi_bridge_msgs__msg__MemoryList__rosidl_typesupport_introspection_c__get_function__MemoryList__floats,  // get(index) function pointer
    naoqi_bridge_msgs__msg__MemoryList__rosidl_typesupport_introspection_c__fetch_function__MemoryList__floats,  // fetch(index, &value) function pointer
    naoqi_bridge_msgs__msg__MemoryList__rosidl_typesupport_introspection_c__assign_function__MemoryList__floats,  // assign(index, value) function pointer
    naoqi_bridge_msgs__msg__MemoryList__rosidl_typesupport_introspection_c__resize_function__MemoryList__floats  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers naoqi_bridge_msgs__msg__MemoryList__rosidl_typesupport_introspection_c__MemoryList_message_members = {
  "naoqi_bridge_msgs__msg",  // message namespace
  "MemoryList",  // message name
  4,  // number of fields
  sizeof(naoqi_bridge_msgs__msg__MemoryList),
  naoqi_bridge_msgs__msg__MemoryList__rosidl_typesupport_introspection_c__MemoryList_message_member_array,  // message members
  naoqi_bridge_msgs__msg__MemoryList__rosidl_typesupport_introspection_c__MemoryList_init_function,  // function to initialize message memory (memory has to be allocated)
  naoqi_bridge_msgs__msg__MemoryList__rosidl_typesupport_introspection_c__MemoryList_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t naoqi_bridge_msgs__msg__MemoryList__rosidl_typesupport_introspection_c__MemoryList_message_type_support_handle = {
  0,
  &naoqi_bridge_msgs__msg__MemoryList__rosidl_typesupport_introspection_c__MemoryList_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_naoqi_bridge_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, naoqi_bridge_msgs, msg, MemoryList)() {
  naoqi_bridge_msgs__msg__MemoryList__rosidl_typesupport_introspection_c__MemoryList_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  naoqi_bridge_msgs__msg__MemoryList__rosidl_typesupport_introspection_c__MemoryList_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, naoqi_bridge_msgs, msg, MemoryPairString)();
  naoqi_bridge_msgs__msg__MemoryList__rosidl_typesupport_introspection_c__MemoryList_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, naoqi_bridge_msgs, msg, MemoryPairInt)();
  naoqi_bridge_msgs__msg__MemoryList__rosidl_typesupport_introspection_c__MemoryList_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, naoqi_bridge_msgs, msg, MemoryPairFloat)();
  if (!naoqi_bridge_msgs__msg__MemoryList__rosidl_typesupport_introspection_c__MemoryList_message_type_support_handle.typesupport_identifier) {
    naoqi_bridge_msgs__msg__MemoryList__rosidl_typesupport_introspection_c__MemoryList_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &naoqi_bridge_msgs__msg__MemoryList__rosidl_typesupport_introspection_c__MemoryList_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
