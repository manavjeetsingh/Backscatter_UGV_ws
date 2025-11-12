// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from slam_msgs:msg/SlamInfo.idl
// generated code does not contain a copyright notice

#ifndef SLAM_MSGS__MSG__DETAIL__SLAM_INFO__TRAITS_HPP_
#define SLAM_MSGS__MSG__DETAIL__SLAM_INFO__TRAITS_HPP_

#include "slam_msgs/msg/detail/slam_info__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<slam_msgs::msg::SlamInfo>()
{
  return "slam_msgs::msg::SlamInfo";
}

template<>
inline const char * name<slam_msgs::msg::SlamInfo>()
{
  return "slam_msgs/msg/SlamInfo";
}

template<>
struct has_fixed_size<slam_msgs::msg::SlamInfo>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<slam_msgs::msg::SlamInfo>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<slam_msgs::msg::SlamInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SLAM_MSGS__MSG__DETAIL__SLAM_INFO__TRAITS_HPP_
