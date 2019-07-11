//
// Created by Gabor on 2019. 07. 11..
//

#ifndef PIRATES_SHIP_H
#define PIRATES_SHIP_H


#include <vector>
#include "Pirate.h"

class Ship
{
public:
    Ship();
    void fillShip();
    void getStatus();
    const std::vector<Pirate> &getPirates() const;

private:
    std::vector<Pirate> _pirates;
    int _captain = 0;
};


#endif //PIRATES_SHIP_H
