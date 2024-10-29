// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from naoqi_bridge_msgs:msg/WordRecognized.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "naoqi_bridge_msgs/msg/detail/word_recognized__rosidl_typesupport_introspection_c.h"
#include "naoqi_bridge_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "naoqi_bridge_msgs/msg/detail/word_recognized__functions.h"
#include "naoqi_bridge_msgs/msg/detail/word_recognized__struct.h"


// Include directives for member types
// Member `words`
#include "rosidl_runtime_c/string_functions.h"
// Member `confidence_values`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void naoqi_bridge_msgs__msg__WordRecognized__rosidl_typesupport_introspection_c__WordRecognized_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  naoqi_bridge_msgs__msg__WordRecognized__init(message_memory);
}

void naoqi_bridge_msgs__msg__WordRecognized__rosidl_typesupport_introspection_c__WordRecognized_fini_function(void * message_memory)
{
  naoqi_bridge_msgs__msg__WordRecognized__fini(message_memory);
}

size_t naoqi_bridge_msgs__msg__WordRecognized__rosidl_typesupport_introspection_c__size_function__WordRecognized__words(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * naoqi_bridge_msgs__msg__WordRecognized__rosidl_typesupport_introspection_c__get_const_function__WordRecognized__words(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * naoqi_bridge_msgs__msg__WordRecognized__rosidl_typesupport_introspection_c__get_function__WordRecognized__words(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void naoqi_bridge_msgs__msg__WordRecognized__rosidl_typesupport_introspection_c__fetch_function__WordRecognized__words(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    naoqi_bridge_msgs__msg__WordRecognized__rosidl_typesupport_introspection_c__get_const_function__WordRecognized__words(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void naoqi_bridge_msgs__msg__WordRecognized__rosidl_typesupport_introspection_c__assign_function__WordRecognized__words(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    naoqi_bridge_msgs__msg__WordRecognized__rosidl_typesupport_introspection_c__get_function__WordRecognized__words(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool naoqi_bridge_msgs__msg__WordRecognized__rosidl_typesupport_introspection_c__resize_function__WordRecognized__words(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t naoqi_bridge_msgs__msg__WordRecognized__rosidl_typesupport_introspection_c__size_function__WordRecognized__confidence_values(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * naoqi_bridge_msgs__msg__WordRecognized__rosidl_typesupport_introspection_c__get_const_function__WordRecognized__confidence_values(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * naoqi_bridge_msgs__msg__WordRecognized__rosidl_typesupport_introspection_c__get_function__WordRecognized__confidence_values(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void naoqi_bridge_msgs__msg__WordRecognized__rosidl_typesupport_introspection_c__fetch_function__WordRecognized__confidence_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    naoqi_bridge_msgs__msg__WordRecognized__rosidl_typesupport_introspection_c__get_const_function__WordRecognized__confidence_values(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void naoqi_bridge_msgs__msg__WordRecognized__rosidl_typesupport_introspection_c__assign_function__WordRecognized__confidence_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    naoqi_bridge_msgs__msg__WordRecognized__rosidl_typesupport_introspection_c__get_function__WordRecognized__confidence_values(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool naoqi_bridge_msgs__msg__WordRecognized__rosidl_typesupport_introspection_c__resize_function__WordRecognized__confidence_values(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember naoqi_bridge_msgs__msg__WordRecognized__rosidl_typesupport_introspection_c__WordRecognized_message_member_array[2] = {
  {
    "words",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(naoqi_bridge_msgs__msg__WordRecognized, words),  // bytes offset in struct
    NULL,  // default value
    naoqi_bridge_msgs__msg__WordRecognized__rosidl_typesupport_introspection_c__size_function__WordRecognized__words,  // size() function pointer
    naoqi_bridge_msgs__msg__WordRecognized__rosidl_typesupport_introspection_c__get_const_function__WordRecognized__words,  // get_const(index) function pointer
    naoqi_bridge_msgs__msg__WordRecognized__rosidl_typesupport_introspection_c__get_function__WordRecognized__words,  // get(index) function pointer
    naoqi_bridge_msgs__msg__WordRecognized__rosidl_typesupport_introspection_c__fetch_function__WordRecognized__words,  // fetch(index, &value) function pointer
    naoqi_bridge_msgs__msg__WordRecognized__rosidl_typesupport_introspection_c__assign_function__WordRecognized__words,  // assign(index, value) function pointer
    naoqi_bridge_msgs__msg__WordRecognized__rosidl_typesupport_introspection_c__resize_function__WordRecognized__words  // resize(index) function pointer
  },
  {
    "confidence_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(naoqi_bridge_msgs__msg__WordRecognized, confidence_values),  // bytes offset in struct
    NULL,  // default value
    naoqi_bridge_msgs__msg__WordRecognized__rosidl_typesupport_introspection_c__size_function__WordRecognized__confidence_values,  // size() function pointer
    naoqi_bridge_msgs__msg__WordRecognized__rosidl_typesupport_introspection_c__get_const_function__WordRecognized__confidence_values,  // get_const(index) function pointer
    naoqi_bridge_msgs__msg__WordRecognized__rosidl_typesupport_introspection_c__get_function__WordRecognized__confidence_values,  // get(index) function pointer
    naoqi_bridge_msgs__msg__WordRecognized__rosidl_typesupport_introspection_c__fetch_function__WordRecognized__confidence_values,  // fetch(index, &value) function pointer
    naoqi_bridge_msgs__msg__WordRecognized__rosidl_typesupport_introspection_c__assign_function__WordRecognized__confidence_values,  // assign(index, value) function pointer
    naoqi_bridge_msgs__msg__WordRecognized__rosidl_typesupport_introspection_c__resize_function__WordRecognized__confidence_values  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers naoqi_bridge_msgs__msg__WordRecognized__rosidl_typesupport_introspection_c__WordRecognized_message_members = {
  "naoqi_bridge_msgs__msg",  // message namespace
  "WordRecognized",  // message name
  2,  // number of fields
  sizeof(naoqi_bridge_msgs__msg__WordRecognized),
  naoqi_bridge_msgs__msg__WordRecognized__rosidl_typesupport_introspection_c__WordRecognized_message_member_array,  // message members
  naoqi_bridge_msgs__msg__WordRecognized__rosidl_typesupport_introspection_c__WordRecognized_init_function,  // function to initialize message memory (memory has to be allocated)
  naoqi_bridge_msgs__msg__WordRecognized__rosidl_typesupport_introspection_c__WordRecognized_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t naoqi_bridge_msgs__msg__WordRecognized__rosidl_typesupport_introspection_c__WordRecognized_message_type_support_handle = {
  0,
  &naoqi_bridge_msgs__msg__WordRecognized__rosidl_typesupport_introspection_c__WordRecognized_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_naoqi_bridge_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, naoqi_bridge_msgs, msg, WordRecognized)() {
  if (!naoqi_bridge_msgs__msg__WordRecognized__rosidl_typesupport_introspection_c__WordRecognized_message_type_support_handle.typesupport_identifier) {
    naoqi_bridge_msgs__msg__WordRecognized__rosidl_typesupport_introspection_c__WordRecognized_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &naoqi_bridge_msgs__msg__WordRecognized__rosidl_typesupport_introspection_c__WordRecognized_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
