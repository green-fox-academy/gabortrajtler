//
// Created by Gabor on 2019. 07. 15..
//

#include "Tree.h"

Tree::Tree(plantColor plantColor) : Plant(plantType::TREE, plantColor)
{}

bool Tree::needsWatering()
{
    return (getWateringLevel()<10);
}

void Tree::water(int amount)
{
    _wateringLevel += amount*0.4;
}
