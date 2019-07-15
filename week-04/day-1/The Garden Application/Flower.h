//
// Created by Gabor on 2019. 07. 15..
//

#ifndef THE_GARDEN_APPLICATION_FLOWER_H
#define THE_GARDEN_APPLICATION_FLOWER_H


#include "Plant.h"

class Flower : public Plant
{
public:
    Flower(plantColor plantColor);
    bool needsWatering() override;
    void water(int amount) override;
};


#endif //THE_GARDEN_APPLICATION_FLOWER_H
