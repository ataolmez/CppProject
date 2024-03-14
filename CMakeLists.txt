cmake_minimum_required(VERSION 3.27)
project(CppProject)

set(CMAKE_CXX_STANDARD 17)


add_executable(CppProject main.cpp
        inc/Ship.h
        src/Ship.cpp
        inc/Event.h
        src/Event.cpp)
