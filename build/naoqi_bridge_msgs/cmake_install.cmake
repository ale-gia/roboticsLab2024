# Install script for directory: /home/rosario/ros2_ws/src/naoqi_bridge_msgs

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/rosario/ros2_ws/src/install/naoqi_bridge_msgs")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/rosidl_interfaces" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/ament_cmake_index/share/ament_index/resource_index/rosidl_interfaces/naoqi_bridge_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/naoqi_bridge_msgs/naoqi_bridge_msgs" TYPE DIRECTORY FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_generator_c/naoqi_bridge_msgs/" REGEX "/[^/]*\\.h$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/environment" TYPE FILE FILES "/opt/ros/humble/lib/python3.10/site-packages/ament_package/template/environment_hook/library_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/environment" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/ament_cmake_environment_hooks/library_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnaoqi_bridge_msgs__rosidl_generator_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnaoqi_bridge_msgs__rosidl_generator_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnaoqi_bridge_msgs__rosidl_generator_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/libnaoqi_bridge_msgs__rosidl_generator_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnaoqi_bridge_msgs__rosidl_generator_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnaoqi_bridge_msgs__rosidl_generator_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnaoqi_bridge_msgs__rosidl_generator_c.so"
         OLD_RPATH "/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnaoqi_bridge_msgs__rosidl_generator_c.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/naoqi_bridge_msgs/naoqi_bridge_msgs" TYPE DIRECTORY FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_typesupport_fastrtps_c/naoqi_bridge_msgs/" REGEX "/[^/]*\\.cpp$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnaoqi_bridge_msgs__rosidl_typesupport_fastrtps_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnaoqi_bridge_msgs__rosidl_typesupport_fastrtps_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnaoqi_bridge_msgs__rosidl_typesupport_fastrtps_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/libnaoqi_bridge_msgs__rosidl_typesupport_fastrtps_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnaoqi_bridge_msgs__rosidl_typesupport_fastrtps_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnaoqi_bridge_msgs__rosidl_typesupport_fastrtps_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnaoqi_bridge_msgs__rosidl_typesupport_fastrtps_c.so"
         OLD_RPATH "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs:/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnaoqi_bridge_msgs__rosidl_typesupport_fastrtps_c.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/naoqi_bridge_msgs/naoqi_bridge_msgs" TYPE DIRECTORY FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_typesupport_introspection_c/naoqi_bridge_msgs/" REGEX "/[^/]*\\.h$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnaoqi_bridge_msgs__rosidl_typesupport_introspection_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnaoqi_bridge_msgs__rosidl_typesupport_introspection_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnaoqi_bridge_msgs__rosidl_typesupport_introspection_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/libnaoqi_bridge_msgs__rosidl_typesupport_introspection_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnaoqi_bridge_msgs__rosidl_typesupport_introspection_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnaoqi_bridge_msgs__rosidl_typesupport_introspection_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnaoqi_bridge_msgs__rosidl_typesupport_introspection_c.so"
         OLD_RPATH "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs:/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnaoqi_bridge_msgs__rosidl_typesupport_introspection_c.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnaoqi_bridge_msgs__rosidl_typesupport_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnaoqi_bridge_msgs__rosidl_typesupport_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnaoqi_bridge_msgs__rosidl_typesupport_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/libnaoqi_bridge_msgs__rosidl_typesupport_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnaoqi_bridge_msgs__rosidl_typesupport_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnaoqi_bridge_msgs__rosidl_typesupport_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnaoqi_bridge_msgs__rosidl_typesupport_c.so"
         OLD_RPATH "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs:/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnaoqi_bridge_msgs__rosidl_typesupport_c.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/naoqi_bridge_msgs/naoqi_bridge_msgs" TYPE DIRECTORY FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_generator_cpp/naoqi_bridge_msgs/" REGEX "/[^/]*\\.hpp$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/naoqi_bridge_msgs/naoqi_bridge_msgs" TYPE DIRECTORY FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_typesupport_fastrtps_cpp/naoqi_bridge_msgs/" REGEX "/[^/]*\\.cpp$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnaoqi_bridge_msgs__rosidl_typesupport_fastrtps_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnaoqi_bridge_msgs__rosidl_typesupport_fastrtps_cpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnaoqi_bridge_msgs__rosidl_typesupport_fastrtps_cpp.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/libnaoqi_bridge_msgs__rosidl_typesupport_fastrtps_cpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnaoqi_bridge_msgs__rosidl_typesupport_fastrtps_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnaoqi_bridge_msgs__rosidl_typesupport_fastrtps_cpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnaoqi_bridge_msgs__rosidl_typesupport_fastrtps_cpp.so"
         OLD_RPATH "/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnaoqi_bridge_msgs__rosidl_typesupport_fastrtps_cpp.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/naoqi_bridge_msgs/naoqi_bridge_msgs" TYPE DIRECTORY FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_typesupport_introspection_cpp/naoqi_bridge_msgs/" REGEX "/[^/]*\\.hpp$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnaoqi_bridge_msgs__rosidl_typesupport_introspection_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnaoqi_bridge_msgs__rosidl_typesupport_introspection_cpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnaoqi_bridge_msgs__rosidl_typesupport_introspection_cpp.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/libnaoqi_bridge_msgs__rosidl_typesupport_introspection_cpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnaoqi_bridge_msgs__rosidl_typesupport_introspection_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnaoqi_bridge_msgs__rosidl_typesupport_introspection_cpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnaoqi_bridge_msgs__rosidl_typesupport_introspection_cpp.so"
         OLD_RPATH "/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnaoqi_bridge_msgs__rosidl_typesupport_introspection_cpp.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnaoqi_bridge_msgs__rosidl_typesupport_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnaoqi_bridge_msgs__rosidl_typesupport_cpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnaoqi_bridge_msgs__rosidl_typesupport_cpp.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/libnaoqi_bridge_msgs__rosidl_typesupport_cpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnaoqi_bridge_msgs__rosidl_typesupport_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnaoqi_bridge_msgs__rosidl_typesupport_cpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnaoqi_bridge_msgs__rosidl_typesupport_cpp.so"
         OLD_RPATH "/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnaoqi_bridge_msgs__rosidl_typesupport_cpp.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/environment" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/ament_cmake_environment_hooks/pythonpath.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/environment" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/ament_cmake_environment_hooks/pythonpath.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/naoqi_bridge_msgs-2.1.0-py3.10.egg-info" TYPE DIRECTORY FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/ament_cmake_python/naoqi_bridge_msgs/naoqi_bridge_msgs.egg-info/")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/naoqi_bridge_msgs" TYPE DIRECTORY FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_generator_py/naoqi_bridge_msgs/" REGEX "/[^/]*\\.pyc$" EXCLUDE REGEX "/\\_\\_pycache\\_\\_$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(
        COMMAND
        "/usr/bin/python3" "-m" "compileall"
        "/home/rosario/ros2_ws/src/install/naoqi_bridge_msgs/local/lib/python3.10/dist-packages/naoqi_bridge_msgs"
      )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/naoqi_bridge_msgs/naoqi_bridge_msgs_s__rosidl_typesupport_fastrtps_c.cpython-310-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/naoqi_bridge_msgs/naoqi_bridge_msgs_s__rosidl_typesupport_fastrtps_c.cpython-310-x86_64-linux-gnu.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/naoqi_bridge_msgs/naoqi_bridge_msgs_s__rosidl_typesupport_fastrtps_c.cpython-310-x86_64-linux-gnu.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/naoqi_bridge_msgs" TYPE SHARED_LIBRARY FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_generator_py/naoqi_bridge_msgs/naoqi_bridge_msgs_s__rosidl_typesupport_fastrtps_c.cpython-310-x86_64-linux-gnu.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/naoqi_bridge_msgs/naoqi_bridge_msgs_s__rosidl_typesupport_fastrtps_c.cpython-310-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/naoqi_bridge_msgs/naoqi_bridge_msgs_s__rosidl_typesupport_fastrtps_c.cpython-310-x86_64-linux-gnu.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/naoqi_bridge_msgs/naoqi_bridge_msgs_s__rosidl_typesupport_fastrtps_c.cpython-310-x86_64-linux-gnu.so"
         OLD_RPATH "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_generator_py/naoqi_bridge_msgs:/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs:/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/naoqi_bridge_msgs/naoqi_bridge_msgs_s__rosidl_typesupport_fastrtps_c.cpython-310-x86_64-linux-gnu.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/naoqi_bridge_msgs/naoqi_bridge_msgs_s__rosidl_typesupport_introspection_c.cpython-310-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/naoqi_bridge_msgs/naoqi_bridge_msgs_s__rosidl_typesupport_introspection_c.cpython-310-x86_64-linux-gnu.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/naoqi_bridge_msgs/naoqi_bridge_msgs_s__rosidl_typesupport_introspection_c.cpython-310-x86_64-linux-gnu.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/naoqi_bridge_msgs" TYPE SHARED_LIBRARY FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_generator_py/naoqi_bridge_msgs/naoqi_bridge_msgs_s__rosidl_typesupport_introspection_c.cpython-310-x86_64-linux-gnu.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/naoqi_bridge_msgs/naoqi_bridge_msgs_s__rosidl_typesupport_introspection_c.cpython-310-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/naoqi_bridge_msgs/naoqi_bridge_msgs_s__rosidl_typesupport_introspection_c.cpython-310-x86_64-linux-gnu.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/naoqi_bridge_msgs/naoqi_bridge_msgs_s__rosidl_typesupport_introspection_c.cpython-310-x86_64-linux-gnu.so"
         OLD_RPATH "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_generator_py/naoqi_bridge_msgs:/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs:/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/naoqi_bridge_msgs/naoqi_bridge_msgs_s__rosidl_typesupport_introspection_c.cpython-310-x86_64-linux-gnu.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/naoqi_bridge_msgs/naoqi_bridge_msgs_s__rosidl_typesupport_c.cpython-310-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/naoqi_bridge_msgs/naoqi_bridge_msgs_s__rosidl_typesupport_c.cpython-310-x86_64-linux-gnu.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/naoqi_bridge_msgs/naoqi_bridge_msgs_s__rosidl_typesupport_c.cpython-310-x86_64-linux-gnu.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/naoqi_bridge_msgs" TYPE SHARED_LIBRARY FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_generator_py/naoqi_bridge_msgs/naoqi_bridge_msgs_s__rosidl_typesupport_c.cpython-310-x86_64-linux-gnu.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/naoqi_bridge_msgs/naoqi_bridge_msgs_s__rosidl_typesupport_c.cpython-310-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/naoqi_bridge_msgs/naoqi_bridge_msgs_s__rosidl_typesupport_c.cpython-310-x86_64-linux-gnu.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/naoqi_bridge_msgs/naoqi_bridge_msgs_s__rosidl_typesupport_c.cpython-310-x86_64-linux-gnu.so"
         OLD_RPATH "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_generator_py/naoqi_bridge_msgs:/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs:/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/naoqi_bridge_msgs/naoqi_bridge_msgs_s__rosidl_typesupport_c.cpython-310-x86_64-linux-gnu.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnaoqi_bridge_msgs__rosidl_generator_py.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnaoqi_bridge_msgs__rosidl_generator_py.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnaoqi_bridge_msgs__rosidl_generator_py.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_generator_py/naoqi_bridge_msgs/libnaoqi_bridge_msgs__rosidl_generator_py.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnaoqi_bridge_msgs__rosidl_generator_py.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnaoqi_bridge_msgs__rosidl_generator_py.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnaoqi_bridge_msgs__rosidl_generator_py.so"
         OLD_RPATH "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs:/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnaoqi_bridge_msgs__rosidl_generator_py.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/msg" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_adapter/naoqi_bridge_msgs/msg/AudioBuffer.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/msg" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_adapter/naoqi_bridge_msgs/msg/BodyROI.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/msg" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_adapter/naoqi_bridge_msgs/msg/BoolStamped.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/msg" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_adapter/naoqi_bridge_msgs/msg/Bumper.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/msg" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_adapter/naoqi_bridge_msgs/msg/EventStamped.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/msg" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_adapter/naoqi_bridge_msgs/msg/FaceROI.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/msg" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_adapter/naoqi_bridge_msgs/msg/FadeRGB.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/msg" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_adapter/naoqi_bridge_msgs/msg/FloatArrayStamped.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/msg" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_adapter/naoqi_bridge_msgs/msg/FloatStamped.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/msg" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_adapter/naoqi_bridge_msgs/msg/HandTouch.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/msg" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_adapter/naoqi_bridge_msgs/msg/HeadTouch.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/msg" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_adapter/naoqi_bridge_msgs/msg/IntArrayStamped.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/msg" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_adapter/naoqi_bridge_msgs/msg/IntStamped.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/msg" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_adapter/naoqi_bridge_msgs/msg/JointAngleTrajectory.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/msg" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_adapter/naoqi_bridge_msgs/msg/JointAnglesWithSpeed.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/msg" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_adapter/naoqi_bridge_msgs/msg/MemoryList.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/msg" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_adapter/naoqi_bridge_msgs/msg/MemoryPairFloat.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/msg" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_adapter/naoqi_bridge_msgs/msg/MemoryPairInt.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/msg" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_adapter/naoqi_bridge_msgs/msg/MemoryPairString.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/msg" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_adapter/naoqi_bridge_msgs/msg/PoseWithConfidenceStamped.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/msg" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_adapter/naoqi_bridge_msgs/msg/RobotInfo.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/msg" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_adapter/naoqi_bridge_msgs/msg/SoundLocated.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/msg" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_adapter/naoqi_bridge_msgs/msg/StatusChangeStamped.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/msg" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_adapter/naoqi_bridge_msgs/msg/StringArrayStamped.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/msg" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_adapter/naoqi_bridge_msgs/msg/StringStamped.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/msg" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_adapter/naoqi_bridge_msgs/msg/WordRecognized.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/srv" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_adapter/naoqi_bridge_msgs/srv/CmdPoseService.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/srv" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_adapter/naoqi_bridge_msgs/srv/CmdVelService.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/srv" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_adapter/naoqi_bridge_msgs/srv/GetBodyROI.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/srv" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_adapter/naoqi_bridge_msgs/srv/GetFacesROI.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/srv" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_adapter/naoqi_bridge_msgs/srv/GetFloat.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/srv" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_adapter/naoqi_bridge_msgs/srv/GetInstalledBehaviors.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/srv" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_adapter/naoqi_bridge_msgs/srv/GetRobotInfo.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/srv" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_adapter/naoqi_bridge_msgs/srv/GetString.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/srv" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_adapter/naoqi_bridge_msgs/srv/GetTruepose.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/srv" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_adapter/naoqi_bridge_msgs/srv/OrthogonalSecurityDistance.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/srv" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_adapter/naoqi_bridge_msgs/srv/SetArmsEnabled.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/srv" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_adapter/naoqi_bridge_msgs/srv/SetFloat.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/srv" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_adapter/naoqi_bridge_msgs/srv/SetString.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/srv" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_adapter/naoqi_bridge_msgs/srv/SetTransform.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/srv" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_adapter/naoqi_bridge_msgs/srv/TangentialSecurityDistance.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/action" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_adapter/naoqi_bridge_msgs/action/Blink.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/action" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_adapter/naoqi_bridge_msgs/action/BodyPose.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/action" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_adapter/naoqi_bridge_msgs/action/BodyPoseWithSpeed.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/action" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_adapter/naoqi_bridge_msgs/action/FollowPath.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/action" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_adapter/naoqi_bridge_msgs/action/JointAnglesWithSpeed.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/action" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_adapter/naoqi_bridge_msgs/action/JointTrajectory.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/action" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_adapter/naoqi_bridge_msgs/action/Listen.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/action" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_adapter/naoqi_bridge_msgs/action/RunBehavior.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/action" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_adapter/naoqi_bridge_msgs/action/SetSpeechVocabulary.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/action" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_adapter/naoqi_bridge_msgs/action/SpeechWithFeedback.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/msg" TYPE FILE FILES "/home/rosario/ros2_ws/src/naoqi_bridge_msgs/msg/AudioBuffer.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/msg" TYPE FILE FILES "/home/rosario/ros2_ws/src/naoqi_bridge_msgs/msg/BodyROI.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/msg" TYPE FILE FILES "/home/rosario/ros2_ws/src/naoqi_bridge_msgs/msg/BoolStamped.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/msg" TYPE FILE FILES "/home/rosario/ros2_ws/src/naoqi_bridge_msgs/msg/Bumper.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/msg" TYPE FILE FILES "/home/rosario/ros2_ws/src/naoqi_bridge_msgs/msg/EventStamped.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/msg" TYPE FILE FILES "/home/rosario/ros2_ws/src/naoqi_bridge_msgs/msg/FaceROI.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/msg" TYPE FILE FILES "/home/rosario/ros2_ws/src/naoqi_bridge_msgs/msg/FadeRGB.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/msg" TYPE FILE FILES "/home/rosario/ros2_ws/src/naoqi_bridge_msgs/msg/FloatArrayStamped.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/msg" TYPE FILE FILES "/home/rosario/ros2_ws/src/naoqi_bridge_msgs/msg/FloatStamped.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/msg" TYPE FILE FILES "/home/rosario/ros2_ws/src/naoqi_bridge_msgs/msg/HandTouch.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/msg" TYPE FILE FILES "/home/rosario/ros2_ws/src/naoqi_bridge_msgs/msg/HeadTouch.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/msg" TYPE FILE FILES "/home/rosario/ros2_ws/src/naoqi_bridge_msgs/msg/IntArrayStamped.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/msg" TYPE FILE FILES "/home/rosario/ros2_ws/src/naoqi_bridge_msgs/msg/IntStamped.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/msg" TYPE FILE FILES "/home/rosario/ros2_ws/src/naoqi_bridge_msgs/msg/JointAngleTrajectory.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/msg" TYPE FILE FILES "/home/rosario/ros2_ws/src/naoqi_bridge_msgs/msg/JointAnglesWithSpeed.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/msg" TYPE FILE FILES "/home/rosario/ros2_ws/src/naoqi_bridge_msgs/msg/MemoryList.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/msg" TYPE FILE FILES "/home/rosario/ros2_ws/src/naoqi_bridge_msgs/msg/MemoryPairFloat.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/msg" TYPE FILE FILES "/home/rosario/ros2_ws/src/naoqi_bridge_msgs/msg/MemoryPairInt.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/msg" TYPE FILE FILES "/home/rosario/ros2_ws/src/naoqi_bridge_msgs/msg/MemoryPairString.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/msg" TYPE FILE FILES "/home/rosario/ros2_ws/src/naoqi_bridge_msgs/msg/PoseWithConfidenceStamped.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/msg" TYPE FILE FILES "/home/rosario/ros2_ws/src/naoqi_bridge_msgs/msg/RobotInfo.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/msg" TYPE FILE FILES "/home/rosario/ros2_ws/src/naoqi_bridge_msgs/msg/SoundLocated.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/msg" TYPE FILE FILES "/home/rosario/ros2_ws/src/naoqi_bridge_msgs/msg/StatusChangeStamped.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/msg" TYPE FILE FILES "/home/rosario/ros2_ws/src/naoqi_bridge_msgs/msg/StringArrayStamped.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/msg" TYPE FILE FILES "/home/rosario/ros2_ws/src/naoqi_bridge_msgs/msg/StringStamped.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/msg" TYPE FILE FILES "/home/rosario/ros2_ws/src/naoqi_bridge_msgs/msg/WordRecognized.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/srv" TYPE FILE FILES "/home/rosario/ros2_ws/src/naoqi_bridge_msgs/srv/CmdPoseService.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/srv" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_cmake/srv/CmdPoseService_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/srv" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_cmake/srv/CmdPoseService_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/srv" TYPE FILE FILES "/home/rosario/ros2_ws/src/naoqi_bridge_msgs/srv/CmdVelService.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/srv" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_cmake/srv/CmdVelService_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/srv" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_cmake/srv/CmdVelService_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/srv" TYPE FILE FILES "/home/rosario/ros2_ws/src/naoqi_bridge_msgs/srv/GetBodyROI.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/srv" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_cmake/srv/GetBodyROI_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/srv" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_cmake/srv/GetBodyROI_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/srv" TYPE FILE FILES "/home/rosario/ros2_ws/src/naoqi_bridge_msgs/srv/GetFacesROI.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/srv" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_cmake/srv/GetFacesROI_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/srv" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_cmake/srv/GetFacesROI_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/srv" TYPE FILE FILES "/home/rosario/ros2_ws/src/naoqi_bridge_msgs/srv/GetFloat.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/srv" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_cmake/srv/GetFloat_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/srv" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_cmake/srv/GetFloat_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/srv" TYPE FILE FILES "/home/rosario/ros2_ws/src/naoqi_bridge_msgs/srv/GetInstalledBehaviors.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/srv" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_cmake/srv/GetInstalledBehaviors_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/srv" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_cmake/srv/GetInstalledBehaviors_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/srv" TYPE FILE FILES "/home/rosario/ros2_ws/src/naoqi_bridge_msgs/srv/GetRobotInfo.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/srv" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_cmake/srv/GetRobotInfo_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/srv" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_cmake/srv/GetRobotInfo_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/srv" TYPE FILE FILES "/home/rosario/ros2_ws/src/naoqi_bridge_msgs/srv/GetString.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/srv" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_cmake/srv/GetString_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/srv" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_cmake/srv/GetString_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/srv" TYPE FILE FILES "/home/rosario/ros2_ws/src/naoqi_bridge_msgs/srv/GetTruepose.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/srv" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_cmake/srv/GetTruepose_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/srv" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_cmake/srv/GetTruepose_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/srv" TYPE FILE FILES "/home/rosario/ros2_ws/src/naoqi_bridge_msgs/srv/OrthogonalSecurityDistance.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/srv" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_cmake/srv/OrthogonalSecurityDistance_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/srv" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_cmake/srv/OrthogonalSecurityDistance_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/srv" TYPE FILE FILES "/home/rosario/ros2_ws/src/naoqi_bridge_msgs/srv/SetArmsEnabled.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/srv" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_cmake/srv/SetArmsEnabled_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/srv" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_cmake/srv/SetArmsEnabled_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/srv" TYPE FILE FILES "/home/rosario/ros2_ws/src/naoqi_bridge_msgs/srv/SetFloat.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/srv" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_cmake/srv/SetFloat_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/srv" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_cmake/srv/SetFloat_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/srv" TYPE FILE FILES "/home/rosario/ros2_ws/src/naoqi_bridge_msgs/srv/SetString.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/srv" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_cmake/srv/SetString_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/srv" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_cmake/srv/SetString_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/srv" TYPE FILE FILES "/home/rosario/ros2_ws/src/naoqi_bridge_msgs/srv/SetTransform.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/srv" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_cmake/srv/SetTransform_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/srv" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_cmake/srv/SetTransform_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/srv" TYPE FILE FILES "/home/rosario/ros2_ws/src/naoqi_bridge_msgs/srv/TangentialSecurityDistance.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/srv" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_cmake/srv/TangentialSecurityDistance_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/srv" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_cmake/srv/TangentialSecurityDistance_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/action" TYPE FILE FILES "/home/rosario/ros2_ws/src/naoqi_bridge_msgs/action/Blink.action")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/action" TYPE FILE FILES "/home/rosario/ros2_ws/src/naoqi_bridge_msgs/action/BodyPose.action")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/action" TYPE FILE FILES "/home/rosario/ros2_ws/src/naoqi_bridge_msgs/action/BodyPoseWithSpeed.action")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/action" TYPE FILE FILES "/home/rosario/ros2_ws/src/naoqi_bridge_msgs/action/FollowPath.action")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/action" TYPE FILE FILES "/home/rosario/ros2_ws/src/naoqi_bridge_msgs/action/JointAnglesWithSpeed.action")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/action" TYPE FILE FILES "/home/rosario/ros2_ws/src/naoqi_bridge_msgs/action/JointTrajectory.action")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/action" TYPE FILE FILES "/home/rosario/ros2_ws/src/naoqi_bridge_msgs/action/Listen.action")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/action" TYPE FILE FILES "/home/rosario/ros2_ws/src/naoqi_bridge_msgs/action/RunBehavior.action")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/action" TYPE FILE FILES "/home/rosario/ros2_ws/src/naoqi_bridge_msgs/action/SetSpeechVocabulary.action")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/action" TYPE FILE FILES "/home/rosario/ros2_ws/src/naoqi_bridge_msgs/action/SpeechWithFeedback.action")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/naoqi_bridge_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/naoqi_bridge_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/environment" TYPE FILE FILES "/opt/ros/humble/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/environment" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/environment" TYPE FILE FILES "/opt/ros/humble/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/environment" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/ament_cmake_environment_hooks/path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/ament_cmake_environment_hooks/local_setup.bash")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/ament_cmake_environment_hooks/local_setup.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/ament_cmake_environment_hooks/package.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/ament_cmake_index/share/ament_index/resource_index/packages/naoqi_bridge_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/cmake/export_naoqi_bridge_msgs__rosidl_generator_cExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/cmake/export_naoqi_bridge_msgs__rosidl_generator_cExport.cmake"
         "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/CMakeFiles/Export/share/naoqi_bridge_msgs/cmake/export_naoqi_bridge_msgs__rosidl_generator_cExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/cmake/export_naoqi_bridge_msgs__rosidl_generator_cExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/cmake/export_naoqi_bridge_msgs__rosidl_generator_cExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/cmake" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/CMakeFiles/Export/share/naoqi_bridge_msgs/cmake/export_naoqi_bridge_msgs__rosidl_generator_cExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/cmake" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/CMakeFiles/Export/share/naoqi_bridge_msgs/cmake/export_naoqi_bridge_msgs__rosidl_generator_cExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/cmake/export_naoqi_bridge_msgs__rosidl_typesupport_fastrtps_cExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/cmake/export_naoqi_bridge_msgs__rosidl_typesupport_fastrtps_cExport.cmake"
         "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/CMakeFiles/Export/share/naoqi_bridge_msgs/cmake/export_naoqi_bridge_msgs__rosidl_typesupport_fastrtps_cExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/cmake/export_naoqi_bridge_msgs__rosidl_typesupport_fastrtps_cExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/cmake/export_naoqi_bridge_msgs__rosidl_typesupport_fastrtps_cExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/cmake" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/CMakeFiles/Export/share/naoqi_bridge_msgs/cmake/export_naoqi_bridge_msgs__rosidl_typesupport_fastrtps_cExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/cmake" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/CMakeFiles/Export/share/naoqi_bridge_msgs/cmake/export_naoqi_bridge_msgs__rosidl_typesupport_fastrtps_cExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/cmake/naoqi_bridge_msgs__rosidl_typesupport_introspection_cExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/cmake/naoqi_bridge_msgs__rosidl_typesupport_introspection_cExport.cmake"
         "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/CMakeFiles/Export/share/naoqi_bridge_msgs/cmake/naoqi_bridge_msgs__rosidl_typesupport_introspection_cExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/cmake/naoqi_bridge_msgs__rosidl_typesupport_introspection_cExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/cmake/naoqi_bridge_msgs__rosidl_typesupport_introspection_cExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/cmake" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/CMakeFiles/Export/share/naoqi_bridge_msgs/cmake/naoqi_bridge_msgs__rosidl_typesupport_introspection_cExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/cmake" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/CMakeFiles/Export/share/naoqi_bridge_msgs/cmake/naoqi_bridge_msgs__rosidl_typesupport_introspection_cExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/cmake/naoqi_bridge_msgs__rosidl_typesupport_cExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/cmake/naoqi_bridge_msgs__rosidl_typesupport_cExport.cmake"
         "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/CMakeFiles/Export/share/naoqi_bridge_msgs/cmake/naoqi_bridge_msgs__rosidl_typesupport_cExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/cmake/naoqi_bridge_msgs__rosidl_typesupport_cExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/cmake/naoqi_bridge_msgs__rosidl_typesupport_cExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/cmake" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/CMakeFiles/Export/share/naoqi_bridge_msgs/cmake/naoqi_bridge_msgs__rosidl_typesupport_cExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/cmake" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/CMakeFiles/Export/share/naoqi_bridge_msgs/cmake/naoqi_bridge_msgs__rosidl_typesupport_cExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/cmake/export_naoqi_bridge_msgs__rosidl_generator_cppExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/cmake/export_naoqi_bridge_msgs__rosidl_generator_cppExport.cmake"
         "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/CMakeFiles/Export/share/naoqi_bridge_msgs/cmake/export_naoqi_bridge_msgs__rosidl_generator_cppExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/cmake/export_naoqi_bridge_msgs__rosidl_generator_cppExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/cmake/export_naoqi_bridge_msgs__rosidl_generator_cppExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/cmake" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/CMakeFiles/Export/share/naoqi_bridge_msgs/cmake/export_naoqi_bridge_msgs__rosidl_generator_cppExport.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/cmake/export_naoqi_bridge_msgs__rosidl_typesupport_fastrtps_cppExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/cmake/export_naoqi_bridge_msgs__rosidl_typesupport_fastrtps_cppExport.cmake"
         "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/CMakeFiles/Export/share/naoqi_bridge_msgs/cmake/export_naoqi_bridge_msgs__rosidl_typesupport_fastrtps_cppExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/cmake/export_naoqi_bridge_msgs__rosidl_typesupport_fastrtps_cppExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/cmake/export_naoqi_bridge_msgs__rosidl_typesupport_fastrtps_cppExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/cmake" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/CMakeFiles/Export/share/naoqi_bridge_msgs/cmake/export_naoqi_bridge_msgs__rosidl_typesupport_fastrtps_cppExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/cmake" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/CMakeFiles/Export/share/naoqi_bridge_msgs/cmake/export_naoqi_bridge_msgs__rosidl_typesupport_fastrtps_cppExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/cmake/naoqi_bridge_msgs__rosidl_typesupport_introspection_cppExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/cmake/naoqi_bridge_msgs__rosidl_typesupport_introspection_cppExport.cmake"
         "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/CMakeFiles/Export/share/naoqi_bridge_msgs/cmake/naoqi_bridge_msgs__rosidl_typesupport_introspection_cppExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/cmake/naoqi_bridge_msgs__rosidl_typesupport_introspection_cppExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/cmake/naoqi_bridge_msgs__rosidl_typesupport_introspection_cppExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/cmake" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/CMakeFiles/Export/share/naoqi_bridge_msgs/cmake/naoqi_bridge_msgs__rosidl_typesupport_introspection_cppExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/cmake" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/CMakeFiles/Export/share/naoqi_bridge_msgs/cmake/naoqi_bridge_msgs__rosidl_typesupport_introspection_cppExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/cmake/naoqi_bridge_msgs__rosidl_typesupport_cppExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/cmake/naoqi_bridge_msgs__rosidl_typesupport_cppExport.cmake"
         "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/CMakeFiles/Export/share/naoqi_bridge_msgs/cmake/naoqi_bridge_msgs__rosidl_typesupport_cppExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/cmake/naoqi_bridge_msgs__rosidl_typesupport_cppExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/cmake/naoqi_bridge_msgs__rosidl_typesupport_cppExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/cmake" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/CMakeFiles/Export/share/naoqi_bridge_msgs/cmake/naoqi_bridge_msgs__rosidl_typesupport_cppExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/cmake" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/CMakeFiles/Export/share/naoqi_bridge_msgs/cmake/naoqi_bridge_msgs__rosidl_typesupport_cppExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/cmake/export_naoqi_bridge_msgs__rosidl_generator_pyExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/cmake/export_naoqi_bridge_msgs__rosidl_generator_pyExport.cmake"
         "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/CMakeFiles/Export/share/naoqi_bridge_msgs/cmake/export_naoqi_bridge_msgs__rosidl_generator_pyExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/cmake/export_naoqi_bridge_msgs__rosidl_generator_pyExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/cmake/export_naoqi_bridge_msgs__rosidl_generator_pyExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/cmake" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/CMakeFiles/Export/share/naoqi_bridge_msgs/cmake/export_naoqi_bridge_msgs__rosidl_generator_pyExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/cmake" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/CMakeFiles/Export/share/naoqi_bridge_msgs/cmake/export_naoqi_bridge_msgs__rosidl_generator_pyExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/cmake" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_cmake/rosidl_cmake-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/cmake" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/ament_cmake_export_dependencies/ament_cmake_export_dependencies-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/cmake" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/ament_cmake_export_include_directories/ament_cmake_export_include_directories-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/cmake" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/ament_cmake_export_libraries/ament_cmake_export_libraries-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/cmake" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/ament_cmake_export_targets/ament_cmake_export_targets-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/cmake" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_cmake/rosidl_cmake_export_typesupport_targets-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/cmake" TYPE FILE FILES "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/rosidl_cmake/rosidl_cmake_export_typesupport_libraries-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs/cmake" TYPE FILE FILES
    "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/ament_cmake_core/naoqi_bridge_msgsConfig.cmake"
    "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/ament_cmake_core/naoqi_bridge_msgsConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/naoqi_bridge_msgs" TYPE FILE FILES "/home/rosario/ros2_ws/src/naoqi_bridge_msgs/package.xml")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/naoqi_bridge_msgs__py/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/rosario/ros2_ws/src/build/naoqi_bridge_msgs/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
