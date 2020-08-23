cmake_minimum_required(VERSION 3.5)
project(core_lib)


include_directories(include)
include_directories(common)
include_directories(${OpenCV_INCLUDE_DIRS})
add_library(tracker_lib
        src/filter/kalman_linear.cpp
        )
target_link_libraries(tracker_lib ${OpenCV_LIBS})