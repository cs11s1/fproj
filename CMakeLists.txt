cmake_minimum_required(VERSION 3.1)
project(fproj)

set(CMAKE_CXX_STANDARD 14)

add_executable(fproj src/main.cpp
        include/main.h
        include/mainmenu.h
        include/mainmenu.cpp
        include/login.h
        include/login.cpp
        include/stationselect.h
        include/stationselect.cpp
        include/ticketsummary.h
        include/ticketsummary.cpp
        include/utils.h
        include/utils.cpp
)
