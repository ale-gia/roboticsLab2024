// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from naoqi_bridge_msgs:msg/AudioBuffer.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__MSG__DETAIL__AUDIO_BUFFER__BUILDER_HPP_
#define NAOQI_BRIDGE_MSGS__MSG__DETAIL__AUDIO_BUFFER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "naoqi_bridge_msgs/msg/detail/audio_buffer__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace naoqi_bridge_msgs
{

namespace msg
{

namespace builder
{

class Init_AudioBuffer_data
{
public:
  explicit Init_AudioBuffer_data(::naoqi_bridge_msgs::msg::AudioBuffer & msg)
  : msg_(msg)
  {}
  ::naoqi_bridge_msgs::msg::AudioBuffer data(::naoqi_bridge_msgs::msg::AudioBuffer::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::AudioBuffer msg_;
};

class Init_AudioBuffer_channel_map
{
public:
  explicit Init_AudioBuffer_channel_map(::naoqi_bridge_msgs::msg::AudioBuffer & msg)
  : msg_(msg)
  {}
  Init_AudioBuffer_data channel_map(::naoqi_bridge_msgs::msg::AudioBuffer::_channel_map_type arg)
  {
    msg_.channel_map = std::move(arg);
    return Init_AudioBuffer_data(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::AudioBuffer msg_;
};

class Init_AudioBuffer_frequency
{
public:
  explicit Init_AudioBuffer_frequency(::naoqi_bridge_msgs::msg::AudioBuffer & msg)
  : msg_(msg)
  {}
  Init_AudioBuffer_channel_map frequency(::naoqi_bridge_msgs::msg::AudioBuffer::_frequency_type arg)
  {
    msg_.frequency = std::move(arg);
    return Init_AudioBuffer_channel_map(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::AudioBuffer msg_;
};

class Init_AudioBuffer_header
{
public:
  Init_AudioBuffer_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AudioBuffer_frequency header(::naoqi_bridge_msgs::msg::AudioBuffer::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AudioBuffer_frequency(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::AudioBuffer msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::naoqi_bridge_msgs::msg::AudioBuffer>()
{
  return naoqi_bridge_msgs::msg::builder::Init_AudioBuffer_header();
}

}  // namespace naoqi_bridge_msgs

#endif  // NAOQI_BRIDGE_MSGS__MSG__DETAIL__AUDIO_BUFFER__BUILDER_HPP_
