// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from naoqi_bridge_msgs:msg/HeadTouch.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__MSG__DETAIL__HEAD_TOUCH__TRAITS_HPP_
#define NAOQI_BRIDGE_MSGS__MSG__DETAIL__HEAD_TOUCH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "naoqi_bridge_msgs/msg/detail/head_touch__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace naoqi_bridge_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const HeadTouch & msg,
  std::ostream & out)
{
  out << "{";
  // member: button
  {
    out << "button: ";
    rosidl_generator_traits::value_to_yaml(msg.button, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HeadTouch & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: button
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "button: ";
    rosidl_generator_traits::value_to_yaml(msg.button, out);
    out << "\n";
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HeadTouch & msg, bool use_flow_style = false)
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
  const naoqi_bridge_msgs::msg::HeadTouch & msg,
  std::ostream & out, size_t indentation = 0)
{
  naoqi_bridge_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use naoqi_bridge_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const naoqi_bridge_msgs::msg::HeadTouch & msg)
{
  return naoqi_bridge_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<naoqi_bridge_msgs::msg::HeadTouch>()
{
  return "naoqi_bridge_msgs::msg::HeadTouch";
}

template<>
inline const char * name<naoqi_bridge_msgs::msg::HeadTouch>()
{
  return "naoqi_bridge_msgs/msg/HeadTouch";
}

template<>
struct has_fixed_size<naoqi_bridge_msgs::msg::HeadTouch>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<naoqi_bridge_msgs::msg::HeadTouch>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<naoqi_bridge_msgs::msg::HeadTouch>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NAOQI_BRIDGE_MSGS__MSG__DETAIL__HEAD_TOUCH__TRAITS_HPP_
