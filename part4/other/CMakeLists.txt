cmake_minimum_required(VERSION 3.10)
project(MyProject)

set(SRC_DIR src)
set(CAPSTONE_DIR ${CMAKE_SOURCE_DIR}/external/capstone)

# Include capstone headers
include_directories(${CAPSTONE_DIR}/include)

# Add executable
add_executable(my_program ${SRC_DIR}/main.cpp)

# Tell CMake where to find Capstone (-L flag)
target_link_directories(my_program PRIVATE ${CAPSTONE_DIR}/lib)

# Link the manually built static Capstone library (tells the linker to use -lcapstone correctly)
target_link_libraries(my_program PRIVATE capstone)
