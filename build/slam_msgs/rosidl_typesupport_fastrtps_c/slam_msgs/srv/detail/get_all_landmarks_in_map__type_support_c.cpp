// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from slam_msgs:srv/GetAllLandmarksInMap.idl
// generated code does not contain a copyright notice
#include "slam_msgs/srv/detail/get_all_landmarks_in_map__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "slam_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "slam_msgs/srv/detail/get_all_landmarks_in_map__struct.h"
#include "slam_msgs/srv/detail/get_all_landmarks_in_map__functions.h"
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


// forward declare type support functions


using _GetAllLandmarksInMap_Request__ros_msg_type = slam_msgs__srv__GetAllLandmarksInMap_Request;

static bool _GetAllLandmarksInMap_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetAllLandmarksInMap_Request__ros_msg_type * ros_message = static_cast<const _GetAllLandmarksInMap_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: request
  {
    cdr << (ros_message->request ? true : false);
  }

  return true;
}

static bool _GetAllLandmarksInMap_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetAllLandmarksInMap_Request__ros_msg_type * ros_message = static_cast<_GetAllLandmarksInMap_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: request
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->request = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_slam_msgs
size_t get_serialized_size_slam_msgs__srv__GetAllLandmarksInMap_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetAllLandmarksInMap_Request__ros_msg_type * ros_message = static_cast<const _GetAllLandmarksInMap_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name request
  {
    size_t item_size = sizeof(ros_message->request);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetAllLandmarksInMap_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_slam_msgs__srv__GetAllLandmarksInMap_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_slam_msgs
size_t max_serialized_size_slam_msgs__srv__GetAllLandmarksInMap_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: request
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _GetAllLandmarksInMap_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_slam_msgs__srv__GetAllLandmarksInMap_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetAllLandmarksInMap_Request = {
  "slam_msgs::srv",
  "GetAllLandmarksInMap_Request",
  _GetAllLandmarksInMap_Request__cdr_serialize,
  _GetAllLandmarksInMap_Request__cdr_deserialize,
  _GetAllLandmarksInMap_Request__get_serialized_size,
  _GetAllLandmarksInMap_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetAllLandmarksInMap_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetAllLandmarksInMap_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, slam_msgs, srv, GetAllLandmarksInMap_Request)() {
  return &_GetAllLandmarksInMap_Request__type_support;
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
// #include "slam_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "slam_msgs/srv/detail/get_all_landmarks_in_map__struct.h"
// already included above
// #include "slam_msgs/srv/detail/get_all_landmarks_in_map__functions.h"
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

#include "sensor_msgs/msg/detail/point_cloud2__functions.h"  // landmarks

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_slam_msgs
size_t get_serialized_size_sensor_msgs__msg__PointCloud2(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_slam_msgs
size_t max_serialized_size_sensor_msgs__msg__PointCloud2(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_slam_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, PointCloud2)();


using _GetAllLandmarksInMap_Response__ros_msg_type = slam_msgs__srv__GetAllLandmarksInMap_Response;

static bool _GetAllLandmarksInMap_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetAllLandmarksInMap_Response__ros_msg_type * ros_message = static_cast<const _GetAllLandmarksInMap_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: landmarks
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, PointCloud2
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->landmarks, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _GetAllLandmarksInMap_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetAllLandmarksInMap_Response__ros_msg_type * ros_message = static_cast<_GetAllLandmarksInMap_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: landmarks
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, PointCloud2
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->landmarks))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_slam_msgs
size_t get_serialized_size_slam_msgs__srv__GetAllLandmarksInMap_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetAllLandmarksInMap_Response__ros_msg_type * ros_message = static_cast<const _GetAllLandmarksInMap_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name landmarks

  current_alignment += get_serialized_size_sensor_msgs__msg__PointCloud2(
    &(ros_message->landmarks), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _GetAllLandmarksInMap_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_slam_msgs__srv__GetAllLandmarksInMap_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_slam_msgs
size_t max_serialized_size_slam_msgs__srv__GetAllLandmarksInMap_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: landmarks
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_sensor_msgs__msg__PointCloud2(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _GetAllLandmarksInMap_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_slam_msgs__srv__GetAllLandmarksInMap_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetAllLandmarksInMap_Response = {
  "slam_msgs::srv",
  "GetAllLandmarksInMap_Response",
  _GetAllLandmarksInMap_Response__cdr_serialize,
  _GetAllLandmarksInMap_Response__cdr_deserialize,
  _GetAllLandmarksInMap_Response__get_serialized_size,
  _GetAllLandmarksInMap_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetAllLandmarksInMap_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetAllLandmarksInMap_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, slam_msgs, srv, GetAllLandmarksInMap_Response)() {
  return &_GetAllLandmarksInMap_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "slam_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "slam_msgs/srv/get_all_landmarks_in_map.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetAllLandmarksInMap__callbacks = {
  "slam_msgs::srv",
  "GetAllLandmarksInMap",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, slam_msgs, srv, GetAllLandmarksInMap_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, slam_msgs, srv, GetAllLandmarksInMap_Response)(),
};

static rosidl_service_type_support_t GetAllLandmarksInMap__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetAllLandmarksInMap__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, slam_msgs, srv, GetAllLandmarksInMap)() {
  return &GetAllLandmarksInMap__handle;
}

#if defined(__cplusplus)
}
#endif
