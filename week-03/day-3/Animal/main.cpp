#include <iostream>
#include "Farm.h"

/*
 * Create an Animal class
    Every animal has a hunger value, which is a whole number
    Every animal has a thirst value, which is a whole number
    when creating a new animal object these values are created with the default 50 value
    Every animal can eat() which decreases their hunger by one
    Every animal can drink() which decreases their thirst by one
    Every animal can play() which increases both by one

    Farm
        Reuse your Animal class
        Create a Farm class
        it has list of Animals
        it has slots which defines the number of free places for animals
        breed() -> creates a new animal if there's place for it
        slaughter() -> removes the least hungry animal
 */

int main()
{
    Farm farm(100);
    int initialOpenSpace = farm.getOpenSpace();
    for (int i = 0; i < initialOpenSpace; ++i) {
        farm.breed();
    }

    std::cout << "Farm capacity: " <<  farm.getOpenSpace() << std::endl;

    farm.breed();

    farm.feedAnimal(50);
    farm.feedAnimal(50);
    farm.feedAnimal(1);

    for (int j = 0; j < 2; ++j) {
        farm.slaughter();
    }

    std::cout << "Farm capacity: " <<  farm.getOpenSpace() << std::endl;

    farm.breed();
    farm.breed();
    farm.breed();

    std::cout << "Farm capacity: " <<  farm.getOpenSpace() << std::endl;

    farm.feedAnimal(49);
    farm.feedAnimal(2);

    return 0;
}