cmake_minimum_required(VERSION 3.27)
project(CppProject)

set(CMAKE_CXX_STANDARD 17)


add_executable(CppProject main.cpp
        inc/Ship.h
        inc/Event.h
        inc/fastship.h
        src/fastship.cpp
        inc/Asteroids.h
        src/Asteroids.cpp
        src/Event.cpp
        src/Event.cpp)
