cmake_minimum_required(VERSION 2.8.4)
project(foreign_object_detector)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

add_subdirectory (src)
add_subdirectory (test)
enable_testing()

find_package(OpenCV REQUIRED)

add_test(NAME Tests COMMAND Test)
add_executable(foreign_object_detector src/main.cpp)
target_link_libraries(foreign_object_detector ${OpenCV_LIBS})