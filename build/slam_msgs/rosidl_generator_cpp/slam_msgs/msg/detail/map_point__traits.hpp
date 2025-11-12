// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from slam_msgs:msg/MapPoint.idl
// generated code does not contain a copyright notice

#ifndef SLAM_MSGS__MSG__DETAIL__MAP_POINT__TRAITS_HPP_
#define SLAM_MSGS__MSG__DETAIL__MAP_POINT__TRAITS_HPP_

#include "slam_msgs/msg/detail/map_point__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<slam_msgs::msg::MapPoint>()
{
  return "slam_msgs::msg::MapPoint";
}

template<>
inline const char * name<slam_msgs::msg::MapPoint>()
{
  return "slam_msgs/msg/MapPoint";
}

template<>
struct has_fixed_size<slam_msgs::msg::MapPoint>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<slam_msgs::msg::MapPoint>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<slam_msgs::msg::MapPoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SLAM_MSGS__MSG__DETAIL__MAP_POINT__TRAITS_HPP_
