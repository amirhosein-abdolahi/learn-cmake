cmake_minimum_required(VERSION 3.10)
project(MyProject)

set(SRC_DIR src)

add_executable(my_program ${SRC_DIR}/main.cpp)

# Find and link Eigen
find_package(Eigen3 REQUIRED)
target_link_directories(my_program PRIVATE ${EIGEN3_INCLUDE_DIRS})