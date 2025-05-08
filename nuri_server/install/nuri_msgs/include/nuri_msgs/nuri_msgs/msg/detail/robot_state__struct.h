// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nuri_msgs:msg/RobotState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nuri_msgs/msg/robot_state.h"


#ifndef NURI_MSGS__MSG__DETAIL__ROBOT_STATE__STRUCT_H_
#define NURI_MSGS__MSG__DETAIL__ROBOT_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'status'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/RobotState in the package nuri_msgs.
/**
  * Robot State Msg
 */
typedef struct nuri_msgs__msg__RobotState
{
  rosidl_runtime_c__String status;
  int32_t battery;
} nuri_msgs__msg__RobotState;

// Struct for a sequence of nuri_msgs__msg__RobotState.
typedef struct nuri_msgs__msg__RobotState__Sequence
{
  nuri_msgs__msg__RobotState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nuri_msgs__msg__RobotState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NURI_MSGS__MSG__DETAIL__ROBOT_STATE__STRUCT_H_
