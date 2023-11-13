cmake_minimum_required(VERSION 3.26)
project(fproj)

set(CMAKE_CXX_STANDARD 11)

add_executable(fproj src/main.cpp
        include/menu.h
        src/menu.cpp
)
