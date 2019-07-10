#include <iostream>
#include "Sharpie.h"
/*
 *
 * Create Sharpie class
        We should know about each sharpie their color (which should be a string), width (which will be a floating point number), inkAmount (another floating point number)
        When creating one, we need to specify the color and the width
        Every sharpie is created with a default 100 as inkAmount
        We can use() the sharpie objects
        which decreases inkAmount
 */

int main()
{
    std::cout << "Hello, Sharpie!" << std::endl;
    Sharpie sharpie("black", 1.27);
    std::cout << "Ink: " << sharpie.getInkAmount() << std::endl;
    sharpie.use();
    std::cout << "Ink: " << sharpie.getInkAmount() << std::endl;
    return 0;
}