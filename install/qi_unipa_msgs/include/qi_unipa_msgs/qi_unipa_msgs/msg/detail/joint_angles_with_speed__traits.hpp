// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from qi_unipa_msgs:msg/JointAnglesWithSpeed.idl
// generated code does not contain a copyright notice

#ifndef QI_UNIPA_MSGS__MSG__DETAIL__JOINT_ANGLES_WITH_SPEED__TRAITS_HPP_
#define QI_UNIPA_MSGS__MSG__DETAIL__JOINT_ANGLES_WITH_SPEED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "qi_unipa_msgs/msg/detail/joint_angles_with_speed__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace qi_unipa_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const JointAnglesWithSpeed & msg,
  std::ostream & out)
{
  out << "{";
  // member: names
  {
    if (msg.names.size() == 0) {
      out << "names: []";
    } else {
      out << "names: [";
      size_t pending_items = msg.names.size();
      for (auto item : msg.names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: angles
  {
    if (msg.angles.size() == 0) {
      out << "angles: []";
    } else {
      out << "angles: [";
      size_t pending_items = msg.angles.size();
      for (auto item : msg.angles) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
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
  const JointAnglesWithSpeed & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.names.size() == 0) {
      out << "names: []\n";
    } else {
      out << "names:\n";
      for (auto item : msg.names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: angles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.angles.size() == 0) {
      out << "angles: []\n";
    } else {
      out << "angles:\n";
      for (auto item : msg.angles) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
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

inline std::string to_yaml(const JointAnglesWithSpeed & msg, bool use_flow_style = false)
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
  const qi_unipa_msgs::msg::JointAnglesWithSpeed & msg,
  std::ostream & out, size_t indentation = 0)
{
  qi_unipa_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use qi_unipa_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const qi_unipa_msgs::msg::JointAnglesWithSpeed & msg)
{
  return qi_unipa_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<qi_unipa_msgs::msg::JointAnglesWithSpeed>()
{
  return "qi_unipa_msgs::msg::JointAnglesWithSpeed";
}

template<>
inline const char * name<qi_unipa_msgs::msg::JointAnglesWithSpeed>()
{
  return "qi_unipa_msgs/msg/JointAnglesWithSpeed";
}

template<>
struct has_fixed_size<qi_unipa_msgs::msg::JointAnglesWithSpeed>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<qi_unipa_msgs::msg::JointAnglesWithSpeed>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<qi_unipa_msgs::msg::JointAnglesWithSpeed>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // QI_UNIPA_MSGS__MSG__DETAIL__JOINT_ANGLES_WITH_SPEED__TRAITS_HPP_
