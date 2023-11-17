cmake_minimum_required(VERSION 3.1)
project(fproj)

set(CMAKE_CXX_STANDARD 14)

add_executable(fproj src/main.cpp
        include/main.h
        include/login.h
        include/login.cpp
)
