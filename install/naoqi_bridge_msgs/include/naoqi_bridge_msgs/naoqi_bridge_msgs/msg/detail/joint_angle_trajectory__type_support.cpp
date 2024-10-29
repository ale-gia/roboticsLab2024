// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from naoqi_bridge_msgs:msg/JointAngleTrajectory.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "naoqi_bridge_msgs/msg/detail/joint_angle_trajectory__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace naoqi_bridge_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void JointAngleTrajectory_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) naoqi_bridge_msgs::msg::JointAngleTrajectory(_init);
}

void JointAngleTrajectory_fini_function(void * message_memory)
{
  auto typed_message = static_cast<naoqi_bridge_msgs::msg::JointAngleTrajectory *>(message_memory);
  typed_message->~JointAngleTrajectory();
}

size_t size_function__JointAngleTrajectory__joint_names(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__JointAngleTrajectory__joint_names(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__JointAngleTrajectory__joint_names(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__JointAngleTrajectory__joint_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__JointAngleTrajectory__joint_names(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__JointAngleTrajectory__joint_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__JointAngleTrajectory__joint_names(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__JointAngleTrajectory__joint_names(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__JointAngleTrajectory__joint_angles(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__JointAngleTrajectory__joint_angles(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__JointAngleTrajectory__joint_angles(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__JointAngleTrajectory__joint_angles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__JointAngleTrajectory__joint_angles(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__JointAngleTrajectory__joint_angles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__JointAngleTrajectory__joint_angles(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__JointAngleTrajectory__joint_angles(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__JointAngleTrajectory__times(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__JointAngleTrajectory__times(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__JointAngleTrajectory__times(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__JointAngleTrajectory__times(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__JointAngleTrajectory__times(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__JointAngleTrajectory__times(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__JointAngleTrajectory__times(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__JointAngleTrajectory__times(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember JointAngleTrajectory_message_member_array[5] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(naoqi_bridge_msgs::msg::JointAngleTrajectory, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "joint_names",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(naoqi_bridge_msgs::msg::JointAngleTrajectory, joint_names),  // bytes offset in struct
    nullptr,  // default value
    size_function__JointAngleTrajectory__joint_names,  // size() function pointer
    get_const_function__JointAngleTrajectory__joint_names,  // get_const(index) function pointer
    get_function__JointAngleTrajectory__joint_names,  // get(index) function pointer
    fetch_function__JointAngleTrajectory__joint_names,  // fetch(index, &value) function pointer
    assign_function__JointAngleTrajectory__joint_names,  // assign(index, value) function pointer
    resize_function__JointAngleTrajectory__joint_names  // resize(index) function pointer
  },
  {
    "joint_angles",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(naoqi_bridge_msgs::msg::JointAngleTrajectory, joint_angles),  // bytes offset in struct
    nullptr,  // default value
    size_function__JointAngleTrajectory__joint_angles,  // size() function pointer
    get_const_function__JointAngleTrajectory__joint_angles,  // get_const(index) function pointer
    get_function__JointAngleTrajectory__joint_angles,  // get(index) function pointer
    fetch_function__JointAngleTrajectory__joint_angles,  // fetch(index, &value) function pointer
    assign_function__JointAngleTrajectory__joint_angles,  // assign(index, value) function pointer
    resize_function__JointAngleTrajectory__joint_angles  // resize(index) function pointer
  },
  {
    "times",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(naoqi_bridge_msgs::msg::JointAngleTrajectory, times),  // bytes offset in struct
    nullptr,  // default value
    size_function__JointAngleTrajectory__times,  // size() function pointer
    get_const_function__JointAngleTrajectory__times,  // get_const(index) function pointer
    get_function__JointAngleTrajectory__times,  // get(index) function pointer
    fetch_function__JointAngleTrajectory__times,  // fetch(index, &value) function pointer
    assign_function__JointAngleTrajectory__times,  // assign(index, value) function pointer
    resize_function__JointAngleTrajectory__times  // resize(index) function pointer
  },
  {
    "relative",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(naoqi_bridge_msgs::msg::JointAngleTrajectory, relative),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers JointAngleTrajectory_message_members = {
  "naoqi_bridge_msgs::msg",  // message namespace
  "JointAngleTrajectory",  // message name
  5,  // number of fields
  sizeof(naoqi_bridge_msgs::msg::JointAngleTrajectory),
  JointAngleTrajectory_message_member_array,  // message members
  JointAngleTrajectory_init_function,  // function to initialize message memory (memory has to be allocated)
  JointAngleTrajectory_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t JointAngleTrajectory_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &JointAngleTrajectory_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace naoqi_bridge_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<naoqi_bridge_msgs::msg::JointAngleTrajectory>()
{
  return &::naoqi_bridge_msgs::msg::rosidl_typesupport_introspection_cpp::JointAngleTrajectory_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, naoqi_bridge_msgs, msg, JointAngleTrajectory)() {
  return &::naoqi_bridge_msgs::msg::rosidl_typesupport_introspection_cpp::JointAngleTrajectory_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
