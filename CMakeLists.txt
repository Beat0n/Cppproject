cmake_minimum_required(VERSION 3.23)
project(projects)

set(CMAKE_CXX_STANDARD 14)

set(SOURCES main.cpp Algorithm/Sort.cpp)

add_executable(projects ${SOURCES})
