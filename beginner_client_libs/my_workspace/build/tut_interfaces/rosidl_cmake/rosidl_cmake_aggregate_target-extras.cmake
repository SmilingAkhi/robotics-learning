# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target tut_interfaces::tut_interfaces
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${tut_interfaces_TARGETS}.
if(tut_interfaces_TARGETS AND NOT TARGET tut_interfaces::tut_interfaces)
  add_library(tut_interfaces::tut_interfaces INTERFACE IMPORTED)
  set_target_properties(tut_interfaces::tut_interfaces PROPERTIES
    INTERFACE_LINK_LIBRARIES "${tut_interfaces_TARGETS}")
endif()
