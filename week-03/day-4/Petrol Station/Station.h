//
// Created by Gabor on 2019. 07. 11..
//

#ifndef PETROL_STATION_STATION_H
#define PETROL_STATION_STATION_H

#include "Car.h"

class Station
{
public:
    Station(int gasAmount);
    void fill(Car &car);

private:
    int gasAmount;
};


#endif //PETROL_STATION_STATION_H
