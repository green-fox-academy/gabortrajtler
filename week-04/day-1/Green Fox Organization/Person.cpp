//
// Created by Gabor on 2019. 07. 15..
//

#include <iostream>
#include "Person.h"

Person::Person(const std::string &name, int age, Gender gender) : _name(name), _age(age), _gender(gender)
{}

Person::Person()
{
    _name = "Jane Doe";
    _age = 30;
    _gender = Gender::FEMALE;
}

void Person::introduce()
{
    std::cout << "Hi, I'm " << _name << ", a " << _age << " year old " << genderToString() << "." << std::endl;
}

std::string Person::genderToString()
{
    switch (_gender) {
        case 0 :
            return "male";
        case 1 :
            return "female";
        default:
            return "n/a";
    }
}

void Person::getGoal()
{
    std::cout << "My goal is: Live for the moment!" << std::endl;
}
