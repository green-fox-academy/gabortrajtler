//
// Created by Gabor on 2019. 07. 16..
//

#include <iostream>
#include "Printer.h"

void Printer::print()
{
    std::cout << "I'm printing something that's " << getSize() << " cm." << std::endl;
}
