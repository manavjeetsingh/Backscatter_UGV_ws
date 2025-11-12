// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from backscatter_movement_record_msgs_srvs:msg/OdomWithExpmtFlag.idl
// generated code does not contain a copyright notice
#include "backscatter_movement_record_msgs_srvs/msg/detail/odom_with_expmt_flag__rosidl_typesupport_fastrtps_cpp.hpp"
#include "backscatter_movement_record_msgs_srvs/msg/detail/odom_with_expmt_flag__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace nav_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const nav_msgs::msg::Odometry &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  nav_msgs::msg::Odometry &);
size_t get_serialized_size(
  const nav_msgs::msg::Odometry &,
  size_t current_alignment);
size_t
max_serialized_size_Odometry(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace nav_msgs


namespace backscatter_movement_record_msgs_srvs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_backscatter_movement_record_msgs_srvs
cdr_serialize(
  const backscatter_movement_record_msgs_srvs::msg::OdomWithExpmtFlag & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: odom
  nav_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.odom,
    cdr);
  // Member: expmt_flag
  cdr << (ros_message.expmt_flag ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_backscatter_movement_record_msgs_srvs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  backscatter_movement_record_msgs_srvs::msg::OdomWithExpmtFlag & ros_message)
{
  // Member: odom
  nav_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.odom);

  // Member: expmt_flag
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.expmt_flag = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_backscatter_movement_record_msgs_srvs
get_serialized_size(
  const backscatter_movement_record_msgs_srvs::msg::OdomWithExpmtFlag & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: odom

  current_alignment +=
    nav_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.odom, current_alignment);
  // Member: expmt_flag
  {
    size_t item_size = sizeof(ros_message.expmt_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_backscatter_movement_record_msgs_srvs
max_serialized_size_OdomWithExpmtFlag(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: odom
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        nav_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Odometry(
        full_bounded, current_alignment);
    }
  }

  // Member: expmt_flag
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _OdomWithExpmtFlag__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const backscatter_movement_record_msgs_srvs::msg::OdomWithExpmtFlag *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _OdomWithExpmtFlag__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<backscatter_movement_record_msgs_srvs::msg::OdomWithExpmtFlag *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _OdomWithExpmtFlag__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const backscatter_movement_record_msgs_srvs::msg::OdomWithExpmtFlag *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _OdomWithExpmtFlag__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_OdomWithExpmtFlag(full_bounded, 0);
}

static message_type_support_callbacks_t _OdomWithExpmtFlag__callbacks = {
  "backscatter_movement_record_msgs_srvs::msg",
  "OdomWithExpmtFlag",
  _OdomWithExpmtFlag__cdr_serialize,
  _OdomWithExpmtFlag__cdr_deserialize,
  _OdomWithExpmtFlag__get_serialized_size,
  _OdomWithExpmtFlag__max_serialized_size
};

static rosidl_message_type_support_t _OdomWithExpmtFlag__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_OdomWithExpmtFlag__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace backscatter_movement_record_msgs_srvs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_backscatter_movement_record_msgs_srvs
const rosidl_message_type_support_t *
get_message_type_support_handle<backscatter_movement_record_msgs_srvs::msg::OdomWithExpmtFlag>()
{
  return &backscatter_movement_record_msgs_srvs::msg::typesupport_fastrtps_cpp::_OdomWithExpmtFlag__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, backscatter_movement_record_msgs_srvs, msg, OdomWithExpmtFlag)() {
  return &backscatter_movement_record_msgs_srvs::msg::typesupport_fastrtps_cpp::_OdomWithExpmtFlag__handle;
}

#ifdef __cplusplus
}
#endif
