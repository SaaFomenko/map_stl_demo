cmake_minimum_required(VERSION 3.18)

project(map_stl_demo)

# set the C++ standard
set(CMAKE_CXX_STANDARD 17)


set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

add_executable(${PROJECT_NAME}.exe main.cpp)
