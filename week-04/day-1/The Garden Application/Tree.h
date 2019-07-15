//
// Created by Gabor on 2019. 07. 15..
//

#ifndef THE_GARDEN_APPLICATION_TREE_H
#define THE_GARDEN_APPLICATION_TREE_H


#include "Plant.h"

class Tree : public Plant
{
public:
    Tree(plantColor plantColor);
    bool needsWatering() override;
    void water(int amount) override;

};


#endif //THE_GARDEN_APPLICATION_TREE_H
