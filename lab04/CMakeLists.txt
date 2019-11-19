cmake_minimum_required(VERSION 3.14)
project(lab04)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wuseless-cast")

set(CMAKE_CXX_STANDARD 14)

add_executable(lab04
        lab04.cpp)
