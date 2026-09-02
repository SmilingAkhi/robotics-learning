# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target irrigation_interfaces::irrigation_interfaces
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${irrigation_interfaces_TARGETS}.
if(irrigation_interfaces_TARGETS AND NOT TARGET irrigation_interfaces::irrigation_interfaces)
  add_library(irrigation_interfaces::irrigation_interfaces INTERFACE IMPORTED)
  set_target_properties(irrigation_interfaces::irrigation_interfaces PROPERTIES
    INTERFACE_LINK_LIBRARIES "${irrigation_interfaces_TARGETS}")
endif()
