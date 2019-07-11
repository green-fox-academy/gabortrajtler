//
// Created by Gabor on 2019. 07. 11..
//

#include <cstdlib>
#include <time.h>
#include "Resources.h"

void Resources::initRandom()
{
/* initialize "random" seed: */
    srand(time(nullptr));
}

int Resources::getRandomNumber(int min, int max)
{
/* generate number between min and max: */
    int random = rand() % max + min;
    return random;
}
