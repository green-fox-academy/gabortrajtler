//
// Created by Gabor on 2019. 07. 16..
//

#include <iostream>
#include "ElectricGuitar.h"

ElectricGuitar::ElectricGuitar(int numberOfStrings) : StringedInstrument("Electric Guitar", numberOfStrings)
{}
ElectricGuitar::ElectricGuitar() : StringedInstrument("Electric Guitar", 6)
{}

void ElectricGuitar::sound()
{
    std::cout << "Twang";
}

void ElectricGuitar::play()
{
    std::cout << _name << ", a " << _numberOfStrings << "-stringed instrument that goes ";
    sound();
    std::cout << std::endl;
}


