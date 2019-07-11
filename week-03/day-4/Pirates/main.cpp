#include <iostream>
#include "Pirate.h"
#include "Ship.h"

int main()
{
    std::cout << "Hello, Pirate!" << std::endl;

    Pirate adam;
    adam.drinkSomeRum();
    adam.howsItGoingMate();

    Ship ghostShip;
    ghostShip.fillShip();
    ghostShip.getPirates()[0].howsItGoingMate();
    ghostShip.getPirates()[1].howsItGoingMate();

    return 0;
}