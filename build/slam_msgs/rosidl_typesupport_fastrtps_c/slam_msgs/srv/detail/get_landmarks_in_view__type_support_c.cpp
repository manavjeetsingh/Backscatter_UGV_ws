// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from slam_msgs:srv/GetLandmarksInView.idl
// generated code does not contain a copyright notice
#include "slam_msgs/srv/detail/get_landmarks_in_view__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "slam_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "slam_msgs/srv/detail/get_landmarks_in_view__struct.h"
#include "slam_msgs/srv/detail/get_landmarks_in_view__functions.h"
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

#include "geometry_msgs/msg/detail/pose__functions.h"  // pose

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_slam_msgs
size_t get_serialized_size_geometry_msgs__msg__Pose(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_slam_msgs
size_t max_serialized_size_geometry_msgs__msg__Pose(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_slam_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose)();


using _GetLandmarksInView_Request__ros_msg_type = slam_msgs__srv__GetLandmarksInView_Request;

static bool _GetLandmarksInView_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetLandmarksInView_Request__ros_msg_type * ros_message = static_cast<const _GetLandmarksInView_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: pose
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->pose, cdr))
    {
      return false;
    }
  }

  // Field name: max_angle_pose_observation
  {
    cdr << ros_message->max_angle_pose_observation;
  }

  // Field name: max_dist_pose_observation
  {
    cdr << ros_message->max_dist_pose_observation;
  }

  return true;
}

static bool _GetLandmarksInView_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetLandmarksInView_Request__ros_msg_type * ros_message = static_cast<_GetLandmarksInView_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: pose
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->pose))
    {
      return false;
    }
  }

  // Field name: max_angle_pose_observation
  {
    cdr >> ros_message->max_angle_pose_observation;
  }

  // Field name: max_dist_pose_observation
  {
    cdr >> ros_message->max_dist_pose_observation;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_slam_msgs
size_t get_serialized_size_slam_msgs__srv__GetLandmarksInView_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetLandmarksInView_Request__ros_msg_type * ros_message = static_cast<const _GetLandmarksInView_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name pose

  current_alignment += get_serialized_size_geometry_msgs__msg__Pose(
    &(ros_message->pose), current_alignment);
  // field.name max_angle_pose_observation
  {
    size_t item_size = sizeof(ros_message->max_angle_pose_observation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_dist_pose_observation
  {
    size_t item_size = sizeof(ros_message->max_dist_pose_observation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetLandmarksInView_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_slam_msgs__srv__GetLandmarksInView_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_slam_msgs
size_t max_serialized_size_slam_msgs__srv__GetLandmarksInView_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: pose
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Pose(
        full_bounded, current_alignment);
    }
  }
  // member: max_angle_pose_observation
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: max_dist_pose_observation
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _GetLandmarksInView_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_slam_msgs__srv__GetLandmarksInView_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetLandmarksInView_Request = {
  "slam_msgs::srv",
  "GetLandmarksInView_Request",
  _GetLandmarksInView_Request__cdr_serialize,
  _GetLandmarksInView_Request__cdr_deserialize,
  _GetLandmarksInView_Request__get_serialized_size,
  _GetLandmarksInView_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetLandmarksInView_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetLandmarksInView_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, slam_msgs, srv, GetLandmarksInView_Request)() {
  return &_GetLandmarksInView_Request__type_support;
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
// #include "slam_msgs/srv/detail/get_landmarks_in_view__struct.h"
// already included above
// #include "slam_msgs/srv/detail/get_landmarks_in_view__functions.h"
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

#include "slam_msgs/msg/detail/map_point__functions.h"  // map_points

// forward declare type support functions
size_t get_serialized_size_slam_msgs__msg__MapPoint(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_slam_msgs__msg__MapPoint(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, slam_msgs, msg, MapPoint)();


using _GetLandmarksInView_Response__ros_msg_type = slam_msgs__srv__GetLandmarksInView_Response;

static bool _GetLandmarksInView_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetLandmarksInView_Response__ros_msg_type * ros_message = static_cast<const _GetLandmarksInView_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: map_points
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, slam_msgs, msg, MapPoint
      )()->data);
    size_t size = ros_message->map_points.size;
    auto array_ptr = ros_message->map_points.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _GetLandmarksInView_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetLandmarksInView_Response__ros_msg_type * ros_message = static_cast<_GetLandmarksInView_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: map_points
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, slam_msgs, msg, MapPoint
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->map_points.data) {
      slam_msgs__msg__MapPoint__Sequence__fini(&ros_message->map_points);
    }
    if (!slam_msgs__msg__MapPoint__Sequence__init(&ros_message->map_points, size)) {
      return "failed to create array for field 'map_points'";
    }
    auto array_ptr = ros_message->map_points.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_slam_msgs
size_t get_serialized_size_slam_msgs__srv__GetLandmarksInView_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetLandmarksInView_Response__ros_msg_type * ros_message = static_cast<const _GetLandmarksInView_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name map_points
  {
    size_t array_size = ros_message->map_points.size;
    auto array_ptr = ros_message->map_points.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_slam_msgs__msg__MapPoint(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetLandmarksInView_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_slam_msgs__srv__GetLandmarksInView_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_slam_msgs
size_t max_serialized_size_slam_msgs__srv__GetLandmarksInView_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: map_points
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_slam_msgs__msg__MapPoint(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _GetLandmarksInView_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_slam_msgs__srv__GetLandmarksInView_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetLandmarksInView_Response = {
  "slam_msgs::srv",
  "GetLandmarksInView_Response",
  _GetLandmarksInView_Response__cdr_serialize,
  _GetLandmarksInView_Response__cdr_deserialize,
  _GetLandmarksInView_Response__get_serialized_size,
  _GetLandmarksInView_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetLandmarksInView_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetLandmarksInView_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, slam_msgs, srv, GetLandmarksInView_Response)() {
  return &_GetLandmarksInView_Response__type_support;
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
#include "slam_msgs/srv/get_landmarks_in_view.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetLandmarksInView__callbacks = {
  "slam_msgs::srv",
  "GetLandmarksInView",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, slam_msgs, srv, GetLandmarksInView_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, slam_msgs, srv, GetLandmarksInView_Response)(),
};

static rosidl_service_type_support_t GetLandmarksInView__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetLandmarksInView__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, slam_msgs, srv, GetLandmarksInView)() {
  return &GetLandmarksInView__handle;
}

#if defined(__cplusplus)
}
#endif
