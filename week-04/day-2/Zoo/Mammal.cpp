//
// Created by Gabor on 2019. 07. 16..
//

#include <iostream>
#include "Mammal.h"

Mammal::Mammal(std::string name)
{
    _name = name;
    _age = 0;
    _gender = Gender::FEMALE;
}

std::string Mammal::breed()
{
    return "pushing miniature versions out.";
}

void Mammal::sing()
{
    std::cout << "Muuuuu Mooooouuuuu" << std::endl;
}

void Mammal::beHappy()
{
    std::cout << "I'm happpppyyyy..." << std::endl;
}

std::string Mammal::getName()
{
    return _name;
}
