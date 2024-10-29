// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from naoqi_bridge_msgs:msg/FadeRGB.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__MSG__DETAIL__FADE_RGB__TRAITS_HPP_
#define NAOQI_BRIDGE_MSGS__MSG__DETAIL__FADE_RGB__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "naoqi_bridge_msgs/msg/detail/fade_rgb__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'color'
#include "std_msgs/msg/detail/color_rgba__traits.hpp"
// Member 'fade_duration'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace naoqi_bridge_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const FadeRGB & msg,
  std::ostream & out)
{
  out << "{";
  // member: led_name
  {
    out << "led_name: ";
    rosidl_generator_traits::value_to_yaml(msg.led_name, out);
    out << ", ";
  }

  // member: color
  {
    out << "color: ";
    to_flow_style_yaml(msg.color, out);
    out << ", ";
  }

  // member: fade_duration
  {
    out << "fade_duration: ";
    to_flow_style_yaml(msg.fade_duration, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FadeRGB & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: led_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "led_name: ";
    rosidl_generator_traits::value_to_yaml(msg.led_name, out);
    out << "\n";
  }

  // member: color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "color:\n";
    to_block_style_yaml(msg.color, out, indentation + 2);
  }

  // member: fade_duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fade_duration:\n";
    to_block_style_yaml(msg.fade_duration, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FadeRGB & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace naoqi_bridge_msgs

namespace rosidl_generator_traits
{

[[deprecated("use naoqi_bridge_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const naoqi_bridge_msgs::msg::FadeRGB & msg,
  std::ostream & out, size_t indentation = 0)
{
  naoqi_bridge_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use naoqi_bridge_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const naoqi_bridge_msgs::msg::FadeRGB & msg)
{
  return naoqi_bridge_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<naoqi_bridge_msgs::msg::FadeRGB>()
{
  return "naoqi_bridge_msgs::msg::FadeRGB";
}

template<>
inline const char * name<naoqi_bridge_msgs::msg::FadeRGB>()
{
  return "naoqi_bridge_msgs/msg/FadeRGB";
}

template<>
struct has_fixed_size<naoqi_bridge_msgs::msg::FadeRGB>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<naoqi_bridge_msgs::msg::FadeRGB>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<naoqi_bridge_msgs::msg::FadeRGB>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NAOQI_BRIDGE_MSGS__MSG__DETAIL__FADE_RGB__TRAITS_HPP_
