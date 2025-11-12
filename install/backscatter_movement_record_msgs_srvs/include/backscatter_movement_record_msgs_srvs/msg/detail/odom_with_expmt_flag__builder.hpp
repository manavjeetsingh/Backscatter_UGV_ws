// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from backscatter_movement_record_msgs_srvs:msg/OdomWithExpmtFlag.idl
// generated code does not contain a copyright notice

#ifndef BACKSCATTER_MOVEMENT_RECORD_MSGS_SRVS__MSG__DETAIL__ODOM_WITH_EXPMT_FLAG__BUILDER_HPP_
#define BACKSCATTER_MOVEMENT_RECORD_MSGS_SRVS__MSG__DETAIL__ODOM_WITH_EXPMT_FLAG__BUILDER_HPP_

#include "backscatter_movement_record_msgs_srvs/msg/detail/odom_with_expmt_flag__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace backscatter_movement_record_msgs_srvs
{

namespace msg
{

namespace builder
{

class Init_OdomWithExpmtFlag_expmt_flag
{
public:
  explicit Init_OdomWithExpmtFlag_expmt_flag(::backscatter_movement_record_msgs_srvs::msg::OdomWithExpmtFlag & msg)
  : msg_(msg)
  {}
  ::backscatter_movement_record_msgs_srvs::msg::OdomWithExpmtFlag expmt_flag(::backscatter_movement_record_msgs_srvs::msg::OdomWithExpmtFlag::_expmt_flag_type arg)
  {
    msg_.expmt_flag = std::move(arg);
    return std::move(msg_);
  }

private:
  ::backscatter_movement_record_msgs_srvs::msg::OdomWithExpmtFlag msg_;
};

class Init_OdomWithExpmtFlag_odom
{
public:
  Init_OdomWithExpmtFlag_odom()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OdomWithExpmtFlag_expmt_flag odom(::backscatter_movement_record_msgs_srvs::msg::OdomWithExpmtFlag::_odom_type arg)
  {
    msg_.odom = std::move(arg);
    return Init_OdomWithExpmtFlag_expmt_flag(msg_);
  }

private:
  ::backscatter_movement_record_msgs_srvs::msg::OdomWithExpmtFlag msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::backscatter_movement_record_msgs_srvs::msg::OdomWithExpmtFlag>()
{
  return backscatter_movement_record_msgs_srvs::msg::builder::Init_OdomWithExpmtFlag_odom();
}

}  // namespace backscatter_movement_record_msgs_srvs

#endif  // BACKSCATTER_MOVEMENT_RECORD_MSGS_SRVS__MSG__DETAIL__ODOM_WITH_EXPMT_FLAG__BUILDER_HPP_
