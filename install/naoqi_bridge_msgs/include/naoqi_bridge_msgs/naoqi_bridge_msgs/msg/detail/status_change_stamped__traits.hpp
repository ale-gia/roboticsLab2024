// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from naoqi_bridge_msgs:msg/StatusChangeStamped.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__MSG__DETAIL__STATUS_CHANGE_STAMPED__TRAITS_HPP_
#define NAOQI_BRIDGE_MSGS__MSG__DETAIL__STATUS_CHANGE_STAMPED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "naoqi_bridge_msgs/msg/detail/status_change_stamped__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'old_status'
// Member 'new_status'
#include "std_msgs/msg/detail/string__traits.hpp"

namespace naoqi_bridge_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const StatusChangeStamped & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: recharge_type
  {
    out << "recharge_type: ";
    rosidl_generator_traits::value_to_yaml(msg.recharge_type, out);
    out << ", ";
  }

  // member: old_status
  {
    out << "old_status: ";
    to_flow_style_yaml(msg.old_status, out);
    out << ", ";
  }

  // member: new_status
  {
    out << "new_status: ";
    to_flow_style_yaml(msg.new_status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StatusChangeStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: recharge_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "recharge_type: ";
    rosidl_generator_traits::value_to_yaml(msg.recharge_type, out);
    out << "\n";
  }

  // member: old_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "old_status:\n";
    to_block_style_yaml(msg.old_status, out, indentation + 2);
  }

  // member: new_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "new_status:\n";
    to_block_style_yaml(msg.new_status, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StatusChangeStamped & msg, bool use_flow_style = false)
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
  const naoqi_bridge_msgs::msg::StatusChangeStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  naoqi_bridge_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use naoqi_bridge_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const naoqi_bridge_msgs::msg::StatusChangeStamped & msg)
{
  return naoqi_bridge_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<naoqi_bridge_msgs::msg::StatusChangeStamped>()
{
  return "naoqi_bridge_msgs::msg::StatusChangeStamped";
}

template<>
inline const char * name<naoqi_bridge_msgs::msg::StatusChangeStamped>()
{
  return "naoqi_bridge_msgs/msg/StatusChangeStamped";
}

template<>
struct has_fixed_size<naoqi_bridge_msgs::msg::StatusChangeStamped>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value && has_fixed_size<std_msgs::msg::String>::value> {};

template<>
struct has_bounded_size<naoqi_bridge_msgs::msg::StatusChangeStamped>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value && has_bounded_size<std_msgs::msg::String>::value> {};

template<>
struct is_message<naoqi_bridge_msgs::msg::StatusChangeStamped>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NAOQI_BRIDGE_MSGS__MSG__DETAIL__STATUS_CHANGE_STAMPED__TRAITS_HPP_
