// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from naoqi_bridge_msgs:msg/MemoryPairString.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__MSG__DETAIL__MEMORY_PAIR_STRING__BUILDER_HPP_
#define NAOQI_BRIDGE_MSGS__MSG__DETAIL__MEMORY_PAIR_STRING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "naoqi_bridge_msgs/msg/detail/memory_pair_string__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace naoqi_bridge_msgs
{

namespace msg
{

namespace builder
{

class Init_MemoryPairString_data
{
public:
  explicit Init_MemoryPairString_data(::naoqi_bridge_msgs::msg::MemoryPairString & msg)
  : msg_(msg)
  {}
  ::naoqi_bridge_msgs::msg::MemoryPairString data(::naoqi_bridge_msgs::msg::MemoryPairString::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::MemoryPairString msg_;
};

class Init_MemoryPairString_memory_key
{
public:
  Init_MemoryPairString_memory_key()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MemoryPairString_data memory_key(::naoqi_bridge_msgs::msg::MemoryPairString::_memory_key_type arg)
  {
    msg_.memory_key = std::move(arg);
    return Init_MemoryPairString_data(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::MemoryPairString msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::naoqi_bridge_msgs::msg::MemoryPairString>()
{
  return naoqi_bridge_msgs::msg::builder::Init_MemoryPairString_memory_key();
}

}  // namespace naoqi_bridge_msgs

#endif  // NAOQI_BRIDGE_MSGS__MSG__DETAIL__MEMORY_PAIR_STRING__BUILDER_HPP_
