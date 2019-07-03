cmake_minimum_required(VERSION 3.14)
project(DrawProject_SDL2)

set(CMAKE_CXX_STANDARD 14)

set(SDL2_ROOT_PATH D:/greenfox/libs/SDL2_windows/)

IF(WIN32)
    set(MINGW_VERSION i686-w64-mingw32)
ENDIF()

set(EXECUTABLES "draw;draw2;middle_lines;colored_box;diagonals;go_to_center;horizontal;centered_square;four_rectangles;position_square;position_square_halm")
set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

find_package(GFA_SDL2 REQUIRED)