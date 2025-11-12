// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from backscatter_movement_record_msgs_srvs:msg/OdomWithExpmtFlag.idl
// generated code does not contain a copyright notice

#ifndef BACKSCATTER_MOVEMENT_RECORD_MSGS_SRVS__MSG__DETAIL__ODOM_WITH_EXPMT_FLAG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define BACKSCATTER_MOVEMENT_RECORD_MSGS_SRVS__MSG__DETAIL__ODOM_WITH_EXPMT_FLAG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "backscatter_movement_record_msgs_srvs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "backscatter_movement_record_msgs_srvs/msg/detail/odom_with_expmt_flag__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace backscatter_movement_record_msgs_srvs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_backscatter_movement_record_msgs_srvs
cdr_serialize(
  const backscatter_movement_record_msgs_srvs::msg::OdomWithExpmtFlag & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_backscatter_movement_record_msgs_srvs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  backscatter_movement_record_msgs_srvs::msg::OdomWithExpmtFlag & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_backscatter_movement_record_msgs_srvs
get_serialized_size(
  const backscatter_movement_record_msgs_srvs::msg::OdomWithExpmtFlag & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_backscatter_movement_record_msgs_srvs
max_serialized_size_OdomWithExpmtFlag(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace backscatter_movement_record_msgs_srvs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_backscatter_movement_record_msgs_srvs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, backscatter_movement_record_msgs_srvs, msg, OdomWithExpmtFlag)();

#ifdef __cplusplus
}
#endif

#endif  // BACKSCATTER_MOVEMENT_RECORD_MSGS_SRVS__MSG__DETAIL__ODOM_WITH_EXPMT_FLAG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
