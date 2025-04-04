cmake_minimum_required(VERSION 3.10)
project(ModernCMakeExample)

add_subdirectory(helpers)

add_executable(my_program src/main.cpp)
target_link_libraries(my_program PRIVATE math_utils)