//
// Created by Gabor on 2019. 07. 15..
//

#ifndef THE_GARDEN_APPLICATION_PLANT_H
#define THE_GARDEN_APPLICATION_PLANT_H

#include <string>
enum class plantType
{
    FLOWER,
    TREE
};

enum class plantColor
{
    YELLOW,
    BLUE,
    PURPLE,
    ORANGE
};

class Plant
{
public:
    Plant(plantType plantType, plantColor plantColor);

public:
    std::string getPlantTypeToString() const;
    std::string getPlantColorToString() const;
    int getWateringLevel() const;
    virtual bool needsWatering() = 0;   // pure virtual function
    virtual void water(int amount) = 0; // pure virtual function

protected:
    plantType _plantType;
    plantColor _plantColor;
    float _wateringLevel;
    bool _needsWatering;
};


#endif //THE_GARDEN_APPLICATION_PLANT_H
