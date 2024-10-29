// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from naoqi_bridge_msgs:msg/FadeRGB.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__MSG__DETAIL__FADE_RGB__BUILDER_HPP_
#define NAOQI_BRIDGE_MSGS__MSG__DETAIL__FADE_RGB__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "naoqi_bridge_msgs/msg/detail/fade_rgb__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace naoqi_bridge_msgs
{

namespace msg
{

namespace builder
{

class Init_FadeRGB_fade_duration
{
public:
  explicit Init_FadeRGB_fade_duration(::naoqi_bridge_msgs::msg::FadeRGB & msg)
  : msg_(msg)
  {}
  ::naoqi_bridge_msgs::msg::FadeRGB fade_duration(::naoqi_bridge_msgs::msg::FadeRGB::_fade_duration_type arg)
  {
    msg_.fade_duration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::FadeRGB msg_;
};

class Init_FadeRGB_color
{
public:
  explicit Init_FadeRGB_color(::naoqi_bridge_msgs::msg::FadeRGB & msg)
  : msg_(msg)
  {}
  Init_FadeRGB_fade_duration color(::naoqi_bridge_msgs::msg::FadeRGB::_color_type arg)
  {
    msg_.color = std::move(arg);
    return Init_FadeRGB_fade_duration(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::FadeRGB msg_;
};

class Init_FadeRGB_led_name
{
public:
  Init_FadeRGB_led_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FadeRGB_color led_name(::naoqi_bridge_msgs::msg::FadeRGB::_led_name_type arg)
  {
    msg_.led_name = std::move(arg);
    return Init_FadeRGB_color(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::FadeRGB msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::naoqi_bridge_msgs::msg::FadeRGB>()
{
  return naoqi_bridge_msgs::msg::builder::Init_FadeRGB_led_name();
}

}  // namespace naoqi_bridge_msgs

#endif  // NAOQI_BRIDGE_MSGS__MSG__DETAIL__FADE_RGB__BUILDER_HPP_
