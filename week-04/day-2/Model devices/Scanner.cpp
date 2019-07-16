//
// Created by Gabor on 2019. 07. 16..
//

#include <iostream>
#include "Scanner.h"

Scanner::Scanner(int speed) : _speed(speed)
{}

void Scanner::scan()
{
    std::cout << "I'm scanning a document " << _speed <<" ppm to the console" << std::endl;
}
