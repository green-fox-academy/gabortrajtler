cmake_minimum_required(VERSION 3.14)
project(Fleet_of_Things)

set(CMAKE_CXX_STANDARD 14)

add_executable(Fleet_of_Things main.cpp fleet.cpp fleet.h thing.cpp thing.h)