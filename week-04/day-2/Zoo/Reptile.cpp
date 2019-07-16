//
// Created by Gabor on 2019. 07. 16..
//

#include <iostream>
#include "Reptile.h"

Reptile::Reptile(std::string name)
{
    _name = name;
    _age = 0;
    _gender = Gender::FEMALE;
}

std::string Reptile::breed()
{
    return "laying eggs.";
}

void Reptile::sing()
{
    std::cout << "Whroooaaaaaahhhrrrr" << std::endl;
}

void Reptile::beHappy()
{
    std::cout << "I'm happpppyyyy..." << std::endl;
}

std::string Reptile::getName()
{
    return _name;
}
