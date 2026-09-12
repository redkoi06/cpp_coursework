cmake_minimum_required(VERSION 4.1)
project(cpp)

set(CMAKE_CXX_STANDARD 20)

add_executable(cpp main.cpp)

add_subdirectory(lab1)

add_subdirectory(leetcode)