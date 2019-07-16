//
// Created by Gabor on 2019. 07. 16..
//

#include "Printer2D.h"

std::string Printer2D::getSize()
{
    return std::to_string(_sizeX) + " X " + std::to_string(_sizeY);
}

Printer2D::Printer2D(int sizeX, int sizeY) : _sizeX(sizeX), _sizeY(sizeY)
{}
