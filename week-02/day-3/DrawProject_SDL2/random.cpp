#include <iostream>
#include <ctime>
#include "random.h"

void initRandom()
{
/* initialize "random" seed: */
    srand(time(NULL));
}

int getRandomColor()
{
/* generate secret number between 1 and 10: */
    int random = rand() % 255 + 1;
    return random;
}
