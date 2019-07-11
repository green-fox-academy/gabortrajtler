//
// Created by Gabor on 2019. 07. 11..
//

#include <iostream>
#include "SharpieSet.h"

int SharpieSet::countUsable()
{
    std::cout << "Let's see the sharpies..." << std::endl;
    int counter = 0;
    for (int i = 0; i < _sharpies.size(); ++i) {
        std::cout << i << ". ink: " << _sharpies[i]->getInkAmount();
        if (_sharpies[i]->getInkAmount() > 0.1) {
            std::cout << ", this is OK." << std::endl;
            counter++;
        } else {
            std::cout << ", this is empty." << std::endl;
        }
    }
    return counter;
}

void SharpieSet::removeTrash()
{
    std::cout << "Let's remove empty sharpies..." << std::endl;
    for (int i = 0; i < _sharpies.size(); ++i) {
        std::cout << i << ". ink: " << _sharpies[i]->getInkAmount();
        if(_sharpies[i]->getInkAmount() <= 0.1) {
            std::cout << ", removing this..." << std::endl;
            _sharpies.erase(_sharpies.begin()+i);
            i--; //for cycle skips next element if not decrement
        } else {
            std::cout << std::endl;
        }
    }
}

