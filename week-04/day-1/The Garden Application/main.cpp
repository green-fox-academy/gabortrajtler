#include <iostream>
#include "Garden.h"
#include "Flower.h"
#include "Tree.h"

/*
 *
 * The task is to create a garden application, so in your main method you should create
 * a garden with flowers and trees. The program should demonstrate an example garden with
 * two flowers (yellow and blue) and two trees (purple and orange). In the example after creating
 * them you should show the user, how the garden looks like. After that the program should water
 * the garden twice, first with the amount of 40 then with 70. And after every watering the user
 * should see the state of the garden as you can see in the output.

    The output should look like this:

    The yellow Flower needs water
    The blue Flower needs water
    The purple Tree needs water
    The orange Tree needs water

    Watering with 40
    The yellow Flower doesnt need water
    The blue Flower doesnt need water
    The purple Tree needs water
    The orange Tree needs water

    Watering with 70
    The yellow Flower doesnt need water
    The blue Flower doesnt need water
    The purple Tree doesnt need water
    The orange Tree doesnt need water
 *
 */

int main()
{

    Flower yellowFlower = Flower(plantColor::YELLOW);
    Flower blueFlower = Flower(plantColor::BLUE);
    Tree purpleTree = Tree(plantColor::PURPLE);
    Tree orangeTree = Tree(plantColor::ORANGE);

    Garden garden;
    garden.addPlants(&yellowFlower);
    garden.addPlants(&blueFlower);
    garden.addPlants(&purpleTree);
    garden.addPlants(&orangeTree);

    garden.info();

    garden.watering(40);
    garden.watering(70);

    return 0;
}