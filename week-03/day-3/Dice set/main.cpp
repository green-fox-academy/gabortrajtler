#include <iostream>

#include "dice_set.h"

int main(int argc, char* args[])
{
    // You have a `DiceSet` class which has a list for 6 dices
    // You can roll all of them with roll()
    // Check the current rolled numbers with getCurrent()
    // You can reroll with roll()
    // Your task is to roll the dices until all of the dices are 6

    int rollNum = 0;

    DiceSet diceSet;
    for (int i = 0; i < 6; ++i) {
        std::cout << "--- ";
        do {
            diceSet.roll(i);
            rollNum++;
            std::cout << diceSet.getCurrent(i) << ", ";
        } while (diceSet.getCurrent(i) != 6);
        std::cout << std::endl << i << ". dice finally at 6, at " << rollNum << "'th roll." << std::endl;
        rollNum = 0;
    }

    for (int j = 0; j < 6; ++j) {
        std::cout << j+1 << ". dice: " << diceSet.getCurrent(j) << std::endl;
    }

    return 0;
}