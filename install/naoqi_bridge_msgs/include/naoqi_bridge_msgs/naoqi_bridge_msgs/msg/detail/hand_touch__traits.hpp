// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from naoqi_bridge_msgs:msg/HandTouch.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__MSG__DETAIL__HAND_TOUCH__TRAITS_HPP_
#define NAOQI_BRIDGE_MSGS__MSG__DETAIL__HAND_TOUCH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "naoqi_bridge_msgs/msg/detail/hand_touch__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace naoqi_bridge_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const HandTouch & msg,
  std::ostream & out)
{
  out << "{";
  // member: hand
  {
    out << "hand: ";
    rosidl_generator_traits::value_to_yaml(msg.hand, out);
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
  const HandTouch & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: hand
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hand: ";
    rosidl_generator_traits::value_to_yaml(msg.hand, out);
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

inline std::string to_yaml(const HandTouch & msg, bool use_flow_style = false)
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
  const naoqi_bridge_msgs::msg::HandTouch & msg,
  std::ostream & out, size_t indentation = 0)
{
  naoqi_bridge_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use naoqi_bridge_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const naoqi_bridge_msgs::msg::HandTouch & msg)
{
  return naoqi_bridge_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<naoqi_bridge_msgs::msg::HandTouch>()
{
  return "naoqi_bridge_msgs::msg::HandTouch";
}

template<>
inline const char * name<naoqi_bridge_msgs::msg::HandTouch>()
{
  return "naoqi_bridge_msgs/msg/HandTouch";
}

template<>
struct has_fixed_size<naoqi_bridge_msgs::msg::HandTouch>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<naoqi_bridge_msgs::msg::HandTouch>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<naoqi_bridge_msgs::msg::HandTouch>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NAOQI_BRIDGE_MSGS__MSG__DETAIL__HAND_TOUCH__TRAITS_HPP_
