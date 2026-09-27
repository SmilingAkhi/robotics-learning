# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target greenhouse_interfaces::greenhouse_interfaces
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${greenhouse_interfaces_TARGETS}.
if(greenhouse_interfaces_TARGETS AND NOT TARGET greenhouse_interfaces::greenhouse_interfaces)
  add_library(greenhouse_interfaces::greenhouse_interfaces INTERFACE IMPORTED)
  set_target_properties(greenhouse_interfaces::greenhouse_interfaces PROPERTIES
    INTERFACE_LINK_LIBRARIES "${greenhouse_interfaces_TARGETS}")
endif()
