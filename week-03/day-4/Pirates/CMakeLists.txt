cmake_minimum_required(VERSION 3.14)
project(Pirates)

set(CMAKE_CXX_STANDARD 14)

add_executable(Pirates main.cpp Pirate.cpp Pirate.h Ship.cpp Ship.h Resources.cpp Resources.h)