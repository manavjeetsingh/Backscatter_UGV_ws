// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from backscatter_movement_record_msgs_srvs:srv/OdomRecord.idl
// generated code does not contain a copyright notice

#ifndef BACKSCATTER_MOVEMENT_RECORD_MSGS_SRVS__SRV__DETAIL__ODOM_RECORD__TRAITS_HPP_
#define BACKSCATTER_MOVEMENT_RECORD_MSGS_SRVS__SRV__DETAIL__ODOM_RECORD__TRAITS_HPP_

#include "backscatter_movement_record_msgs_srvs/srv/detail/odom_record__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<backscatter_movement_record_msgs_srvs::srv::OdomRecord_Request>()
{
  return "backscatter_movement_record_msgs_srvs::srv::OdomRecord_Request";
}

template<>
inline const char * name<backscatter_movement_record_msgs_srvs::srv::OdomRecord_Request>()
{
  return "backscatter_movement_record_msgs_srvs/srv/OdomRecord_Request";
}

template<>
struct has_fixed_size<backscatter_movement_record_msgs_srvs::srv::OdomRecord_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<backscatter_movement_record_msgs_srvs::srv::OdomRecord_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<backscatter_movement_record_msgs_srvs::srv::OdomRecord_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<backscatter_movement_record_msgs_srvs::srv::OdomRecord_Response>()
{
  return "backscatter_movement_record_msgs_srvs::srv::OdomRecord_Response";
}

template<>
inline const char * name<backscatter_movement_record_msgs_srvs::srv::OdomRecord_Response>()
{
  return "backscatter_movement_record_msgs_srvs/srv/OdomRecord_Response";
}

template<>
struct has_fixed_size<backscatter_movement_record_msgs_srvs::srv::OdomRecord_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<backscatter_movement_record_msgs_srvs::srv::OdomRecord_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<backscatter_movement_record_msgs_srvs::srv::OdomRecord_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<backscatter_movement_record_msgs_srvs::srv::OdomRecord>()
{
  return "backscatter_movement_record_msgs_srvs::srv::OdomRecord";
}

template<>
inline const char * name<backscatter_movement_record_msgs_srvs::srv::OdomRecord>()
{
  return "backscatter_movement_record_msgs_srvs/srv/OdomRecord";
}

template<>
struct has_fixed_size<backscatter_movement_record_msgs_srvs::srv::OdomRecord>
  : std::integral_constant<
    bool,
    has_fixed_size<backscatter_movement_record_msgs_srvs::srv::OdomRecord_Request>::value &&
    has_fixed_size<backscatter_movement_record_msgs_srvs::srv::OdomRecord_Response>::value
  >
{
};

template<>
struct has_bounded_size<backscatter_movement_record_msgs_srvs::srv::OdomRecord>
  : std::integral_constant<
    bool,
    has_bounded_size<backscatter_movement_record_msgs_srvs::srv::OdomRecord_Request>::value &&
    has_bounded_size<backscatter_movement_record_msgs_srvs::srv::OdomRecord_Response>::value
  >
{
};

template<>
struct is_service<backscatter_movement_record_msgs_srvs::srv::OdomRecord>
  : std::true_type
{
};

template<>
struct is_service_request<backscatter_movement_record_msgs_srvs::srv::OdomRecord_Request>
  : std::true_type
{
};

template<>
struct is_service_response<backscatter_movement_record_msgs_srvs::srv::OdomRecord_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // BACKSCATTER_MOVEMENT_RECORD_MSGS_SRVS__SRV__DETAIL__ODOM_RECORD__TRAITS_HPP_
