//
// Created by Gabor on 2019. 07. 16..
//

#ifndef ZOO_Mammal_H
#define ZOO_Mammal_H


#include "Animal.h"

class Mammal : public Animal
{
public:
    Mammal(std::string name);
    std::string getName() override;
    std::string breed() override;
    void sing() override;
    void beHappy() override;
};


#endif //ZOO_Mammal_H
