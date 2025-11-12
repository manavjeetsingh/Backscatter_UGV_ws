// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from backscatter_movement_record_msgs_srvs:msg/OdomWithExpmtFlag.idl
// generated code does not contain a copyright notice

#ifndef BACKSCATTER_MOVEMENT_RECORD_MSGS_SRVS__MSG__DETAIL__ODOM_WITH_EXPMT_FLAG__STRUCT_H_
#define BACKSCATTER_MOVEMENT_RECORD_MSGS_SRVS__MSG__DETAIL__ODOM_WITH_EXPMT_FLAG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'odom'
#include "nav_msgs/msg/detail/odometry__struct.h"

// Struct defined in msg/OdomWithExpmtFlag in the package backscatter_movement_record_msgs_srvs.
typedef struct backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag
{
  nav_msgs__msg__Odometry odom;
  bool expmt_flag;
} backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag;

// Struct for a sequence of backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag.
typedef struct backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag__Sequence
{
  backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BACKSCATTER_MOVEMENT_RECORD_MSGS_SRVS__MSG__DETAIL__ODOM_WITH_EXPMT_FLAG__STRUCT_H_
