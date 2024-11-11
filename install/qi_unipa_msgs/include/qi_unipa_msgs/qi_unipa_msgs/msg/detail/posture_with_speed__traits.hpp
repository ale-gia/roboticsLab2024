// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from qi_unipa_msgs:msg/PostureWithSpeed.idl
// generated code does not contain a copyright notice

#ifndef QI_UNIPA_MSGS__MSG__DETAIL__POSTURE_WITH_SPEED__TRAITS_HPP_
#define QI_UNIPA_MSGS__MSG__DETAIL__POSTURE_WITH_SPEED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "qi_unipa_msgs/msg/detail/posture_with_speed__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace qi_unipa_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PostureWithSpeed & msg,
  std::ostream & out)
{
  out << "{";
  // member: posture_name
  {
    out << "posture_name: ";
    rosidl_generator_traits::value_to_yaml(msg.posture_name, out);
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PostureWithSpeed & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: posture_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "posture_name: ";
    rosidl_generator_traits::value_to_yaml(msg.posture_name, out);
    out << "\n";
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PostureWithSpeed & msg, bool use_flow_style = false)
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

}  // namespace qi_unipa_msgs

namespace rosidl_generator_traits
{

[[deprecated("use qi_unipa_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const qi_unipa_msgs::msg::PostureWithSpeed & msg,
  std::ostream & out, size_t indentation = 0)
{
  qi_unipa_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use qi_unipa_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const qi_unipa_msgs::msg::PostureWithSpeed & msg)
{
  return qi_unipa_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<qi_unipa_msgs::msg::PostureWithSpeed>()
{
  return "qi_unipa_msgs::msg::PostureWithSpeed";
}

template<>
inline const char * name<qi_unipa_msgs::msg::PostureWithSpeed>()
{
  return "qi_unipa_msgs/msg/PostureWithSpeed";
}

template<>
struct has_fixed_size<qi_unipa_msgs::msg::PostureWithSpeed>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<qi_unipa_msgs::msg::PostureWithSpeed>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<qi_unipa_msgs::msg::PostureWithSpeed>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // QI_UNIPA_MSGS__MSG__DETAIL__POSTURE_WITH_SPEED__TRAITS_HPP_
