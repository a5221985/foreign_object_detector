cmake_minimum_required(VERSION 2.8.4)
project(foreign_object_detector)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

find_package(OpenCV REQUIRED)
find_package(Boost COMPONENTS system filesystem unit_test_framework REQUIRED)

set(SOURCE_FILES main.cpp)
add_executable(foreign_object_detector ${SOURCE_FILES})

target_link_libraries(foreign_object_detector ${OpenCV_LIBS} ${Boost_FILESYSTEM_LIBRARY} ${Boost_SYSTEM_LIBRARY} ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY})