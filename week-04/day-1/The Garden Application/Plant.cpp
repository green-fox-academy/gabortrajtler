//
// Created by Gabor on 2019. 07. 15..
//

#include <string>
#include "Plant.h"

Plant::Plant(plantType plantType, plantColor plantColor) : _plantType(plantType), _plantColor(plantColor)
{
    _wateringLevel = 0;
    _needsWatering = true;
}

std::string Plant::getPlantTypeToString() const
{
    switch (_plantType) {
        case plantType::TREE:
            return "Tree";
        case plantType::FLOWER:
            return "Flower";
        default:
            return "n/a";
    }
}

std::string Plant::getPlantColorToString() const
{
    switch (_plantColor) {
        case plantColor::PURPLE:
            return "purple";
        case plantColor::YELLOW:
            return "yellow";
        case plantColor::BLUE:
            return "blue";
        case plantColor::ORANGE:
            return "orange";
        default:
            return "n/a";
    }
}


int Plant::getWateringLevel() const
{
    return _wateringLevel;
}