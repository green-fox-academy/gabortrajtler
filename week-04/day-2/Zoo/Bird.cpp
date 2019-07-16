//
// Created by Gabor on 2019. 07. 16..
//

#include <iostream>
#include "Bird.h"

Bird::Bird(std::string name)
{
    _name = name;
    _age = 0;
    _gender = Gender::FEMALE;
}

std::string Bird::breed()
{
    return "laying eggs.";
}

void Bird::sing()
{
    std::cout << "Csiiiiip csip csip csip csip" << std::endl;
}

void Bird::beHappy()
{
    std::cout << "I'm happpppyyyy..." << std::endl;
}

std::string Bird::getName()
{
    return _name;
}
