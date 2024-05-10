cmake_minimum_required(VERSION 3.14)
project(HelloWorld)

set(CMAKE_EXPORT_COMPILE_COMMANDS true)
set (CMAKE_CXX_STANDARD 17)


# SET (CMAKE_CXX_COMPILER             "/usr/bin/clang++")
add_executable(hello_world main.cpp)
