//
// Created by Gabor on 2019. 07. 11..
//

#ifndef ANIMAL_FARM_H
#define ANIMAL_FARM_H


#include <vector>
#include "Animal.h"

class Farm
{
public:
    Farm(int openSpace);

    void breed();
    void slaughter();
    int getOpenSpace() const;
    void feedAnimal(int animalNumber);

private:
    std::vector<Animal> _animals;
    int _openSpace;
};


#endif //ANIMAL_FARM_H
