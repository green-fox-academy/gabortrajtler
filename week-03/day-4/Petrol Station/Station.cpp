//
// Created by Gabor on 2019. 07. 11..
//

#include <iostream>
#include "Station.h"

Station::Station(int gasAmount) : gasAmount(gasAmount)
{}

void Station::fill(Car &car)
{
    while (!car.isFull()){
        car.fill();
        std::cout << "Station: Filling car!" << std::endl;
        gasAmount--;
    }
    std::cout << "Station: Remaining gas on the station: " << gasAmount << std::endl;
}