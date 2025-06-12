cmake_minimum_required(VERSION 3.10)

# Allow targets to be modified from outside
cmake_policy(SET CMP0079 NEW)

# Set the project name
project(
        FleetWatch
        VERSION 1.0.0
        DESCRIPTION "Real-Time Fleet Tracker and Alert System."
        LANGUAGES CXX
)

# Set C++ standards
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Set build type
set(CMAKE_BUILD_TYPE Debug)

set(FW_SRC_DIR ${CMAKE_SOURCE_DIR}/src)
set(FW_PROJECT_NAME ${PROJECT_NAME})

add_subdirectory(src)

# Include headers in the include directory
target_include_directories(${FW_PROJECT_NAME} PRIVATE ${FW_SRC_DIR}/include)