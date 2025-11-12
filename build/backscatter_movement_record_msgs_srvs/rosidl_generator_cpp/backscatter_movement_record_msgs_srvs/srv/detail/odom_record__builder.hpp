// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from backscatter_movement_record_msgs_srvs:srv/OdomRecord.idl
// generated code does not contain a copyright notice

#ifndef BACKSCATTER_MOVEMENT_RECORD_MSGS_SRVS__SRV__DETAIL__ODOM_RECORD__BUILDER_HPP_
#define BACKSCATTER_MOVEMENT_RECORD_MSGS_SRVS__SRV__DETAIL__ODOM_RECORD__BUILDER_HPP_

#include "backscatter_movement_record_msgs_srvs/srv/detail/odom_record__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace backscatter_movement_record_msgs_srvs
{

namespace srv
{

namespace builder
{

class Init_OdomRecord_Request_backscatter_expmt_flag
{
public:
  explicit Init_OdomRecord_Request_backscatter_expmt_flag(::backscatter_movement_record_msgs_srvs::srv::OdomRecord_Request & msg)
  : msg_(msg)
  {}
  ::backscatter_movement_record_msgs_srvs::srv::OdomRecord_Request backscatter_expmt_flag(::backscatter_movement_record_msgs_srvs::srv::OdomRecord_Request::_backscatter_expmt_flag_type arg)
  {
    msg_.backscatter_expmt_flag = std::move(arg);
    return std::move(msg_);
  }

private:
  ::backscatter_movement_record_msgs_srvs::srv::OdomRecord_Request msg_;
};

class Init_OdomRecord_Request_expmt_name
{
public:
  explicit Init_OdomRecord_Request_expmt_name(::backscatter_movement_record_msgs_srvs::srv::OdomRecord_Request & msg)
  : msg_(msg)
  {}
  Init_OdomRecord_Request_backscatter_expmt_flag expmt_name(::backscatter_movement_record_msgs_srvs::srv::OdomRecord_Request::_expmt_name_type arg)
  {
    msg_.expmt_name = std::move(arg);
    return Init_OdomRecord_Request_backscatter_expmt_flag(msg_);
  }

private:
  ::backscatter_movement_record_msgs_srvs::srv::OdomRecord_Request msg_;
};

class Init_OdomRecord_Request_req
{
public:
  Init_OdomRecord_Request_req()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OdomRecord_Request_expmt_name req(::backscatter_movement_record_msgs_srvs::srv::OdomRecord_Request::_req_type arg)
  {
    msg_.req = std::move(arg);
    return Init_OdomRecord_Request_expmt_name(msg_);
  }

private:
  ::backscatter_movement_record_msgs_srvs::srv::OdomRecord_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::backscatter_movement_record_msgs_srvs::srv::OdomRecord_Request>()
{
  return backscatter_movement_record_msgs_srvs::srv::builder::Init_OdomRecord_Request_req();
}

}  // namespace backscatter_movement_record_msgs_srvs


namespace backscatter_movement_record_msgs_srvs
{

namespace srv
{

namespace builder
{

class Init_OdomRecord_Response_resp
{
public:
  Init_OdomRecord_Response_resp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::backscatter_movement_record_msgs_srvs::srv::OdomRecord_Response resp(::backscatter_movement_record_msgs_srvs::srv::OdomRecord_Response::_resp_type arg)
  {
    msg_.resp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::backscatter_movement_record_msgs_srvs::srv::OdomRecord_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::backscatter_movement_record_msgs_srvs::srv::OdomRecord_Response>()
{
  return backscatter_movement_record_msgs_srvs::srv::builder::Init_OdomRecord_Response_resp();
}

}  // namespace backscatter_movement_record_msgs_srvs

#endif  // BACKSCATTER_MOVEMENT_RECORD_MSGS_SRVS__SRV__DETAIL__ODOM_RECORD__BUILDER_HPP_
