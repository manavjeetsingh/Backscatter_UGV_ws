// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from slam_msgs:srv/GetLandmarksInView.idl
// generated code does not contain a copyright notice

#ifndef SLAM_MSGS__SRV__DETAIL__GET_LANDMARKS_IN_VIEW__TRAITS_HPP_
#define SLAM_MSGS__SRV__DETAIL__GET_LANDMARKS_IN_VIEW__TRAITS_HPP_

#include "slam_msgs/srv/detail/get_landmarks_in_view__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<slam_msgs::srv::GetLandmarksInView_Request>()
{
  return "slam_msgs::srv::GetLandmarksInView_Request";
}

template<>
inline const char * name<slam_msgs::srv::GetLandmarksInView_Request>()
{
  return "slam_msgs/srv/GetLandmarksInView_Request";
}

template<>
struct has_fixed_size<slam_msgs::srv::GetLandmarksInView_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<slam_msgs::srv::GetLandmarksInView_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<slam_msgs::srv::GetLandmarksInView_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<slam_msgs::srv::GetLandmarksInView_Response>()
{
  return "slam_msgs::srv::GetLandmarksInView_Response";
}

template<>
inline const char * name<slam_msgs::srv::GetLandmarksInView_Response>()
{
  return "slam_msgs/srv/GetLandmarksInView_Response";
}

template<>
struct has_fixed_size<slam_msgs::srv::GetLandmarksInView_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<slam_msgs::srv::GetLandmarksInView_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<slam_msgs::srv::GetLandmarksInView_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<slam_msgs::srv::GetLandmarksInView>()
{
  return "slam_msgs::srv::GetLandmarksInView";
}

template<>
inline const char * name<slam_msgs::srv::GetLandmarksInView>()
{
  return "slam_msgs/srv/GetLandmarksInView";
}

template<>
struct has_fixed_size<slam_msgs::srv::GetLandmarksInView>
  : std::integral_constant<
    bool,
    has_fixed_size<slam_msgs::srv::GetLandmarksInView_Request>::value &&
    has_fixed_size<slam_msgs::srv::GetLandmarksInView_Response>::value
  >
{
};

template<>
struct has_bounded_size<slam_msgs::srv::GetLandmarksInView>
  : std::integral_constant<
    bool,
    has_bounded_size<slam_msgs::srv::GetLandmarksInView_Request>::value &&
    has_bounded_size<slam_msgs::srv::GetLandmarksInView_Response>::value
  >
{
};

template<>
struct is_service<slam_msgs::srv::GetLandmarksInView>
  : std::true_type
{
};

template<>
struct is_service_request<slam_msgs::srv::GetLandmarksInView_Request>
  : std::true_type
{
};

template<>
struct is_service_response<slam_msgs::srv::GetLandmarksInView_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SLAM_MSGS__SRV__DETAIL__GET_LANDMARKS_IN_VIEW__TRAITS_HPP_
