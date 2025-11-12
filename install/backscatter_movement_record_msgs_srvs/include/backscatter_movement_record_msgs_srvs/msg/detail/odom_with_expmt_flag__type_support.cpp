// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from backscatter_movement_record_msgs_srvs:msg/OdomWithExpmtFlag.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "backscatter_movement_record_msgs_srvs/msg/detail/odom_with_expmt_flag__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace backscatter_movement_record_msgs_srvs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void OdomWithExpmtFlag_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) backscatter_movement_record_msgs_srvs::msg::OdomWithExpmtFlag(_init);
}

void OdomWithExpmtFlag_fini_function(void * message_memory)
{
  auto typed_message = static_cast<backscatter_movement_record_msgs_srvs::msg::OdomWithExpmtFlag *>(message_memory);
  typed_message->~OdomWithExpmtFlag();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember OdomWithExpmtFlag_message_member_array[2] = {
  {
    "odom",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<nav_msgs::msg::Odometry>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(backscatter_movement_record_msgs_srvs::msg::OdomWithExpmtFlag, odom),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "expmt_flag",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(backscatter_movement_record_msgs_srvs::msg::OdomWithExpmtFlag, expmt_flag),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers OdomWithExpmtFlag_message_members = {
  "backscatter_movement_record_msgs_srvs::msg",  // message namespace
  "OdomWithExpmtFlag",  // message name
  2,  // number of fields
  sizeof(backscatter_movement_record_msgs_srvs::msg::OdomWithExpmtFlag),
  OdomWithExpmtFlag_message_member_array,  // message members
  OdomWithExpmtFlag_init_function,  // function to initialize message memory (memory has to be allocated)
  OdomWithExpmtFlag_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t OdomWithExpmtFlag_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &OdomWithExpmtFlag_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace backscatter_movement_record_msgs_srvs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<backscatter_movement_record_msgs_srvs::msg::OdomWithExpmtFlag>()
{
  return &::backscatter_movement_record_msgs_srvs::msg::rosidl_typesupport_introspection_cpp::OdomWithExpmtFlag_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, backscatter_movement_record_msgs_srvs, msg, OdomWithExpmtFlag)() {
  return &::backscatter_movement_record_msgs_srvs::msg::rosidl_typesupport_introspection_cpp::OdomWithExpmtFlag_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
