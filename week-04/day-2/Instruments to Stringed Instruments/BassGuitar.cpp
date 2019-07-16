//
// Created by Gabor on 2019. 07. 16..
//

#include <iostream>
#include "BassGuitar.h"

BassGuitar::BassGuitar(int numberOfStrings) : StringedInstrument("Bass Guitar", numberOfStrings)
{}

BassGuitar::BassGuitar() : StringedInstrument("Bass Guitar", 4)
{}

void BassGuitar::play()
{
    std::cout << _name << ", a " << _numberOfStrings << "-stringed instrument that goes ";
    sound();
    std::cout << std::endl;
}

void BassGuitar::sound()
{
    std::cout << "Duum-duum-duum";
}

