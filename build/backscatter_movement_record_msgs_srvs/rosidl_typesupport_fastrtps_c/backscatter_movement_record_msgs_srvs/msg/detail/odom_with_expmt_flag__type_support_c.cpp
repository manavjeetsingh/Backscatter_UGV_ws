// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from backscatter_movement_record_msgs_srvs:msg/OdomWithExpmtFlag.idl
// generated code does not contain a copyright notice
#include "backscatter_movement_record_msgs_srvs/msg/detail/odom_with_expmt_flag__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "backscatter_movement_record_msgs_srvs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "backscatter_movement_record_msgs_srvs/msg/detail/odom_with_expmt_flag__struct.h"
#include "backscatter_movement_record_msgs_srvs/msg/detail/odom_with_expmt_flag__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "nav_msgs/msg/detail/odometry__functions.h"  // odom

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_backscatter_movement_record_msgs_srvs
size_t get_serialized_size_nav_msgs__msg__Odometry(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_backscatter_movement_record_msgs_srvs
size_t max_serialized_size_nav_msgs__msg__Odometry(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_backscatter_movement_record_msgs_srvs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav_msgs, msg, Odometry)();


using _OdomWithExpmtFlag__ros_msg_type = backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag;

static bool _OdomWithExpmtFlag__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _OdomWithExpmtFlag__ros_msg_type * ros_message = static_cast<const _OdomWithExpmtFlag__ros_msg_type *>(untyped_ros_message);
  // Field name: odom
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, nav_msgs, msg, Odometry
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->odom, cdr))
    {
      return false;
    }
  }

  // Field name: expmt_flag
  {
    cdr << (ros_message->expmt_flag ? true : false);
  }

  return true;
}

static bool _OdomWithExpmtFlag__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _OdomWithExpmtFlag__ros_msg_type * ros_message = static_cast<_OdomWithExpmtFlag__ros_msg_type *>(untyped_ros_message);
  // Field name: odom
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, nav_msgs, msg, Odometry
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->odom))
    {
      return false;
    }
  }

  // Field name: expmt_flag
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->expmt_flag = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_backscatter_movement_record_msgs_srvs
size_t get_serialized_size_backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _OdomWithExpmtFlag__ros_msg_type * ros_message = static_cast<const _OdomWithExpmtFlag__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name odom

  current_alignment += get_serialized_size_nav_msgs__msg__Odometry(
    &(ros_message->odom), current_alignment);
  // field.name expmt_flag
  {
    size_t item_size = sizeof(ros_message->expmt_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _OdomWithExpmtFlag__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_backscatter_movement_record_msgs_srvs
size_t max_serialized_size_backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: odom
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_nav_msgs__msg__Odometry(
        full_bounded, current_alignment);
    }
  }
  // member: expmt_flag
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _OdomWithExpmtFlag__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_OdomWithExpmtFlag = {
  "backscatter_movement_record_msgs_srvs::msg",
  "OdomWithExpmtFlag",
  _OdomWithExpmtFlag__cdr_serialize,
  _OdomWithExpmtFlag__cdr_deserialize,
  _OdomWithExpmtFlag__get_serialized_size,
  _OdomWithExpmtFlag__max_serialized_size
};

static rosidl_message_type_support_t _OdomWithExpmtFlag__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_OdomWithExpmtFlag,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, backscatter_movement_record_msgs_srvs, msg, OdomWithExpmtFlag)() {
  return &_OdomWithExpmtFlag__type_support;
}

#if defined(__cplusplus)
}
#endif
