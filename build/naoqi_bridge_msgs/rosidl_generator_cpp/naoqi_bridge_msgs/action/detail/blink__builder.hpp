// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from naoqi_bridge_msgs:action/Blink.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__ACTION__DETAIL__BLINK__BUILDER_HPP_
#define NAOQI_BRIDGE_MSGS__ACTION__DETAIL__BLINK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "naoqi_bridge_msgs/action/detail/blink__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace naoqi_bridge_msgs
{

namespace action
{

namespace builder
{

class Init_Blink_Goal_blink_rate_sd
{
public:
  explicit Init_Blink_Goal_blink_rate_sd(::naoqi_bridge_msgs::action::Blink_Goal & msg)
  : msg_(msg)
  {}
  ::naoqi_bridge_msgs::action::Blink_Goal blink_rate_sd(::naoqi_bridge_msgs::action::Blink_Goal::_blink_rate_sd_type arg)
  {
    msg_.blink_rate_sd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::naoqi_bridge_msgs::action::Blink_Goal msg_;
};

class Init_Blink_Goal_blink_rate_mean
{
public:
  explicit Init_Blink_Goal_blink_rate_mean(::naoqi_bridge_msgs::action::Blink_Goal & msg)
  : msg_(msg)
  {}
  Init_Blink_Goal_blink_rate_sd blink_rate_mean(::naoqi_bridge_msgs::action::Blink_Goal::_blink_rate_mean_type arg)
  {
    msg_.blink_rate_mean = std::move(arg);
    return Init_Blink_Goal_blink_rate_sd(msg_);
  }

private:
  ::naoqi_bridge_msgs::action::Blink_Goal msg_;
};

class Init_Blink_Goal_blink_duration
{
public:
  explicit Init_Blink_Goal_blink_duration(::naoqi_bridge_msgs::action::Blink_Goal & msg)
  : msg_(msg)
  {}
  Init_Blink_Goal_blink_rate_mean blink_duration(::naoqi_bridge_msgs::action::Blink_Goal::_blink_duration_type arg)
  {
    msg_.blink_duration = std::move(arg);
    return Init_Blink_Goal_blink_rate_mean(msg_);
  }

private:
  ::naoqi_bridge_msgs::action::Blink_Goal msg_;
};

class Init_Blink_Goal_bg_color
{
public:
  explicit Init_Blink_Goal_bg_color(::naoqi_bridge_msgs::action::Blink_Goal & msg)
  : msg_(msg)
  {}
  Init_Blink_Goal_blink_duration bg_color(::naoqi_bridge_msgs::action::Blink_Goal::_bg_color_type arg)
  {
    msg_.bg_color = std::move(arg);
    return Init_Blink_Goal_blink_duration(msg_);
  }

private:
  ::naoqi_bridge_msgs::action::Blink_Goal msg_;
};

class Init_Blink_Goal_colors
{
public:
  Init_Blink_Goal_colors()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Blink_Goal_bg_color colors(::naoqi_bridge_msgs::action::Blink_Goal::_colors_type arg)
  {
    msg_.colors = std::move(arg);
    return Init_Blink_Goal_bg_color(msg_);
  }

private:
  ::naoqi_bridge_msgs::action::Blink_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::naoqi_bridge_msgs::action::Blink_Goal>()
{
  return naoqi_bridge_msgs::action::builder::Init_Blink_Goal_colors();
}

}  // namespace naoqi_bridge_msgs


namespace naoqi_bridge_msgs
{

namespace action
{

namespace builder
{

class Init_Blink_Result_still_blinking
{
public:
  Init_Blink_Result_still_blinking()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::naoqi_bridge_msgs::action::Blink_Result still_blinking(::naoqi_bridge_msgs::action::Blink_Result::_still_blinking_type arg)
  {
    msg_.still_blinking = std::move(arg);
    return std::move(msg_);
  }

private:
  ::naoqi_bridge_msgs::action::Blink_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::naoqi_bridge_msgs::action::Blink_Result>()
{
  return naoqi_bridge_msgs::action::builder::Init_Blink_Result_still_blinking();
}

}  // namespace naoqi_bridge_msgs


namespace naoqi_bridge_msgs
{

namespace action
{

namespace builder
{

class Init_Blink_Feedback_last_color
{
public:
  Init_Blink_Feedback_last_color()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::naoqi_bridge_msgs::action::Blink_Feedback last_color(::naoqi_bridge_msgs::action::Blink_Feedback::_last_color_type arg)
  {
    msg_.last_color = std::move(arg);
    return std::move(msg_);
  }

private:
  ::naoqi_bridge_msgs::action::Blink_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::naoqi_bridge_msgs::action::Blink_Feedback>()
{
  return naoqi_bridge_msgs::action::builder::Init_Blink_Feedback_last_color();
}

}  // namespace naoqi_bridge_msgs


namespace naoqi_bridge_msgs
{

namespace action
{

namespace builder
{

class Init_Blink_SendGoal_Request_goal
{
public:
  explicit Init_Blink_SendGoal_Request_goal(::naoqi_bridge_msgs::action::Blink_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::naoqi_bridge_msgs::action::Blink_SendGoal_Request goal(::naoqi_bridge_msgs::action::Blink_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::naoqi_bridge_msgs::action::Blink_SendGoal_Request msg_;
};

class Init_Blink_SendGoal_Request_goal_id
{
public:
  Init_Blink_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Blink_SendGoal_Request_goal goal_id(::naoqi_bridge_msgs::action::Blink_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Blink_SendGoal_Request_goal(msg_);
  }

private:
  ::naoqi_bridge_msgs::action::Blink_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::naoqi_bridge_msgs::action::Blink_SendGoal_Request>()
{
  return naoqi_bridge_msgs::action::builder::Init_Blink_SendGoal_Request_goal_id();
}

}  // namespace naoqi_bridge_msgs


namespace naoqi_bridge_msgs
{

namespace action
{

namespace builder
{

class Init_Blink_SendGoal_Response_stamp
{
public:
  explicit Init_Blink_SendGoal_Response_stamp(::naoqi_bridge_msgs::action::Blink_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::naoqi_bridge_msgs::action::Blink_SendGoal_Response stamp(::naoqi_bridge_msgs::action::Blink_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::naoqi_bridge_msgs::action::Blink_SendGoal_Response msg_;
};

class Init_Blink_SendGoal_Response_accepted
{
public:
  Init_Blink_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Blink_SendGoal_Response_stamp accepted(::naoqi_bridge_msgs::action::Blink_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Blink_SendGoal_Response_stamp(msg_);
  }

private:
  ::naoqi_bridge_msgs::action::Blink_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::naoqi_bridge_msgs::action::Blink_SendGoal_Response>()
{
  return naoqi_bridge_msgs::action::builder::Init_Blink_SendGoal_Response_accepted();
}

}  // namespace naoqi_bridge_msgs


namespace naoqi_bridge_msgs
{

namespace action
{

namespace builder
{

class Init_Blink_GetResult_Request_goal_id
{
public:
  Init_Blink_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::naoqi_bridge_msgs::action::Blink_GetResult_Request goal_id(::naoqi_bridge_msgs::action::Blink_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::naoqi_bridge_msgs::action::Blink_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::naoqi_bridge_msgs::action::Blink_GetResult_Request>()
{
  return naoqi_bridge_msgs::action::builder::Init_Blink_GetResult_Request_goal_id();
}

}  // namespace naoqi_bridge_msgs


namespace naoqi_bridge_msgs
{

namespace action
{

namespace builder
{

class Init_Blink_GetResult_Response_result
{
public:
  explicit Init_Blink_GetResult_Response_result(::naoqi_bridge_msgs::action::Blink_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::naoqi_bridge_msgs::action::Blink_GetResult_Response result(::naoqi_bridge_msgs::action::Blink_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::naoqi_bridge_msgs::action::Blink_GetResult_Response msg_;
};

class Init_Blink_GetResult_Response_status
{
public:
  Init_Blink_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Blink_GetResult_Response_result status(::naoqi_bridge_msgs::action::Blink_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Blink_GetResult_Response_result(msg_);
  }

private:
  ::naoqi_bridge_msgs::action::Blink_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::naoqi_bridge_msgs::action::Blink_GetResult_Response>()
{
  return naoqi_bridge_msgs::action::builder::Init_Blink_GetResult_Response_status();
}

}  // namespace naoqi_bridge_msgs


namespace naoqi_bridge_msgs
{

namespace action
{

namespace builder
{

class Init_Blink_FeedbackMessage_feedback
{
public:
  explicit Init_Blink_FeedbackMessage_feedback(::naoqi_bridge_msgs::action::Blink_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::naoqi_bridge_msgs::action::Blink_FeedbackMessage feedback(::naoqi_bridge_msgs::action::Blink_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::naoqi_bridge_msgs::action::Blink_FeedbackMessage msg_;
};

class Init_Blink_FeedbackMessage_goal_id
{
public:
  Init_Blink_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Blink_FeedbackMessage_feedback goal_id(::naoqi_bridge_msgs::action::Blink_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Blink_FeedbackMessage_feedback(msg_);
  }

private:
  ::naoqi_bridge_msgs::action::Blink_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::naoqi_bridge_msgs::action::Blink_FeedbackMessage>()
{
  return naoqi_bridge_msgs::action::builder::Init_Blink_FeedbackMessage_goal_id();
}

}  // namespace naoqi_bridge_msgs

#endif  // NAOQI_BRIDGE_MSGS__ACTION__DETAIL__BLINK__BUILDER_HPP_
