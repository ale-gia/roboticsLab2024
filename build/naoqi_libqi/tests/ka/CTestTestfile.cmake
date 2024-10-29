# CMake generated Testfile for 
# Source directory: /home/ros/ros2_ws/src/naoqi_libqi/tests/ka
# Build directory: /home/ros/ros2_ws/src/build/naoqi_libqi/tests/ka
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_ka "/usr/bin/python3" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/ros/ros2_ws/src/build/naoqi_libqi/test_results/naoqi_libqi/test_ka.gtest.xml" "--package-name" "naoqi_libqi" "--output-file" "/home/ros/ros2_ws/src/build/naoqi_libqi/ament_cmake_gtest/test_ka.txt" "--command" "/home/ros/ros2_ws/src/build/naoqi_libqi/tests/ka/test_ka" "--gtest_output=xml:/home/ros/ros2_ws/src/build/naoqi_libqi/test_results/naoqi_libqi/test_ka.gtest.xml")
set_tests_properties(test_ka PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/ros/ros2_ws/src/build/naoqi_libqi/tests/ka/test_ka" TIMEOUT "60" WORKING_DIRECTORY "/home/ros/ros2_ws/src/build/naoqi_libqi/tests/ka" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/humble/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/ros/ros2_ws/src/naoqi_libqi/tests/ka/CMakeLists.txt;5;ament_add_gtest;/home/ros/ros2_ws/src/naoqi_libqi/tests/ka/CMakeLists.txt;0;")
subdirs("../../gtest")
