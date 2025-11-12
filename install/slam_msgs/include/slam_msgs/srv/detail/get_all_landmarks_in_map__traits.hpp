// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from slam_msgs:srv/GetAllLandmarksInMap.idl
// generated code does not contain a copyright notice

#ifndef SLAM_MSGS__SRV__DETAIL__GET_ALL_LANDMARKS_IN_MAP__TRAITS_HPP_
#define SLAM_MSGS__SRV__DETAIL__GET_ALL_LANDMARKS_IN_MAP__TRAITS_HPP_

#include "slam_msgs/srv/detail/get_all_landmarks_in_map__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<slam_msgs::srv::GetAllLandmarksInMap_Request>()
{
  return "slam_msgs::srv::GetAllLandmarksInMap_Request";
}

template<>
inline const char * name<slam_msgs::srv::GetAllLandmarksInMap_Request>()
{
  return "slam_msgs/srv/GetAllLandmarksInMap_Request";
}

template<>
struct has_fixed_size<slam_msgs::srv::GetAllLandmarksInMap_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<slam_msgs::srv::GetAllLandmarksInMap_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<slam_msgs::srv::GetAllLandmarksInMap_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'landmarks'
#include "sensor_msgs/msg/detail/point_cloud2__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<slam_msgs::srv::GetAllLandmarksInMap_Response>()
{
  return "slam_msgs::srv::GetAllLandmarksInMap_Response";
}

template<>
inline const char * name<slam_msgs::srv::GetAllLandmarksInMap_Response>()
{
  return "slam_msgs/srv/GetAllLandmarksInMap_Response";
}

template<>
struct has_fixed_size<slam_msgs::srv::GetAllLandmarksInMap_Response>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::PointCloud2>::value> {};

template<>
struct has_bounded_size<slam_msgs::srv::GetAllLandmarksInMap_Response>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::PointCloud2>::value> {};

template<>
struct is_message<slam_msgs::srv::GetAllLandmarksInMap_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<slam_msgs::srv::GetAllLandmarksInMap>()
{
  return "slam_msgs::srv::GetAllLandmarksInMap";
}

template<>
inline const char * name<slam_msgs::srv::GetAllLandmarksInMap>()
{
  return "slam_msgs/srv/GetAllLandmarksInMap";
}

template<>
struct has_fixed_size<slam_msgs::srv::GetAllLandmarksInMap>
  : std::integral_constant<
    bool,
    has_fixed_size<slam_msgs::srv::GetAllLandmarksInMap_Request>::value &&
    has_fixed_size<slam_msgs::srv::GetAllLandmarksInMap_Response>::value
  >
{
};

template<>
struct has_bounded_size<slam_msgs::srv::GetAllLandmarksInMap>
  : std::integral_constant<
    bool,
    has_bounded_size<slam_msgs::srv::GetAllLandmarksInMap_Request>::value &&
    has_bounded_size<slam_msgs::srv::GetAllLandmarksInMap_Response>::value
  >
{
};

template<>
struct is_service<slam_msgs::srv::GetAllLandmarksInMap>
  : std::true_type
{
};

template<>
struct is_service_request<slam_msgs::srv::GetAllLandmarksInMap_Request>
  : std::true_type
{
};

template<>
struct is_service_response<slam_msgs::srv::GetAllLandmarksInMap_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SLAM_MSGS__SRV__DETAIL__GET_ALL_LANDMARKS_IN_MAP__TRAITS_HPP_
