// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from naoqi_bridge_msgs:msg/RobotInfo.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__MSG__DETAIL__ROBOT_INFO__TRAITS_HPP_
#define NAOQI_BRIDGE_MSGS__MSG__DETAIL__ROBOT_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "naoqi_bridge_msgs/msg/detail/robot_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace naoqi_bridge_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: model
  {
    out << "model: ";
    rosidl_generator_traits::value_to_yaml(msg.model, out);
    out << ", ";
  }

  // member: head_version
  {
    out << "head_version: ";
    rosidl_generator_traits::value_to_yaml(msg.head_version, out);
    out << ", ";
  }

  // member: body_version
  {
    out << "body_version: ";
    rosidl_generator_traits::value_to_yaml(msg.body_version, out);
    out << ", ";
  }

  // member: arm_version
  {
    out << "arm_version: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_version, out);
    out << ", ";
  }

  // member: has_laser
  {
    out << "has_laser: ";
    rosidl_generator_traits::value_to_yaml(msg.has_laser, out);
    out << ", ";
  }

  // member: has_extended_arms
  {
    out << "has_extended_arms: ";
    rosidl_generator_traits::value_to_yaml(msg.has_extended_arms, out);
    out << ", ";
  }

  // member: number_of_legs
  {
    out << "number_of_legs: ";
    rosidl_generator_traits::value_to_yaml(msg.number_of_legs, out);
    out << ", ";
  }

  // member: number_of_arms
  {
    out << "number_of_arms: ";
    rosidl_generator_traits::value_to_yaml(msg.number_of_arms, out);
    out << ", ";
  }

  // member: number_of_hands
  {
    out << "number_of_hands: ";
    rosidl_generator_traits::value_to_yaml(msg.number_of_hands, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: model
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "model: ";
    rosidl_generator_traits::value_to_yaml(msg.model, out);
    out << "\n";
  }

  // member: head_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "head_version: ";
    rosidl_generator_traits::value_to_yaml(msg.head_version, out);
    out << "\n";
  }

  // member: body_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "body_version: ";
    rosidl_generator_traits::value_to_yaml(msg.body_version, out);
    out << "\n";
  }

  // member: arm_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arm_version: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_version, out);
    out << "\n";
  }

  // member: has_laser
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_laser: ";
    rosidl_generator_traits::value_to_yaml(msg.has_laser, out);
    out << "\n";
  }

  // member: has_extended_arms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_extended_arms: ";
    rosidl_generator_traits::value_to_yaml(msg.has_extended_arms, out);
    out << "\n";
  }

  // member: number_of_legs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "number_of_legs: ";
    rosidl_generator_traits::value_to_yaml(msg.number_of_legs, out);
    out << "\n";
  }

  // member: number_of_arms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "number_of_arms: ";
    rosidl_generator_traits::value_to_yaml(msg.number_of_arms, out);
    out << "\n";
  }

  // member: number_of_hands
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "number_of_hands: ";
    rosidl_generator_traits::value_to_yaml(msg.number_of_hands, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotInfo & msg, bool use_flow_style = false)
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
  const naoqi_bridge_msgs::msg::RobotInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  naoqi_bridge_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use naoqi_bridge_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const naoqi_bridge_msgs::msg::RobotInfo & msg)
{
  return naoqi_bridge_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<naoqi_bridge_msgs::msg::RobotInfo>()
{
  return "naoqi_bridge_msgs::msg::RobotInfo";
}

template<>
inline const char * name<naoqi_bridge_msgs::msg::RobotInfo>()
{
  return "naoqi_bridge_msgs/msg/RobotInfo";
}

template<>
struct has_fixed_size<naoqi_bridge_msgs::msg::RobotInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<naoqi_bridge_msgs::msg::RobotInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<naoqi_bridge_msgs::msg::RobotInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NAOQI_BRIDGE_MSGS__MSG__DETAIL__ROBOT_INFO__TRAITS_HPP_
