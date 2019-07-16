//
// Created by Gabor on 2019. 07. 16..
//

#ifndef ZOO_REPTILE_H
#define ZOO_REPTILE_H


#include "Animal.h"

class Reptile : public Animal
{
public:
    Reptile(std::string name);
    std::string getName() override;
    std::string breed() override;
    void sing() override;
    void beHappy() override;
};


#endif //ZOO_REPTILE_H
