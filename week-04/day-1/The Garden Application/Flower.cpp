//
// Created by Gabor on 2019. 07. 15..
//

#include "Flower.h"

Flower::Flower(plantColor plantColor) : Plant(plantType::FLOWER, plantColor)
{}

bool Flower::needsWatering()
{
    return (getWateringLevel() < 5);
}

void Flower::water(int amount)
{
    _wateringLevel += amount*0.75;
}
