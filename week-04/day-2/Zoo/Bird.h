//
// Created by Gabor on 2019. 07. 16..
//

#ifndef ZOO_Bird_H
#define ZOO_Bird_H


#include "Animal.h"

class Bird : public Animal
{
public:
    Bird(std::string name);
    std::string getName() override;
    std::string breed() override;
    void sing() override;
    void beHappy() override;
};


#endif //ZOO_Bird_H
