// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from naoqi_bridge_msgs:srv/CmdPoseService.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "naoqi_bridge_msgs/srv/detail/cmd_pose_service__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace naoqi_bridge_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _CmdPoseService_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CmdPoseService_Request_type_support_ids_t;

static const _CmdPoseService_Request_type_support_ids_t _CmdPoseService_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CmdPoseService_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CmdPoseService_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CmdPoseService_Request_type_support_symbol_names_t _CmdPoseService_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, naoqi_bridge_msgs, srv, CmdPoseService_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, naoqi_bridge_msgs, srv, CmdPoseService_Request)),
  }
};

typedef struct _CmdPoseService_Request_type_support_data_t
{
  void * data[2];
} _CmdPoseService_Request_type_support_data_t;

static _CmdPoseService_Request_type_support_data_t _CmdPoseService_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CmdPoseService_Request_message_typesupport_map = {
  2,
  "naoqi_bridge_msgs",
  &_CmdPoseService_Request_message_typesupport_ids.typesupport_identifier[0],
  &_CmdPoseService_Request_message_typesupport_symbol_names.symbol_name[0],
  &_CmdPoseService_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CmdPoseService_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CmdPoseService_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace naoqi_bridge_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<naoqi_bridge_msgs::srv::CmdPoseService_Request>()
{
  return &::naoqi_bridge_msgs::srv::rosidl_typesupport_cpp::CmdPoseService_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, naoqi_bridge_msgs, srv, CmdPoseService_Request)() {
  return get_message_type_support_handle<naoqi_bridge_msgs::srv::CmdPoseService_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "naoqi_bridge_msgs/srv/detail/cmd_pose_service__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace naoqi_bridge_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _CmdPoseService_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CmdPoseService_Response_type_support_ids_t;

static const _CmdPoseService_Response_type_support_ids_t _CmdPoseService_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CmdPoseService_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CmdPoseService_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CmdPoseService_Response_type_support_symbol_names_t _CmdPoseService_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, naoqi_bridge_msgs, srv, CmdPoseService_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, naoqi_bridge_msgs, srv, CmdPoseService_Response)),
  }
};

typedef struct _CmdPoseService_Response_type_support_data_t
{
  void * data[2];
} _CmdPoseService_Response_type_support_data_t;

static _CmdPoseService_Response_type_support_data_t _CmdPoseService_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CmdPoseService_Response_message_typesupport_map = {
  2,
  "naoqi_bridge_msgs",
  &_CmdPoseService_Response_message_typesupport_ids.typesupport_identifier[0],
  &_CmdPoseService_Response_message_typesupport_symbol_names.symbol_name[0],
  &_CmdPoseService_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CmdPoseService_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CmdPoseService_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace naoqi_bridge_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<naoqi_bridge_msgs::srv::CmdPoseService_Response>()
{
  return &::naoqi_bridge_msgs::srv::rosidl_typesupport_cpp::CmdPoseService_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, naoqi_bridge_msgs, srv, CmdPoseService_Response)() {
  return get_message_type_support_handle<naoqi_bridge_msgs::srv::CmdPoseService_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "naoqi_bridge_msgs/srv/detail/cmd_pose_service__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace naoqi_bridge_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _CmdPoseService_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CmdPoseService_type_support_ids_t;

static const _CmdPoseService_type_support_ids_t _CmdPoseService_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CmdPoseService_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CmdPoseService_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CmdPoseService_type_support_symbol_names_t _CmdPoseService_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, naoqi_bridge_msgs, srv, CmdPoseService)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, naoqi_bridge_msgs, srv, CmdPoseService)),
  }
};

typedef struct _CmdPoseService_type_support_data_t
{
  void * data[2];
} _CmdPoseService_type_support_data_t;

static _CmdPoseService_type_support_data_t _CmdPoseService_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CmdPoseService_service_typesupport_map = {
  2,
  "naoqi_bridge_msgs",
  &_CmdPoseService_service_typesupport_ids.typesupport_identifier[0],
  &_CmdPoseService_service_typesupport_symbol_names.symbol_name[0],
  &_CmdPoseService_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t CmdPoseService_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CmdPoseService_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace naoqi_bridge_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<naoqi_bridge_msgs::srv::CmdPoseService>()
{
  return &::naoqi_bridge_msgs::srv::rosidl_typesupport_cpp::CmdPoseService_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
