cmake_minimum_required(VERSION 3.27)
project(CppProject)

set(CMAKE_CXX_STANDARD 17)


add_executable(CppProject main.cpp
        inc/Ship.h
        inc/Event.h
        inc/fastship.h
        inc/Asteroids.h
        src/fastship.cpp
        src/Asteroids.cpp
        inc/strongship.h
        inc/normalship.h
        src/strongship.cpp
        src/normalship.cpp
)
