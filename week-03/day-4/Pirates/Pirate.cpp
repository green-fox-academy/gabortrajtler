//
// Created by Gabor on 2019. 07. 11..
//

#include <iostream>
#include "Pirate.h"

Pirate::Pirate()
{
    _toxication = 0;
    _isCaptain = false;
    _passedOut = false;
}

int Pirate::getToxication() const
{
    return _toxication;
}

void Pirate::drinkSomeRum()
{
    _toxication++;
    std::cout << "Drinking rum...";
    std::cout << " (Toxic: " << getToxication() << ")" << std::endl;
    if(_toxication >= 4) {
        _passedOut = true;
    }
}

void Pirate::howsItGoingMate() const
{
    std::cout << "How's it going pirate? ";
    if (_isCaptain) {
        std::cout << "-I'm the captain, not talking to you!" << std::endl;
    } else if(_toxication < 5) {
        std::cout << "-Pour me anudder!" << std::endl;
    } else {
        std::cout << "-Arghh, I'ma Pirate. How d'ya d'ink its goin?" << std::endl;
    }
}

void Pirate::promoteCaptain()
{
    _isCaptain = true;
}
