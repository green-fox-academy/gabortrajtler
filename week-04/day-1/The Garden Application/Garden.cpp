//
// Created by Gabor on 2019. 07. 15..
//

#include <iostream>
#include "Garden.h"

void Garden::addPlants(Plant *plant)
{
    _plants.push_back(plant);
}

void Garden::info()
{
    for (int i = 0; i < _plants.size(); ++i) {
        if(_plants[i]->needsWatering()){
            std::cout << "The " << _plants[i]->getPlantColorToString() << " " << _plants[i]->getPlantTypeToString() << " needs water" << std::endl;
        } else {
            std::cout << "The " << _plants[i]->getPlantColorToString() << " " << _plants[i]->getPlantTypeToString() << " doesn't need water" << std::endl;
        }
    }
    std::cout << std::endl;
}

void Garden::watering(int amount)
{
    std::cout << "Watering with " << amount << std::endl;
    for (int i = 0; i < _plants.size(); ++i) {
        _plants[i]->water(amount/_plants.size());
    }
    info();
}
