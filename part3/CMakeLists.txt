cmake_minimum_required(VERSION 3.10)
project(MyProject)

# Set project source directories
set(SRC_DIR src)
set(INCLUDE_DIR include)

# Include header files
include_directories(${INCLUDE_DIR})

# Create a library from math_function.cpp
add_library(math_lib ${SRC_DIR}/math_functions.cpp)

# Create the main executable
add_executable(my_program ${SRC_DIR}/main.cpp)

# Linke the library to executable
target_link_libraries(my_program PRIVATE math_lib)