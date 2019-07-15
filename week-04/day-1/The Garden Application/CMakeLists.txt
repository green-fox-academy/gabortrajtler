cmake_minimum_required(VERSION 3.14)
project(The_Garden_Application)

set(CMAKE_CXX_STANDARD 14)

add_executable(The_Garden_Application main.cpp Plant.cpp Plant.h Garden.cpp Garden.h Flower.cpp Flower.h Tree.cpp Tree.h)