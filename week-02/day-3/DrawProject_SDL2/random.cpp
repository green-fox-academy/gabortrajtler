#include <iostream>
#include <ctime>
#include "random.h"

void initRandom()
{
/* initialize "random" seed: */
    srand(time(NULL));
}

int getRandomColor255()
{
/* generate number between 1 and 255: */
    int random = rand() % 255 + 1;
    return random;
}

int getRandomColor75to175()
{
/* generate number between 75 and 175: */
    int random = rand() % 175 + 75;
    return random;
}

int getRandomNumber500()
{
/* generate number between 1 and 500: */
    int random = rand() % 500 + 1;
    return random;
}

int getRandomNumber(int numFrom, int numTo)
{
/* generate number between numFrom and numTo: */
    int random = rand() % numTo + numFrom;
    return random;
}