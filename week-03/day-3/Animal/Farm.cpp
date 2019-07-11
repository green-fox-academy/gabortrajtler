//
// Created by Gabor on 2019. 07. 11..
//

#include <iostream>
#include "Farm.h"

void Farm::breed()
{
    if (_openSpace > 0) {
        _animals.push_back(Animal());
        std::cout << "Animal born." << std::endl;
        _openSpace--;
    } else {
        std::cout << "No more space on this farm." << std::endl;
    }
}

Farm::Farm(int openSpace) : _openSpace(openSpace)
{}

void Farm::slaughter()
{
    int min = _animals[0].getHunger();
    int imin = 0;
    for (int i = 0; i < _animals.size(); ++i) {
        if (min > _animals[i].getHunger()) {
            min = _animals[i].getHunger();
            imin = i;
        }
    }
    _animals.erase(_animals.begin()+imin);
    std::cout << "slaughtered " << imin << ". animal. :-(" << std::endl;
    _openSpace++;
}

int Farm::getOpenSpace() const
{
    return _openSpace;
}

void Farm::feedAnimal(int animalNumber)
{
    _animals[animalNumber].eat();
    std::cout << animalNumber << ". animal got some food." << std::endl;
}

