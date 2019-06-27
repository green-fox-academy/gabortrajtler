#include <iostream>

int main() {
    // Write a program that stores 3 sides of a cuboid as variables (doubles)
    // The program should write the surface area and volume of the cuboid like:
    //
    // Surface Area: 600
    // Volume: 1000

    double cubeSide1 = 1;
    double cubeSide2 = 2;
    double cubeSide3 = 3;

    double volume = cubeSide1 * cubeSide2 * cubeSide3;
    double totalSurface = (cubeSide1 * cubeSide2 * 2) + (cubeSide1 * cubeSide3 * 2) + (cubeSide2 * cubeSide3 * 2);

    std::cout << "total surface: " << totalSurface << ", volume: " << volume << std::endl;
    return 0;
}