// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from naoqi_bridge_msgs:msg/MemoryList.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "naoqi_bridge_msgs/msg/detail/memory_list__struct.hpp"
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

void MemoryList_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) naoqi_bridge_msgs::msg::MemoryList(_init);
}

void MemoryList_fini_function(void * message_memory)
{
  auto typed_message = static_cast<naoqi_bridge_msgs::msg::MemoryList *>(message_memory);
  typed_message->~MemoryList();
}

size_t size_function__MemoryList__strings(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<naoqi_bridge_msgs::msg::MemoryPairString> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MemoryList__strings(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<naoqi_bridge_msgs::msg::MemoryPairString> *>(untyped_member);
  return &member[index];
}

void * get_function__MemoryList__strings(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<naoqi_bridge_msgs::msg::MemoryPairString> *>(untyped_member);
  return &member[index];
}

void fetch_function__MemoryList__strings(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const naoqi_bridge_msgs::msg::MemoryPairString *>(
    get_const_function__MemoryList__strings(untyped_member, index));
  auto & value = *reinterpret_cast<naoqi_bridge_msgs::msg::MemoryPairString *>(untyped_value);
  value = item;
}

void assign_function__MemoryList__strings(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<naoqi_bridge_msgs::msg::MemoryPairString *>(
    get_function__MemoryList__strings(untyped_member, index));
  const auto & value = *reinterpret_cast<const naoqi_bridge_msgs::msg::MemoryPairString *>(untyped_value);
  item = value;
}

void resize_function__MemoryList__strings(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<naoqi_bridge_msgs::msg::MemoryPairString> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MemoryList__ints(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<naoqi_bridge_msgs::msg::MemoryPairInt> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MemoryList__ints(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<naoqi_bridge_msgs::msg::MemoryPairInt> *>(untyped_member);
  return &member[index];
}

void * get_function__MemoryList__ints(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<naoqi_bridge_msgs::msg::MemoryPairInt> *>(untyped_member);
  return &member[index];
}

void fetch_function__MemoryList__ints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const naoqi_bridge_msgs::msg::MemoryPairInt *>(
    get_const_function__MemoryList__ints(untyped_member, index));
  auto & value = *reinterpret_cast<naoqi_bridge_msgs::msg::MemoryPairInt *>(untyped_value);
  value = item;
}

void assign_function__MemoryList__ints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<naoqi_bridge_msgs::msg::MemoryPairInt *>(
    get_function__MemoryList__ints(untyped_member, index));
  const auto & value = *reinterpret_cast<const naoqi_bridge_msgs::msg::MemoryPairInt *>(untyped_value);
  item = value;
}

void resize_function__MemoryList__ints(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<naoqi_bridge_msgs::msg::MemoryPairInt> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MemoryList__floats(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<naoqi_bridge_msgs::msg::MemoryPairFloat> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MemoryList__floats(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<naoqi_bridge_msgs::msg::MemoryPairFloat> *>(untyped_member);
  return &member[index];
}

void * get_function__MemoryList__floats(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<naoqi_bridge_msgs::msg::MemoryPairFloat> *>(untyped_member);
  return &member[index];
}

void fetch_function__MemoryList__floats(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const naoqi_bridge_msgs::msg::MemoryPairFloat *>(
    get_const_function__MemoryList__floats(untyped_member, index));
  auto & value = *reinterpret_cast<naoqi_bridge_msgs::msg::MemoryPairFloat *>(untyped_value);
  value = item;
}

void assign_function__MemoryList__floats(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<naoqi_bridge_msgs::msg::MemoryPairFloat *>(
    get_function__MemoryList__floats(untyped_member, index));
  const auto & value = *reinterpret_cast<const naoqi_bridge_msgs::msg::MemoryPairFloat *>(untyped_value);
  item = value;
}

void resize_function__MemoryList__floats(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<naoqi_bridge_msgs::msg::MemoryPairFloat> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MemoryList_message_member_array[4] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(naoqi_bridge_msgs::msg::MemoryList, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "strings",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<naoqi_bridge_msgs::msg::MemoryPairString>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(naoqi_bridge_msgs::msg::MemoryList, strings),  // bytes offset in struct
    nullptr,  // default value
    size_function__MemoryList__strings,  // size() function pointer
    get_const_function__MemoryList__strings,  // get_const(index) function pointer
    get_function__MemoryList__strings,  // get(index) function pointer
    fetch_function__MemoryList__strings,  // fetch(index, &value) function pointer
    assign_function__MemoryList__strings,  // assign(index, value) function pointer
    resize_function__MemoryList__strings  // resize(index) function pointer
  },
  {
    "ints",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<naoqi_bridge_msgs::msg::MemoryPairInt>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(naoqi_bridge_msgs::msg::MemoryList, ints),  // bytes offset in struct
    nullptr,  // default value
    size_function__MemoryList__ints,  // size() function pointer
    get_const_function__MemoryList__ints,  // get_const(index) function pointer
    get_function__MemoryList__ints,  // get(index) function pointer
    fetch_function__MemoryList__ints,  // fetch(index, &value) function pointer
    assign_function__MemoryList__ints,  // assign(index, value) function pointer
    resize_function__MemoryList__ints  // resize(index) function pointer
  },
  {
    "floats",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<naoqi_bridge_msgs::msg::MemoryPairFloat>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(naoqi_bridge_msgs::msg::MemoryList, floats),  // bytes offset in struct
    nullptr,  // default value
    size_function__MemoryList__floats,  // size() function pointer
    get_const_function__MemoryList__floats,  // get_const(index) function pointer
    get_function__MemoryList__floats,  // get(index) function pointer
    fetch_function__MemoryList__floats,  // fetch(index, &value) function pointer
    assign_function__MemoryList__floats,  // assign(index, value) function pointer
    resize_function__MemoryList__floats  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MemoryList_message_members = {
  "naoqi_bridge_msgs::msg",  // message namespace
  "MemoryList",  // message name
  4,  // number of fields
  sizeof(naoqi_bridge_msgs::msg::MemoryList),
  MemoryList_message_member_array,  // message members
  MemoryList_init_function,  // function to initialize message memory (memory has to be allocated)
  MemoryList_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MemoryList_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MemoryList_message_members,
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
get_message_type_support_handle<naoqi_bridge_msgs::msg::MemoryList>()
{
  return &::naoqi_bridge_msgs::msg::rosidl_typesupport_introspection_cpp::MemoryList_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, naoqi_bridge_msgs, msg, MemoryList)() {
  return &::naoqi_bridge_msgs::msg::rosidl_typesupport_introspection_cpp::MemoryList_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
