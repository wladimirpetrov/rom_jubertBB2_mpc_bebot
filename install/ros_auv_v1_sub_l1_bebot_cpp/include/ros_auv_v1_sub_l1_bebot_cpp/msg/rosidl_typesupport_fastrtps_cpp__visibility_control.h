// generated from
// rosidl_typesupport_fastrtps_cpp/resource/rosidl_typesupport_fastrtps_cpp__visibility_control.h.in
// generated code does not contain a copyright notice

#ifndef ROS_AUV_V1_SUB_L1_BEBOT_CPP__MSG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP__VISIBILITY_CONTROL_H_
#define ROS_AUV_V1_SUB_L1_BEBOT_CPP__MSG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP__VISIBILITY_CONTROL_H_

#if __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ros_auv_v1_sub_l1_bebot_cpp __attribute__ ((dllexport))
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_IMPORT_ros_auv_v1_sub_l1_bebot_cpp __attribute__ ((dllimport))
  #else
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ros_auv_v1_sub_l1_bebot_cpp __declspec(dllexport)
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_IMPORT_ros_auv_v1_sub_l1_bebot_cpp __declspec(dllimport)
  #endif
  #ifdef ROSIDL_TYPESUPPORT_FASTRTPS_CPP_BUILDING_DLL_ros_auv_v1_sub_l1_bebot_cpp
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros_auv_v1_sub_l1_bebot_cpp ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ros_auv_v1_sub_l1_bebot_cpp
  #else
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros_auv_v1_sub_l1_bebot_cpp ROSIDL_TYPESUPPORT_FASTRTPS_CPP_IMPORT_ros_auv_v1_sub_l1_bebot_cpp
  #endif
#else
  #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ros_auv_v1_sub_l1_bebot_cpp __attribute__ ((visibility("default")))
  #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_IMPORT_ros_auv_v1_sub_l1_bebot_cpp
  #if __GNUC__ >= 4
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros_auv_v1_sub_l1_bebot_cpp __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros_auv_v1_sub_l1_bebot_cpp
  #endif
#endif

#if __cplusplus
}
#endif

#endif  // ROS_AUV_V1_SUB_L1_BEBOT_CPP__MSG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP__VISIBILITY_CONTROL_H_