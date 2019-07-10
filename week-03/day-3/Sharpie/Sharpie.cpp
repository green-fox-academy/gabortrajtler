//
// Created by Gabor on 2019. 07. 10..
//

#include "Sharpie.h"

Sharpie::Sharpie(const std::string &color, float width) : _color(color), _width(width)
{
    setInkAmount(100);
}

const std::string &Sharpie::getColor() const
{
    return _color;
}

void Sharpie::setColor(const std::string &color)
{
    Sharpie::_color = color;
}

float Sharpie::getWidth() const
{
    return _width;
}

void Sharpie::setWidth(float width)
{
    Sharpie::_width = width;
}

float Sharpie::getInkAmount() const
{
    return _inkAmount;
}

void Sharpie::setInkAmount(float inkAmount)
{
    Sharpie::_inkAmount = inkAmount;
}

void Sharpie::use()
{
    _inkAmount--;
}
