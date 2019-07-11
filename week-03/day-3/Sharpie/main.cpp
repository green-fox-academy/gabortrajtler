#include <iostream>
#include "Sharpie.h"
#include "SharpieSet.h"

/*
 *
 * Create Sharpie class
        We should know about each sharpie their color (which should be a string), width (which will be a floating point number), inkAmount (another floating point number)
        When creating one, we need to specify the color and the width
        Every sharpie is created with a default 100 as inkAmount
        We can use() the sharpie objects
        which decreases inkAmount
 */
void drawPicture(Sharpie &sharpie);

int main()
{
    std::cout << "Hello, Sharpies!" << std::endl;
    Sharpie sharpieBlack("black", 1.27);
    Sharpie sharpieYellow("yellow", 1.27);
    Sharpie sharpieOrange("orange", 1.27);
    std::cout << "Using black sharpie, Ink: " << sharpieBlack.getInkAmount() << std::endl;
    sharpieBlack.use();
    sharpieYellow.use();
    sharpieOrange.use();
    sharpieOrange.use();
    sharpieOrange.use();
    std::cout << "Ink local: " << sharpieBlack.getInkAmount() << std::endl;

    SharpieSet sharpieSet;
    sharpieSet._sharpies.push_back(&sharpieBlack);
    sharpieSet._sharpies.push_back(&sharpieYellow);
    sharpieSet._sharpies.push_back(&sharpieOrange);

    drawPicture(sharpieBlack);

    std::cout << "Ink local: " << sharpieBlack.getInkAmount() << std::endl;
    std::cout << "Ink collection: " << sharpieSet._sharpies[0]->getInkAmount() << std::endl;
    sharpieSet.countUsable();
    sharpieSet.removeTrash();
    sharpieSet.countUsable();

    return 0;
}

void drawPicture(Sharpie &sharpie) {
    std::cout << "Drawing picture... " << std::endl;
    for (int i = 0; i < 99; ++i) {
        sharpie.use();
    }
}