//
// Created by Gabor on 2019. 07. 17..
//

#include "Car.h"

void Car::drive()
{
    _gas -= 5;
}

void Car::refill()
{
    _gas = 100;
}

int Car::getGas()
{
    return _gas;
}

Car::Car()
{
    _gas = 100;
}
