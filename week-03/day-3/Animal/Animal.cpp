#include "Animal.h"

Animal::Animal()
{
    setHunger(50);
    setThirst(50);
}

int Animal::getHunger() const
{
    return _hunger;
}

void Animal::setHunger(int hunger)
{
    _hunger = hunger;
}

int Animal::getThirst() const
{
    return _thirst;
}

void Animal::setThirst(int thirst)
{
    _thirst = thirst;
}

void Animal::eat()
{
    _hunger--;
}

void Animal::drink()
{
    _thirst--;
}

void Animal::play()
{
    _hunger++;
    _thirst++;
}
