cmake_minimum_required(VERSION 3.26)
project(sfmlPong)
add_executable(Pong main.cpp
        const_variables.h
        Objects/Player.cpp
        Objects/Player.h
        Objects/Ball.cpp
        Objects/Ball.h
        Objects/Collision.cpp
        Objects/Collision.h
        Game.cpp
        Game.h
)
set(CMAKE_CXX_STANDARD 17)
set(SFML_STATIC_LIBRARIES TRUE)
set(SFML_DIR SFML/lib/cmake/SFML)
find_package(SFML COMPONENTS system window graphics network REQUIRED)
include_directories(SFML/include)
target_link_libraries(Pong sfml-system sfml-window sfml-graphics sfml-audio)
