// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from backscatter_movement_record_msgs_srvs:msg/OdomWithExpmtFlag.idl
// generated code does not contain a copyright notice

#ifndef BACKSCATTER_MOVEMENT_RECORD_MSGS_SRVS__MSG__DETAIL__ODOM_WITH_EXPMT_FLAG__TRAITS_HPP_
#define BACKSCATTER_MOVEMENT_RECORD_MSGS_SRVS__MSG__DETAIL__ODOM_WITH_EXPMT_FLAG__TRAITS_HPP_

#include "backscatter_movement_record_msgs_srvs/msg/detail/odom_with_expmt_flag__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'odom'
#include "nav_msgs/msg/detail/odometry__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<backscatter_movement_record_msgs_srvs::msg::OdomWithExpmtFlag>()
{
  return "backscatter_movement_record_msgs_srvs::msg::OdomWithExpmtFlag";
}

template<>
inline const char * name<backscatter_movement_record_msgs_srvs::msg::OdomWithExpmtFlag>()
{
  return "backscatter_movement_record_msgs_srvs/msg/OdomWithExpmtFlag";
}

template<>
struct has_fixed_size<backscatter_movement_record_msgs_srvs::msg::OdomWithExpmtFlag>
  : std::integral_constant<bool, has_fixed_size<nav_msgs::msg::Odometry>::value> {};

template<>
struct has_bounded_size<backscatter_movement_record_msgs_srvs::msg::OdomWithExpmtFlag>
  : std::integral_constant<bool, has_bounded_size<nav_msgs::msg::Odometry>::value> {};

template<>
struct is_message<backscatter_movement_record_msgs_srvs::msg::OdomWithExpmtFlag>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BACKSCATTER_MOVEMENT_RECORD_MSGS_SRVS__MSG__DETAIL__ODOM_WITH_EXPMT_FLAG__TRAITS_HPP_
