// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from slam_msgs:msg/MapGraph.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "slam_msgs/msg/detail/map_graph__rosidl_typesupport_introspection_c.h"
#include "slam_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "slam_msgs/msg/detail/map_graph__functions.h"
#include "slam_msgs/msg/detail/map_graph__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `poses_id`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `poses`
#include "geometry_msgs/msg/pose_stamped.h"
// Member `poses`
#include "geometry_msgs/msg/detail/pose_stamped__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MapGraph__rosidl_typesupport_introspection_c__MapGraph_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  slam_msgs__msg__MapGraph__init(message_memory);
}

void MapGraph__rosidl_typesupport_introspection_c__MapGraph_fini_function(void * message_memory)
{
  slam_msgs__msg__MapGraph__fini(message_memory);
}

size_t MapGraph__rosidl_typesupport_introspection_c__size_function__PoseStamped__poses(
  const void * untyped_member)
{
  const geometry_msgs__msg__PoseStamped__Sequence * member =
    (const geometry_msgs__msg__PoseStamped__Sequence *)(untyped_member);
  return member->size;
}

const void * MapGraph__rosidl_typesupport_introspection_c__get_const_function__PoseStamped__poses(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__PoseStamped__Sequence * member =
    (const geometry_msgs__msg__PoseStamped__Sequence *)(untyped_member);
  return &member->data[index];
}

void * MapGraph__rosidl_typesupport_introspection_c__get_function__PoseStamped__poses(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__PoseStamped__Sequence * member =
    (geometry_msgs__msg__PoseStamped__Sequence *)(untyped_member);
  return &member->data[index];
}

bool MapGraph__rosidl_typesupport_introspection_c__resize_function__PoseStamped__poses(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__PoseStamped__Sequence * member =
    (geometry_msgs__msg__PoseStamped__Sequence *)(untyped_member);
  geometry_msgs__msg__PoseStamped__Sequence__fini(member);
  return geometry_msgs__msg__PoseStamped__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember MapGraph__rosidl_typesupport_introspection_c__MapGraph_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(slam_msgs__msg__MapGraph, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "poses_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(slam_msgs__msg__MapGraph, poses_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "poses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(slam_msgs__msg__MapGraph, poses),  // bytes offset in struct
    NULL,  // default value
    MapGraph__rosidl_typesupport_introspection_c__size_function__PoseStamped__poses,  // size() function pointer
    MapGraph__rosidl_typesupport_introspection_c__get_const_function__PoseStamped__poses,  // get_const(index) function pointer
    MapGraph__rosidl_typesupport_introspection_c__get_function__PoseStamped__poses,  // get(index) function pointer
    MapGraph__rosidl_typesupport_introspection_c__resize_function__PoseStamped__poses  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MapGraph__rosidl_typesupport_introspection_c__MapGraph_message_members = {
  "slam_msgs__msg",  // message namespace
  "MapGraph",  // message name
  3,  // number of fields
  sizeof(slam_msgs__msg__MapGraph),
  MapGraph__rosidl_typesupport_introspection_c__MapGraph_message_member_array,  // message members
  MapGraph__rosidl_typesupport_introspection_c__MapGraph_init_function,  // function to initialize message memory (memory has to be allocated)
  MapGraph__rosidl_typesupport_introspection_c__MapGraph_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MapGraph__rosidl_typesupport_introspection_c__MapGraph_message_type_support_handle = {
  0,
  &MapGraph__rosidl_typesupport_introspection_c__MapGraph_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_slam_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, slam_msgs, msg, MapGraph)() {
  MapGraph__rosidl_typesupport_introspection_c__MapGraph_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  MapGraph__rosidl_typesupport_introspection_c__MapGraph_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  if (!MapGraph__rosidl_typesupport_introspection_c__MapGraph_message_type_support_handle.typesupport_identifier) {
    MapGraph__rosidl_typesupport_introspection_c__MapGraph_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MapGraph__rosidl_typesupport_introspection_c__MapGraph_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
