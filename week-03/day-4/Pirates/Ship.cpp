//
// Created by Gabor on 2019. 07. 11..
//

#include <iostream>
#include "Ship.h"
#include "Resources.h"

Ship::Ship()
{}

void Ship::fillShip()
{
    Resources resources;
    resources.initRandom();
    int _crewCount = resources.getRandomNumber(1, 75);

    _pirates.emplace_back(Pirate());
    _pirates[_captain].promoteCaptain();

    for (int i = 0; i < _crewCount; ++i) {
        _pirates.emplace_back(Pirate());
    }
    std::cout << "Ship is ready, crew number: " << _pirates.size() << std::endl;
}

const std::vector<Pirate> &Ship::getPirates() const
{
    return _pirates;
}

void Ship::getStatus()
{
    std::cout << "--- Ship status ---" << std::endl;
    //std::cout << "Captain state: " << _pirates[_captain].getState << std::endl;
    std::cout << "Captain consumed rum: " << _pirates[_captain].getToxication() << std::endl;
    std::cout << "--- Ship status ---" << std::endl;


}

