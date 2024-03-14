cmake_minimum_required(VERSION 3.27)
project(CppProject)

set(CMAKE_CXX_STANDARD 17)

include_directories(inc)
set(SOURCE_FILES src/normalship.cpp src/fastship.cpp src/strongship.cpp src/Asteroids.cpp)


add_executable(CppProject main.cpp${SOURCE_FILES})

