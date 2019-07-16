//
// Created by Gabor on 2019. 07. 16..
//

#ifndef ZOO_ANIMAL_H
#define ZOO_ANIMAL_H


#include <string>

enum class Gender{
    MALE,
    FEMALE
};

class Animal
{
public:
    virtual std::string getName() = 0;
    virtual std::string breed() = 0;
    virtual void sing() = 0;
    virtual void beHappy() = 0;

protected:
    std::string _name;
    int _age;
    Gender _gender;
};


#endif //ZOO_ANIMAL_H
