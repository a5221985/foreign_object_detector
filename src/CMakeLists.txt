add_library (Math math.cpp math.hpp)
add_executable (fod_project_src main.cpp)
target_link_libraries (fod_project_src Math)