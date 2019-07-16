cmake_minimum_required(VERSION 3.14)
project(Model_devices)

set(CMAKE_CXX_STANDARD 14)

add_executable(Model_devices main.cpp Printer.cpp Printer.h Printer3D.cpp Printer3D.h Printer2D.cpp Printer2D.h Scanner.cpp Scanner.h Copier.cpp Copier.h)