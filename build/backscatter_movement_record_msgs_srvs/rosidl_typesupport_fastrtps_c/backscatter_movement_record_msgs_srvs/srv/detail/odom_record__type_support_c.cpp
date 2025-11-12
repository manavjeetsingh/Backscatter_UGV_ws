// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from backscatter_movement_record_msgs_srvs:srv/OdomRecord.idl
// generated code does not contain a copyright notice
#include "backscatter_movement_record_msgs_srvs/srv/detail/odom_record__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "backscatter_movement_record_msgs_srvs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "backscatter_movement_record_msgs_srvs/srv/detail/odom_record__struct.h"
#include "backscatter_movement_record_msgs_srvs/srv/detail/odom_record__functions.h"
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

#include "rosidl_runtime_c/string.h"  // expmt_name
#include "rosidl_runtime_c/string_functions.h"  // expmt_name

// forward declare type support functions


using _OdomRecord_Request__ros_msg_type = backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request;

static bool _OdomRecord_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _OdomRecord_Request__ros_msg_type * ros_message = static_cast<const _OdomRecord_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: req
  {
    cdr << (ros_message->req ? true : false);
  }

  // Field name: expmt_name
  {
    const rosidl_runtime_c__String * str = &ros_message->expmt_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: backscatter_expmt_flag
  {
    cdr << (ros_message->backscatter_expmt_flag ? true : false);
  }

  return true;
}

static bool _OdomRecord_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _OdomRecord_Request__ros_msg_type * ros_message = static_cast<_OdomRecord_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: req
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->req = tmp ? true : false;
  }

  // Field name: expmt_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->expmt_name.data) {
      rosidl_runtime_c__String__init(&ros_message->expmt_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->expmt_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'expmt_name'\n");
      return false;
    }
  }

  // Field name: backscatter_expmt_flag
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->backscatter_expmt_flag = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_backscatter_movement_record_msgs_srvs
size_t get_serialized_size_backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _OdomRecord_Request__ros_msg_type * ros_message = static_cast<const _OdomRecord_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name req
  {
    size_t item_size = sizeof(ros_message->req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name expmt_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->expmt_name.size + 1);
  // field.name backscatter_expmt_flag
  {
    size_t item_size = sizeof(ros_message->backscatter_expmt_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _OdomRecord_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_backscatter_movement_record_msgs_srvs
size_t max_serialized_size_backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: req
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: expmt_name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: backscatter_expmt_flag
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _OdomRecord_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_OdomRecord_Request = {
  "backscatter_movement_record_msgs_srvs::srv",
  "OdomRecord_Request",
  _OdomRecord_Request__cdr_serialize,
  _OdomRecord_Request__cdr_deserialize,
  _OdomRecord_Request__get_serialized_size,
  _OdomRecord_Request__max_serialized_size
};

static rosidl_message_type_support_t _OdomRecord_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_OdomRecord_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, backscatter_movement_record_msgs_srvs, srv, OdomRecord_Request)() {
  return &_OdomRecord_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "backscatter_movement_record_msgs_srvs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "backscatter_movement_record_msgs_srvs/srv/detail/odom_record__struct.h"
// already included above
// #include "backscatter_movement_record_msgs_srvs/srv/detail/odom_record__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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


// forward declare type support functions


using _OdomRecord_Response__ros_msg_type = backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response;

static bool _OdomRecord_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _OdomRecord_Response__ros_msg_type * ros_message = static_cast<const _OdomRecord_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: resp
  {
    cdr << (ros_message->resp ? true : false);
  }

  return true;
}

static bool _OdomRecord_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _OdomRecord_Response__ros_msg_type * ros_message = static_cast<_OdomRecord_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: resp
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->resp = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_backscatter_movement_record_msgs_srvs
size_t get_serialized_size_backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _OdomRecord_Response__ros_msg_type * ros_message = static_cast<const _OdomRecord_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name resp
  {
    size_t item_size = sizeof(ros_message->resp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _OdomRecord_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_backscatter_movement_record_msgs_srvs
size_t max_serialized_size_backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: resp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _OdomRecord_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_OdomRecord_Response = {
  "backscatter_movement_record_msgs_srvs::srv",
  "OdomRecord_Response",
  _OdomRecord_Response__cdr_serialize,
  _OdomRecord_Response__cdr_deserialize,
  _OdomRecord_Response__get_serialized_size,
  _OdomRecord_Response__max_serialized_size
};

static rosidl_message_type_support_t _OdomRecord_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_OdomRecord_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, backscatter_movement_record_msgs_srvs, srv, OdomRecord_Response)() {
  return &_OdomRecord_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "backscatter_movement_record_msgs_srvs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "backscatter_movement_record_msgs_srvs/srv/odom_record.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t OdomRecord__callbacks = {
  "backscatter_movement_record_msgs_srvs::srv",
  "OdomRecord",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, backscatter_movement_record_msgs_srvs, srv, OdomRecord_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, backscatter_movement_record_msgs_srvs, srv, OdomRecord_Response)(),
};

static rosidl_service_type_support_t OdomRecord__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &OdomRecord__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, backscatter_movement_record_msgs_srvs, srv, OdomRecord)() {
  return &OdomRecord__handle;
}

#if defined(__cplusplus)
}
#endif
