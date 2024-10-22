// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from naoqi_bridge_msgs:action/Blink.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__ACTION__DETAIL__BLINK__TRAITS_HPP_
#define NAOQI_BRIDGE_MSGS__ACTION__DETAIL__BLINK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "naoqi_bridge_msgs/action/detail/blink__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'colors'
// Member 'bg_color'
#include "std_msgs/msg/detail/color_rgba__traits.hpp"
// Member 'blink_duration'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace naoqi_bridge_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Blink_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: colors
  {
    if (msg.colors.size() == 0) {
      out << "colors: []";
    } else {
      out << "colors: [";
      size_t pending_items = msg.colors.size();
      for (auto item : msg.colors) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: bg_color
  {
    out << "bg_color: ";
    to_flow_style_yaml(msg.bg_color, out);
    out << ", ";
  }

  // member: blink_duration
  {
    out << "blink_duration: ";
    to_flow_style_yaml(msg.blink_duration, out);
    out << ", ";
  }

  // member: blink_rate_mean
  {
    out << "blink_rate_mean: ";
    rosidl_generator_traits::value_to_yaml(msg.blink_rate_mean, out);
    out << ", ";
  }

  // member: blink_rate_sd
  {
    out << "blink_rate_sd: ";
    rosidl_generator_traits::value_to_yaml(msg.blink_rate_sd, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Blink_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: colors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.colors.size() == 0) {
      out << "colors: []\n";
    } else {
      out << "colors:\n";
      for (auto item : msg.colors) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: bg_color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bg_color:\n";
    to_block_style_yaml(msg.bg_color, out, indentation + 2);
  }

  // member: blink_duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blink_duration:\n";
    to_block_style_yaml(msg.blink_duration, out, indentation + 2);
  }

  // member: blink_rate_mean
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blink_rate_mean: ";
    rosidl_generator_traits::value_to_yaml(msg.blink_rate_mean, out);
    out << "\n";
  }

  // member: blink_rate_sd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blink_rate_sd: ";
    rosidl_generator_traits::value_to_yaml(msg.blink_rate_sd, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Blink_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace naoqi_bridge_msgs

namespace rosidl_generator_traits
{

[[deprecated("use naoqi_bridge_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const naoqi_bridge_msgs::action::Blink_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  naoqi_bridge_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use naoqi_bridge_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const naoqi_bridge_msgs::action::Blink_Goal & msg)
{
  return naoqi_bridge_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<naoqi_bridge_msgs::action::Blink_Goal>()
{
  return "naoqi_bridge_msgs::action::Blink_Goal";
}

template<>
inline const char * name<naoqi_bridge_msgs::action::Blink_Goal>()
{
  return "naoqi_bridge_msgs/action/Blink_Goal";
}

template<>
struct has_fixed_size<naoqi_bridge_msgs::action::Blink_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<naoqi_bridge_msgs::action::Blink_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<naoqi_bridge_msgs::action::Blink_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace naoqi_bridge_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Blink_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: still_blinking
  {
    out << "still_blinking: ";
    rosidl_generator_traits::value_to_yaml(msg.still_blinking, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Blink_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: still_blinking
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "still_blinking: ";
    rosidl_generator_traits::value_to_yaml(msg.still_blinking, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Blink_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace naoqi_bridge_msgs

namespace rosidl_generator_traits
{

[[deprecated("use naoqi_bridge_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const naoqi_bridge_msgs::action::Blink_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  naoqi_bridge_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use naoqi_bridge_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const naoqi_bridge_msgs::action::Blink_Result & msg)
{
  return naoqi_bridge_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<naoqi_bridge_msgs::action::Blink_Result>()
{
  return "naoqi_bridge_msgs::action::Blink_Result";
}

template<>
inline const char * name<naoqi_bridge_msgs::action::Blink_Result>()
{
  return "naoqi_bridge_msgs/action/Blink_Result";
}

template<>
struct has_fixed_size<naoqi_bridge_msgs::action::Blink_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<naoqi_bridge_msgs::action::Blink_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<naoqi_bridge_msgs::action::Blink_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'last_color'
// already included above
// #include "std_msgs/msg/detail/color_rgba__traits.hpp"

namespace naoqi_bridge_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Blink_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: last_color
  {
    out << "last_color: ";
    to_flow_style_yaml(msg.last_color, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Blink_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: last_color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_color:\n";
    to_block_style_yaml(msg.last_color, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Blink_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace naoqi_bridge_msgs

namespace rosidl_generator_traits
{

[[deprecated("use naoqi_bridge_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const naoqi_bridge_msgs::action::Blink_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  naoqi_bridge_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use naoqi_bridge_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const naoqi_bridge_msgs::action::Blink_Feedback & msg)
{
  return naoqi_bridge_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<naoqi_bridge_msgs::action::Blink_Feedback>()
{
  return "naoqi_bridge_msgs::action::Blink_Feedback";
}

template<>
inline const char * name<naoqi_bridge_msgs::action::Blink_Feedback>()
{
  return "naoqi_bridge_msgs/action/Blink_Feedback";
}

template<>
struct has_fixed_size<naoqi_bridge_msgs::action::Blink_Feedback>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::ColorRGBA>::value> {};

template<>
struct has_bounded_size<naoqi_bridge_msgs::action::Blink_Feedback>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::ColorRGBA>::value> {};

template<>
struct is_message<naoqi_bridge_msgs::action::Blink_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "naoqi_bridge_msgs/action/detail/blink__traits.hpp"

namespace naoqi_bridge_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Blink_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Blink_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Blink_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace naoqi_bridge_msgs

namespace rosidl_generator_traits
{

[[deprecated("use naoqi_bridge_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const naoqi_bridge_msgs::action::Blink_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  naoqi_bridge_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use naoqi_bridge_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const naoqi_bridge_msgs::action::Blink_SendGoal_Request & msg)
{
  return naoqi_bridge_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<naoqi_bridge_msgs::action::Blink_SendGoal_Request>()
{
  return "naoqi_bridge_msgs::action::Blink_SendGoal_Request";
}

template<>
inline const char * name<naoqi_bridge_msgs::action::Blink_SendGoal_Request>()
{
  return "naoqi_bridge_msgs/action/Blink_SendGoal_Request";
}

template<>
struct has_fixed_size<naoqi_bridge_msgs::action::Blink_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<naoqi_bridge_msgs::action::Blink_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<naoqi_bridge_msgs::action::Blink_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<naoqi_bridge_msgs::action::Blink_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<naoqi_bridge_msgs::action::Blink_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace naoqi_bridge_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Blink_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Blink_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Blink_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace naoqi_bridge_msgs

namespace rosidl_generator_traits
{

[[deprecated("use naoqi_bridge_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const naoqi_bridge_msgs::action::Blink_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  naoqi_bridge_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use naoqi_bridge_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const naoqi_bridge_msgs::action::Blink_SendGoal_Response & msg)
{
  return naoqi_bridge_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<naoqi_bridge_msgs::action::Blink_SendGoal_Response>()
{
  return "naoqi_bridge_msgs::action::Blink_SendGoal_Response";
}

template<>
inline const char * name<naoqi_bridge_msgs::action::Blink_SendGoal_Response>()
{
  return "naoqi_bridge_msgs/action/Blink_SendGoal_Response";
}

template<>
struct has_fixed_size<naoqi_bridge_msgs::action::Blink_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<naoqi_bridge_msgs::action::Blink_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<naoqi_bridge_msgs::action::Blink_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<naoqi_bridge_msgs::action::Blink_SendGoal>()
{
  return "naoqi_bridge_msgs::action::Blink_SendGoal";
}

template<>
inline const char * name<naoqi_bridge_msgs::action::Blink_SendGoal>()
{
  return "naoqi_bridge_msgs/action/Blink_SendGoal";
}

template<>
struct has_fixed_size<naoqi_bridge_msgs::action::Blink_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<naoqi_bridge_msgs::action::Blink_SendGoal_Request>::value &&
    has_fixed_size<naoqi_bridge_msgs::action::Blink_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<naoqi_bridge_msgs::action::Blink_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<naoqi_bridge_msgs::action::Blink_SendGoal_Request>::value &&
    has_bounded_size<naoqi_bridge_msgs::action::Blink_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<naoqi_bridge_msgs::action::Blink_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<naoqi_bridge_msgs::action::Blink_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<naoqi_bridge_msgs::action::Blink_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace naoqi_bridge_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Blink_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Blink_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Blink_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace naoqi_bridge_msgs

namespace rosidl_generator_traits
{

[[deprecated("use naoqi_bridge_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const naoqi_bridge_msgs::action::Blink_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  naoqi_bridge_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use naoqi_bridge_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const naoqi_bridge_msgs::action::Blink_GetResult_Request & msg)
{
  return naoqi_bridge_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<naoqi_bridge_msgs::action::Blink_GetResult_Request>()
{
  return "naoqi_bridge_msgs::action::Blink_GetResult_Request";
}

template<>
inline const char * name<naoqi_bridge_msgs::action::Blink_GetResult_Request>()
{
  return "naoqi_bridge_msgs/action/Blink_GetResult_Request";
}

template<>
struct has_fixed_size<naoqi_bridge_msgs::action::Blink_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<naoqi_bridge_msgs::action::Blink_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<naoqi_bridge_msgs::action::Blink_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "naoqi_bridge_msgs/action/detail/blink__traits.hpp"

namespace naoqi_bridge_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Blink_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Blink_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Blink_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace naoqi_bridge_msgs

namespace rosidl_generator_traits
{

[[deprecated("use naoqi_bridge_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const naoqi_bridge_msgs::action::Blink_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  naoqi_bridge_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use naoqi_bridge_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const naoqi_bridge_msgs::action::Blink_GetResult_Response & msg)
{
  return naoqi_bridge_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<naoqi_bridge_msgs::action::Blink_GetResult_Response>()
{
  return "naoqi_bridge_msgs::action::Blink_GetResult_Response";
}

template<>
inline const char * name<naoqi_bridge_msgs::action::Blink_GetResult_Response>()
{
  return "naoqi_bridge_msgs/action/Blink_GetResult_Response";
}

template<>
struct has_fixed_size<naoqi_bridge_msgs::action::Blink_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<naoqi_bridge_msgs::action::Blink_Result>::value> {};

template<>
struct has_bounded_size<naoqi_bridge_msgs::action::Blink_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<naoqi_bridge_msgs::action::Blink_Result>::value> {};

template<>
struct is_message<naoqi_bridge_msgs::action::Blink_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<naoqi_bridge_msgs::action::Blink_GetResult>()
{
  return "naoqi_bridge_msgs::action::Blink_GetResult";
}

template<>
inline const char * name<naoqi_bridge_msgs::action::Blink_GetResult>()
{
  return "naoqi_bridge_msgs/action/Blink_GetResult";
}

template<>
struct has_fixed_size<naoqi_bridge_msgs::action::Blink_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<naoqi_bridge_msgs::action::Blink_GetResult_Request>::value &&
    has_fixed_size<naoqi_bridge_msgs::action::Blink_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<naoqi_bridge_msgs::action::Blink_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<naoqi_bridge_msgs::action::Blink_GetResult_Request>::value &&
    has_bounded_size<naoqi_bridge_msgs::action::Blink_GetResult_Response>::value
  >
{
};

template<>
struct is_service<naoqi_bridge_msgs::action::Blink_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<naoqi_bridge_msgs::action::Blink_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<naoqi_bridge_msgs::action::Blink_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "naoqi_bridge_msgs/action/detail/blink__traits.hpp"

namespace naoqi_bridge_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Blink_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Blink_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Blink_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace naoqi_bridge_msgs

namespace rosidl_generator_traits
{

[[deprecated("use naoqi_bridge_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const naoqi_bridge_msgs::action::Blink_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  naoqi_bridge_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use naoqi_bridge_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const naoqi_bridge_msgs::action::Blink_FeedbackMessage & msg)
{
  return naoqi_bridge_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<naoqi_bridge_msgs::action::Blink_FeedbackMessage>()
{
  return "naoqi_bridge_msgs::action::Blink_FeedbackMessage";
}

template<>
inline const char * name<naoqi_bridge_msgs::action::Blink_FeedbackMessage>()
{
  return "naoqi_bridge_msgs/action/Blink_FeedbackMessage";
}

template<>
struct has_fixed_size<naoqi_bridge_msgs::action::Blink_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<naoqi_bridge_msgs::action::Blink_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<naoqi_bridge_msgs::action::Blink_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<naoqi_bridge_msgs::action::Blink_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<naoqi_bridge_msgs::action::Blink_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<naoqi_bridge_msgs::action::Blink>
  : std::true_type
{
};

template<>
struct is_action_goal<naoqi_bridge_msgs::action::Blink_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<naoqi_bridge_msgs::action::Blink_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<naoqi_bridge_msgs::action::Blink_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // NAOQI_BRIDGE_MSGS__ACTION__DETAIL__BLINK__TRAITS_HPP_
