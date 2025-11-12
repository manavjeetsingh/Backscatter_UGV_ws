// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from backscatter_movement_record_msgs_srvs:msg/OdomWithExpmtFlag.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "backscatter_movement_record_msgs_srvs/msg/detail/odom_with_expmt_flag__rosidl_typesupport_introspection_c.h"
#include "backscatter_movement_record_msgs_srvs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "backscatter_movement_record_msgs_srvs/msg/detail/odom_with_expmt_flag__functions.h"
#include "backscatter_movement_record_msgs_srvs/msg/detail/odom_with_expmt_flag__struct.h"


// Include directives for member types
// Member `odom`
#include "nav_msgs/msg/odometry.h"
// Member `odom`
#include "nav_msgs/msg/detail/odometry__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void OdomWithExpmtFlag__rosidl_typesupport_introspection_c__OdomWithExpmtFlag_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag__init(message_memory);
}

void OdomWithExpmtFlag__rosidl_typesupport_introspection_c__OdomWithExpmtFlag_fini_function(void * message_memory)
{
  backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember OdomWithExpmtFlag__rosidl_typesupport_introspection_c__OdomWithExpmtFlag_message_member_array[2] = {
  {
    "odom",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag, odom),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "expmt_flag",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag, expmt_flag),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers OdomWithExpmtFlag__rosidl_typesupport_introspection_c__OdomWithExpmtFlag_message_members = {
  "backscatter_movement_record_msgs_srvs__msg",  // message namespace
  "OdomWithExpmtFlag",  // message name
  2,  // number of fields
  sizeof(backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag),
  OdomWithExpmtFlag__rosidl_typesupport_introspection_c__OdomWithExpmtFlag_message_member_array,  // message members
  OdomWithExpmtFlag__rosidl_typesupport_introspection_c__OdomWithExpmtFlag_init_function,  // function to initialize message memory (memory has to be allocated)
  OdomWithExpmtFlag__rosidl_typesupport_introspection_c__OdomWithExpmtFlag_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t OdomWithExpmtFlag__rosidl_typesupport_introspection_c__OdomWithExpmtFlag_message_type_support_handle = {
  0,
  &OdomWithExpmtFlag__rosidl_typesupport_introspection_c__OdomWithExpmtFlag_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_backscatter_movement_record_msgs_srvs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, backscatter_movement_record_msgs_srvs, msg, OdomWithExpmtFlag)() {
  OdomWithExpmtFlag__rosidl_typesupport_introspection_c__OdomWithExpmtFlag_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav_msgs, msg, Odometry)();
  if (!OdomWithExpmtFlag__rosidl_typesupport_introspection_c__OdomWithExpmtFlag_message_type_support_handle.typesupport_identifier) {
    OdomWithExpmtFlag__rosidl_typesupport_introspection_c__OdomWithExpmtFlag_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &OdomWithExpmtFlag__rosidl_typesupport_introspection_c__OdomWithExpmtFlag_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
