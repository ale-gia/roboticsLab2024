// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from naoqi_bridge_msgs:msg/MemoryPairFloat.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__MSG__DETAIL__MEMORY_PAIR_FLOAT__BUILDER_HPP_
#define NAOQI_BRIDGE_MSGS__MSG__DETAIL__MEMORY_PAIR_FLOAT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "naoqi_bridge_msgs/msg/detail/memory_pair_float__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace naoqi_bridge_msgs
{

namespace msg
{

namespace builder
{

class Init_MemoryPairFloat_data
{
public:
  explicit Init_MemoryPairFloat_data(::naoqi_bridge_msgs::msg::MemoryPairFloat & msg)
  : msg_(msg)
  {}
  ::naoqi_bridge_msgs::msg::MemoryPairFloat data(::naoqi_bridge_msgs::msg::MemoryPairFloat::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::MemoryPairFloat msg_;
};

class Init_MemoryPairFloat_memory_key
{
public:
  Init_MemoryPairFloat_memory_key()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MemoryPairFloat_data memory_key(::naoqi_bridge_msgs::msg::MemoryPairFloat::_memory_key_type arg)
  {
    msg_.memory_key = std::move(arg);
    return Init_MemoryPairFloat_data(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::MemoryPairFloat msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::naoqi_bridge_msgs::msg::MemoryPairFloat>()
{
  return naoqi_bridge_msgs::msg::builder::Init_MemoryPairFloat_memory_key();
}

}  // namespace naoqi_bridge_msgs

#endif  // NAOQI_BRIDGE_MSGS__MSG__DETAIL__MEMORY_PAIR_FLOAT__BUILDER_HPP_
