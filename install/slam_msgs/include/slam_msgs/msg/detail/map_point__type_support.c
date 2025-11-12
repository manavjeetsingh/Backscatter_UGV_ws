// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from slam_msgs:msg/MapPoint.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "slam_msgs/msg/detail/map_point__rosidl_typesupport_introspection_c.h"
#include "slam_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "slam_msgs/msg/detail/map_point__functions.h"
#include "slam_msgs/msg/detail/map_point__struct.h"


// Include directives for member types
// Member `position`
#include "geometry_msgs/msg/point.h"
// Member `position`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `observing_keyframes`
#include "geometry_msgs/msg/pose.h"
// Member `observing_keyframes`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MapPoint__rosidl_typesupport_introspection_c__MapPoint_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  slam_msgs__msg__MapPoint__init(message_memory);
}

void MapPoint__rosidl_typesupport_introspection_c__MapPoint_fini_function(void * message_memory)
{
  slam_msgs__msg__MapPoint__fini(message_memory);
}

size_t MapPoint__rosidl_typesupport_introspection_c__size_function__Pose__observing_keyframes(
  const void * untyped_member)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return member->size;
}

const void * MapPoint__rosidl_typesupport_introspection_c__get_const_function__Pose__observing_keyframes(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * MapPoint__rosidl_typesupport_introspection_c__get_function__Pose__observing_keyframes(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

bool MapPoint__rosidl_typesupport_introspection_c__resize_function__Pose__observing_keyframes(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  geometry_msgs__msg__Pose__Sequence__fini(member);
  return geometry_msgs__msg__Pose__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember MapPoint__rosidl_typesupport_introspection_c__MapPoint_message_member_array[2] = {
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(slam_msgs__msg__MapPoint, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "observing_keyframes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(slam_msgs__msg__MapPoint, observing_keyframes),  // bytes offset in struct
    NULL,  // default value
    MapPoint__rosidl_typesupport_introspection_c__size_function__Pose__observing_keyframes,  // size() function pointer
    MapPoint__rosidl_typesupport_introspection_c__get_const_function__Pose__observing_keyframes,  // get_const(index) function pointer
    MapPoint__rosidl_typesupport_introspection_c__get_function__Pose__observing_keyframes,  // get(index) function pointer
    MapPoint__rosidl_typesupport_introspection_c__resize_function__Pose__observing_keyframes  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MapPoint__rosidl_typesupport_introspection_c__MapPoint_message_members = {
  "slam_msgs__msg",  // message namespace
  "MapPoint",  // message name
  2,  // number of fields
  sizeof(slam_msgs__msg__MapPoint),
  MapPoint__rosidl_typesupport_introspection_c__MapPoint_message_member_array,  // message members
  MapPoint__rosidl_typesupport_introspection_c__MapPoint_init_function,  // function to initialize message memory (memory has to be allocated)
  MapPoint__rosidl_typesupport_introspection_c__MapPoint_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MapPoint__rosidl_typesupport_introspection_c__MapPoint_message_type_support_handle = {
  0,
  &MapPoint__rosidl_typesupport_introspection_c__MapPoint_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_slam_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, slam_msgs, msg, MapPoint)() {
  MapPoint__rosidl_typesupport_introspection_c__MapPoint_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  MapPoint__rosidl_typesupport_introspection_c__MapPoint_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!MapPoint__rosidl_typesupport_introspection_c__MapPoint_message_type_support_handle.typesupport_identifier) {
    MapPoint__rosidl_typesupport_introspection_c__MapPoint_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MapPoint__rosidl_typesupport_introspection_c__MapPoint_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
