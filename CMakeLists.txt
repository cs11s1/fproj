cmake_minimum_required(VERSION 3.1)
project(fproj)

set(CMAKE_CXX_STANDARD 14)

add_executable(fproj src/main.cpp
        include/menu.h
        include/menu.cpp
        include/menufactory.cpp
        include/menufactory.h
        include/optionmenu.cpp
        include/optionmenu.h
)
