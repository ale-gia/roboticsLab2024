// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from naoqi_bridge_msgs:srv/GetFacesROI.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__SRV__DETAIL__GET_FACES_ROI__TRAITS_HPP_
#define NAOQI_BRIDGE_MSGS__SRV__DETAIL__GET_FACES_ROI__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "naoqi_bridge_msgs/srv/detail/get_faces_roi__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace naoqi_bridge_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetFacesROI_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetFacesROI_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetFacesROI_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace naoqi_bridge_msgs

namespace rosidl_generator_traits
{

[[deprecated("use naoqi_bridge_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const naoqi_bridge_msgs::srv::GetFacesROI_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  naoqi_bridge_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use naoqi_bridge_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const naoqi_bridge_msgs::srv::GetFacesROI_Request & msg)
{
  return naoqi_bridge_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<naoqi_bridge_msgs::srv::GetFacesROI_Request>()
{
  return "naoqi_bridge_msgs::srv::GetFacesROI_Request";
}

template<>
inline const char * name<naoqi_bridge_msgs::srv::GetFacesROI_Request>()
{
  return "naoqi_bridge_msgs/srv/GetFacesROI_Request";
}

template<>
struct has_fixed_size<naoqi_bridge_msgs::srv::GetFacesROI_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<naoqi_bridge_msgs::srv::GetFacesROI_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<naoqi_bridge_msgs::srv::GetFacesROI_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'faces'
#include "naoqi_bridge_msgs/msg/detail/face_roi__traits.hpp"

namespace naoqi_bridge_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetFacesROI_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: faces
  {
    if (msg.faces.size() == 0) {
      out << "faces: []";
    } else {
      out << "faces: [";
      size_t pending_items = msg.faces.size();
      for (auto item : msg.faces) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetFacesROI_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: faces
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.faces.size() == 0) {
      out << "faces: []\n";
    } else {
      out << "faces:\n";
      for (auto item : msg.faces) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetFacesROI_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace naoqi_bridge_msgs

namespace rosidl_generator_traits
{

[[deprecated("use naoqi_bridge_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const naoqi_bridge_msgs::srv::GetFacesROI_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  naoqi_bridge_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use naoqi_bridge_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const naoqi_bridge_msgs::srv::GetFacesROI_Response & msg)
{
  return naoqi_bridge_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<naoqi_bridge_msgs::srv::GetFacesROI_Response>()
{
  return "naoqi_bridge_msgs::srv::GetFacesROI_Response";
}

template<>
inline const char * name<naoqi_bridge_msgs::srv::GetFacesROI_Response>()
{
  return "naoqi_bridge_msgs/srv/GetFacesROI_Response";
}

template<>
struct has_fixed_size<naoqi_bridge_msgs::srv::GetFacesROI_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<naoqi_bridge_msgs::srv::GetFacesROI_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<naoqi_bridge_msgs::srv::GetFacesROI_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<naoqi_bridge_msgs::srv::GetFacesROI>()
{
  return "naoqi_bridge_msgs::srv::GetFacesROI";
}

template<>
inline const char * name<naoqi_bridge_msgs::srv::GetFacesROI>()
{
  return "naoqi_bridge_msgs/srv/GetFacesROI";
}

template<>
struct has_fixed_size<naoqi_bridge_msgs::srv::GetFacesROI>
  : std::integral_constant<
    bool,
    has_fixed_size<naoqi_bridge_msgs::srv::GetFacesROI_Request>::value &&
    has_fixed_size<naoqi_bridge_msgs::srv::GetFacesROI_Response>::value
  >
{
};

template<>
struct has_bounded_size<naoqi_bridge_msgs::srv::GetFacesROI>
  : std::integral_constant<
    bool,
    has_bounded_size<naoqi_bridge_msgs::srv::GetFacesROI_Request>::value &&
    has_bounded_size<naoqi_bridge_msgs::srv::GetFacesROI_Response>::value
  >
{
};

template<>
struct is_service<naoqi_bridge_msgs::srv::GetFacesROI>
  : std::true_type
{
};

template<>
struct is_service_request<naoqi_bridge_msgs::srv::GetFacesROI_Request>
  : std::true_type
{
};

template<>
struct is_service_response<naoqi_bridge_msgs::srv::GetFacesROI_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // NAOQI_BRIDGE_MSGS__SRV__DETAIL__GET_FACES_ROI__TRAITS_HPP_
