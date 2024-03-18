cmake_minimum_required(VERSION 3.27)
project(CppProject)

set(CMAKE_CXX_STANDARD 17)


add_executable(CppProject main.cpp
        inc/Ship.h
        inc/Event.h
        inc/fastship.h
        inc/strongship.h
        inc/normalship.h
        inc/Asteroids.h
        inc/Pirate.h
        inc/AbondonedPlanet.h
        inc/Game.h
        src/fastship.cpp
        src/Asteroids.cpp
        src/strongship.cpp
        src/normalship.cpp
        src/Pirate.cpp
        src/Game.cpp
        src/AbondonedPlanet.cpp

)
