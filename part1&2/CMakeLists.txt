cmake_minimum_required(VERSION 3.10)
project(FirstCMakeProject)

set(EXECUTABLE_NAME my_program)

option(ENABLE_DEBUG "Enable debug mode" OFF)
option(ENABLE_VERBOSE "Enable verbos mode" OFF)

add_executable(${EXECUTABLE_NAME} main.cpp)

if (ENABLE_DEBUG)
    message(STATUS "Debug mode enabled")
    target_compile_definitions(${EXECUTABLE_NAME} PRIVATE DEBUG_MODE)
endif()

if (ENABLE_VERBOSE)
    message(STATUS "Verbos mode enabled")
    target_compile_definitions(${EXECUTABLE_NAME} PRIVATE VERBOS_MODE)
endif()
