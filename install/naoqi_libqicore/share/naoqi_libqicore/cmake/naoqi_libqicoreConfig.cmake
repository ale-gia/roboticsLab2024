# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_naoqi_libqicore_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED naoqi_libqicore_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(naoqi_libqicore_FOUND FALSE)
  elseif(NOT naoqi_libqicore_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(naoqi_libqicore_FOUND FALSE)
  endif()
  return()
endif()
set(_naoqi_libqicore_CONFIG_INCLUDED TRUE)

# output package information
if(NOT naoqi_libqicore_FIND_QUIETLY)
  message(STATUS "Found naoqi_libqicore: 3.0.0 (${naoqi_libqicore_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'naoqi_libqicore' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${naoqi_libqicore_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(naoqi_libqicore_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_libraries-extras.cmake;ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_dependencies-extras.cmake")
foreach(_extra ${_extras})
  include("${naoqi_libqicore_DIR}/${_extra}")
endforeach()
