//
// Created by Gabor on 2019. 07. 16..
//

#include <iostream>
#include "Violin.h"

Violin::Violin(int numberOfStrings) : StringedInstrument("Violin", numberOfStrings)
{}

Violin::Violin() : StringedInstrument("Violin", 4)
{}

void Violin::play()
{
    std::cout << _name << ", a " << _numberOfStrings << "-stringed instrument that goes ";
    sound();
    std::cout << std::endl;
}

void Violin::sound()
{
    std::cout << "Screech";
}


