cmake_minimum_required(VERSION 3.27)

project(algorithm DESCRIPTION "algorithm project")

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED on)
set(CMAKE_C_EXTENSIONS OFF)

add_executable(algorithm source/main.cpp)

target_include_directories(algorithm PUBLIC
    $<BUILD_INTERFACE: ${CMAKE_CURRENT_LIST_DIR}/source>
)

install(TARGETS algorithm
    DESTINATION ${CMAKE_CURRENT_LIST_DIR}/bin
)