//
// Created by Gabor on 2019. 07. 15..
//

#ifndef THE_GARDEN_APPLICATION_GARDEN_H
#define THE_GARDEN_APPLICATION_GARDEN_H


#include <vector>
#include "Plant.h"

class Garden
{
    std::vector<Plant*> _plants;

public:
    void addPlants(Plant* plant);

    void info();

    void watering(int amount);
};


#endif //THE_GARDEN_APPLICATION_GARDEN_H
