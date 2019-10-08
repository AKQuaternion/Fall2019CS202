cmake_minimum_required(VERSION 3.14)
project(OverloadedOperators)

set(CMAKE_CXX_STANDARD 17)

add_executable(OverloadedOperators main.cpp MyInt.cpp MyInt.hpp)