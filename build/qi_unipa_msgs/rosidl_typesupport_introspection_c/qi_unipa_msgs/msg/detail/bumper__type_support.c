// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from qi_unipa_msgs:msg/Bumper.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "qi_unipa_msgs/msg/detail/bumper__rosidl_typesupport_introspection_c.h"
#include "qi_unipa_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "qi_unipa_msgs/msg/detail/bumper__functions.h"
#include "qi_unipa_msgs/msg/detail/bumper__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void qi_unipa_msgs__msg__Bumper__rosidl_typesupport_introspection_c__Bumper_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  qi_unipa_msgs__msg__Bumper__init(message_memory);
}

void qi_unipa_msgs__msg__Bumper__rosidl_typesupport_introspection_c__Bumper_fini_function(void * message_memory)
{
  qi_unipa_msgs__msg__Bumper__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember qi_unipa_msgs__msg__Bumper__rosidl_typesupport_introspection_c__Bumper_message_member_array[3] = {
  {
    "left",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(qi_unipa_msgs__msg__Bumper, left),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(qi_unipa_msgs__msg__Bumper, right),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "back",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(qi_unipa_msgs__msg__Bumper, back),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers qi_unipa_msgs__msg__Bumper__rosidl_typesupport_introspection_c__Bumper_message_members = {
  "qi_unipa_msgs__msg",  // message namespace
  "Bumper",  // message name
  3,  // number of fields
  sizeof(qi_unipa_msgs__msg__Bumper),
  qi_unipa_msgs__msg__Bumper__rosidl_typesupport_introspection_c__Bumper_message_member_array,  // message members
  qi_unipa_msgs__msg__Bumper__rosidl_typesupport_introspection_c__Bumper_init_function,  // function to initialize message memory (memory has to be allocated)
  qi_unipa_msgs__msg__Bumper__rosidl_typesupport_introspection_c__Bumper_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t qi_unipa_msgs__msg__Bumper__rosidl_typesupport_introspection_c__Bumper_message_type_support_handle = {
  0,
  &qi_unipa_msgs__msg__Bumper__rosidl_typesupport_introspection_c__Bumper_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_qi_unipa_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, qi_unipa_msgs, msg, Bumper)() {
  if (!qi_unipa_msgs__msg__Bumper__rosidl_typesupport_introspection_c__Bumper_message_type_support_handle.typesupport_identifier) {
    qi_unipa_msgs__msg__Bumper__rosidl_typesupport_introspection_c__Bumper_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &qi_unipa_msgs__msg__Bumper__rosidl_typesupport_introspection_c__Bumper_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
