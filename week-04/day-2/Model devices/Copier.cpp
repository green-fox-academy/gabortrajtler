//
// Created by Gabor on 2019. 07. 16..
//

#include <iostream>
#include "Copier.h"

Copier::Copier(int sizeX, int sizeY, int speed) : Printer2D(sizeX, sizeY), Scanner(speed)
{}

void Copier::copy()
{
    scan();
    std::cout << " and ";
    print();
}
