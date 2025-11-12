// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from backscatter_movement_record_msgs_srvs:srv/OdomRecord.idl
// generated code does not contain a copyright notice

#ifndef BACKSCATTER_MOVEMENT_RECORD_MSGS_SRVS__SRV__DETAIL__ODOM_RECORD__STRUCT_H_
#define BACKSCATTER_MOVEMENT_RECORD_MSGS_SRVS__SRV__DETAIL__ODOM_RECORD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'expmt_name'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/OdomRecord in the package backscatter_movement_record_msgs_srvs.
typedef struct backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request
{
  bool req;
  rosidl_runtime_c__String expmt_name;
  bool backscatter_expmt_flag;
} backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request;

// Struct for a sequence of backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request.
typedef struct backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request__Sequence
{
  backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/OdomRecord in the package backscatter_movement_record_msgs_srvs.
typedef struct backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response
{
  bool resp;
} backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response;

// Struct for a sequence of backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response.
typedef struct backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response__Sequence
{
  backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BACKSCATTER_MOVEMENT_RECORD_MSGS_SRVS__SRV__DETAIL__ODOM_RECORD__STRUCT_H_
