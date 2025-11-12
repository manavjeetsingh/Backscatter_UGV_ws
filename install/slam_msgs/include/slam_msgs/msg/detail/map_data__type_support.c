// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from slam_msgs:msg/MapData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "slam_msgs/msg/detail/map_data__rosidl_typesupport_introspection_c.h"
#include "slam_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "slam_msgs/msg/detail/map_data__functions.h"
#include "slam_msgs/msg/detail/map_data__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `graph`
#include "slam_msgs/msg/map_graph.h"
// Member `graph`
#include "slam_msgs/msg/detail/map_graph__rosidl_typesupport_introspection_c.h"
// Member `nodes`
#include "slam_msgs/msg/key_frame.h"
// Member `nodes`
#include "slam_msgs/msg/detail/key_frame__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MapData__rosidl_typesupport_introspection_c__MapData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  slam_msgs__msg__MapData__init(message_memory);
}

void MapData__rosidl_typesupport_introspection_c__MapData_fini_function(void * message_memory)
{
  slam_msgs__msg__MapData__fini(message_memory);
}

size_t MapData__rosidl_typesupport_introspection_c__size_function__KeyFrame__nodes(
  const void * untyped_member)
{
  const slam_msgs__msg__KeyFrame__Sequence * member =
    (const slam_msgs__msg__KeyFrame__Sequence *)(untyped_member);
  return member->size;
}

const void * MapData__rosidl_typesupport_introspection_c__get_const_function__KeyFrame__nodes(
  const void * untyped_member, size_t index)
{
  const slam_msgs__msg__KeyFrame__Sequence * member =
    (const slam_msgs__msg__KeyFrame__Sequence *)(untyped_member);
  return &member->data[index];
}

void * MapData__rosidl_typesupport_introspection_c__get_function__KeyFrame__nodes(
  void * untyped_member, size_t index)
{
  slam_msgs__msg__KeyFrame__Sequence * member =
    (slam_msgs__msg__KeyFrame__Sequence *)(untyped_member);
  return &member->data[index];
}

bool MapData__rosidl_typesupport_introspection_c__resize_function__KeyFrame__nodes(
  void * untyped_member, size_t size)
{
  slam_msgs__msg__KeyFrame__Sequence * member =
    (slam_msgs__msg__KeyFrame__Sequence *)(untyped_member);
  slam_msgs__msg__KeyFrame__Sequence__fini(member);
  return slam_msgs__msg__KeyFrame__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember MapData__rosidl_typesupport_introspection_c__MapData_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(slam_msgs__msg__MapData, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "graph",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(slam_msgs__msg__MapData, graph),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nodes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(slam_msgs__msg__MapData, nodes),  // bytes offset in struct
    NULL,  // default value
    MapData__rosidl_typesupport_introspection_c__size_function__KeyFrame__nodes,  // size() function pointer
    MapData__rosidl_typesupport_introspection_c__get_const_function__KeyFrame__nodes,  // get_const(index) function pointer
    MapData__rosidl_typesupport_introspection_c__get_function__KeyFrame__nodes,  // get(index) function pointer
    MapData__rosidl_typesupport_introspection_c__resize_function__KeyFrame__nodes  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MapData__rosidl_typesupport_introspection_c__MapData_message_members = {
  "slam_msgs__msg",  // message namespace
  "MapData",  // message name
  3,  // number of fields
  sizeof(slam_msgs__msg__MapData),
  MapData__rosidl_typesupport_introspection_c__MapData_message_member_array,  // message members
  MapData__rosidl_typesupport_introspection_c__MapData_init_function,  // function to initialize message memory (memory has to be allocated)
  MapData__rosidl_typesupport_introspection_c__MapData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MapData__rosidl_typesupport_introspection_c__MapData_message_type_support_handle = {
  0,
  &MapData__rosidl_typesupport_introspection_c__MapData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_slam_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, slam_msgs, msg, MapData)() {
  MapData__rosidl_typesupport_introspection_c__MapData_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  MapData__rosidl_typesupport_introspection_c__MapData_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, slam_msgs, msg, MapGraph)();
  MapData__rosidl_typesupport_introspection_c__MapData_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, slam_msgs, msg, KeyFrame)();
  if (!MapData__rosidl_typesupport_introspection_c__MapData_message_type_support_handle.typesupport_identifier) {
    MapData__rosidl_typesupport_introspection_c__MapData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MapData__rosidl_typesupport_introspection_c__MapData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
