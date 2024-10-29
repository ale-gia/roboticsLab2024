// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from naoqi_bridge_msgs:msg/SoundLocated.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__MSG__DETAIL__SOUND_LOCATED__BUILDER_HPP_
#define NAOQI_BRIDGE_MSGS__MSG__DETAIL__SOUND_LOCATED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "naoqi_bridge_msgs/msg/detail/sound_located__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace naoqi_bridge_msgs
{

namespace msg
{

namespace builder
{

class Init_SoundLocated_head_position_frame_robot
{
public:
  explicit Init_SoundLocated_head_position_frame_robot(::naoqi_bridge_msgs::msg::SoundLocated & msg)
  : msg_(msg)
  {}
  ::naoqi_bridge_msgs::msg::SoundLocated head_position_frame_robot(::naoqi_bridge_msgs::msg::SoundLocated::_head_position_frame_robot_type arg)
  {
    msg_.head_position_frame_robot = std::move(arg);
    return std::move(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::SoundLocated msg_;
};

class Init_SoundLocated_head_position_frame_torso
{
public:
  explicit Init_SoundLocated_head_position_frame_torso(::naoqi_bridge_msgs::msg::SoundLocated & msg)
  : msg_(msg)
  {}
  Init_SoundLocated_head_position_frame_robot head_position_frame_torso(::naoqi_bridge_msgs::msg::SoundLocated::_head_position_frame_torso_type arg)
  {
    msg_.head_position_frame_torso = std::move(arg);
    return Init_SoundLocated_head_position_frame_robot(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::SoundLocated msg_;
};

class Init_SoundLocated_energy
{
public:
  explicit Init_SoundLocated_energy(::naoqi_bridge_msgs::msg::SoundLocated & msg)
  : msg_(msg)
  {}
  Init_SoundLocated_head_position_frame_torso energy(::naoqi_bridge_msgs::msg::SoundLocated::_energy_type arg)
  {
    msg_.energy = std::move(arg);
    return Init_SoundLocated_head_position_frame_torso(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::SoundLocated msg_;
};

class Init_SoundLocated_confidence
{
public:
  explicit Init_SoundLocated_confidence(::naoqi_bridge_msgs::msg::SoundLocated & msg)
  : msg_(msg)
  {}
  Init_SoundLocated_energy confidence(::naoqi_bridge_msgs::msg::SoundLocated::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_SoundLocated_energy(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::SoundLocated msg_;
};

class Init_SoundLocated_elevation
{
public:
  explicit Init_SoundLocated_elevation(::naoqi_bridge_msgs::msg::SoundLocated & msg)
  : msg_(msg)
  {}
  Init_SoundLocated_confidence elevation(::naoqi_bridge_msgs::msg::SoundLocated::_elevation_type arg)
  {
    msg_.elevation = std::move(arg);
    return Init_SoundLocated_confidence(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::SoundLocated msg_;
};

class Init_SoundLocated_azimuth
{
public:
  explicit Init_SoundLocated_azimuth(::naoqi_bridge_msgs::msg::SoundLocated & msg)
  : msg_(msg)
  {}
  Init_SoundLocated_elevation azimuth(::naoqi_bridge_msgs::msg::SoundLocated::_azimuth_type arg)
  {
    msg_.azimuth = std::move(arg);
    return Init_SoundLocated_elevation(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::SoundLocated msg_;
};

class Init_SoundLocated_header
{
public:
  Init_SoundLocated_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SoundLocated_azimuth header(::naoqi_bridge_msgs::msg::SoundLocated::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SoundLocated_azimuth(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::SoundLocated msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::naoqi_bridge_msgs::msg::SoundLocated>()
{
  return naoqi_bridge_msgs::msg::builder::Init_SoundLocated_header();
}

}  // namespace naoqi_bridge_msgs

#endif  // NAOQI_BRIDGE_MSGS__MSG__DETAIL__SOUND_LOCATED__BUILDER_HPP_
