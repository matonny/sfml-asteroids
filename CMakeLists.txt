cmake_minimum_required(VERSION 3.16)
project(asteroids)

set(CMAKE_CXX_STANDARD 11)
set(SFML_INCLUDE_DIR "./SFML/include")
set(SFML_LIBRARY_DIR "./SFML/build/lib")

#add_compile_options(-Wall -Wextra -pedantic)

link_directories(SFML_LIBRARY_DIR)
include_directories(SFML_INCLUDE_DIR)

find_package(SFML 2.5.1 COMPONENTS system window graphics network audio)

add_executable(asteroids main.cpp Game.cpp Game.h Visible.cpp Visible.h Player.cpp Player.h GameObjectManager.cpp GameObjectManager.h Rock.cpp Rock.h Bullet.cpp Bullet.h)
target_link_libraries (asteroids sfml-graphics sfml-window sfml-system)