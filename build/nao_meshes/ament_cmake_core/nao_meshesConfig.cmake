# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_nao_meshes_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED nao_meshes_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(nao_meshes_FOUND FALSE)
  elseif(NOT nao_meshes_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(nao_meshes_FOUND FALSE)
  endif()
  return()
endif()
set(_nao_meshes_CONFIG_INCLUDED TRUE)

# output package information
if(NOT nao_meshes_FIND_QUIETLY)
  message(STATUS "Found nao_meshes: 2.1.1 (${nao_meshes_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'nao_meshes' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${nao_meshes_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(nao_meshes_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${nao_meshes_DIR}/${_extra}")
endforeach()
