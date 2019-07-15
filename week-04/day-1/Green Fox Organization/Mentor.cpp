//
// Created by Gabor on 2019. 07. 15..
//

#include <iostream>
#include "Mentor.h"

void Mentor::getGoal()
{
    std::cout << "My goal is: Educate brilliant junior software developers." << std::endl;
}

void Mentor::introduce()
{
    std::cout << "Hi, I'm " << _name << ", a " << _age << " year old " << genderToString() << " " <<
    levelToString() << " mentor." << std::endl;
}

std::string Mentor::levelToString()
{
    switch (_level) {
        case Level::JUNIOR:
            return "junior";
        case Level::INTERMEDIATE:
            return "intermediate";
        case Level::SENIOR:
            return "senior";
        default:
            return "n/a";
    }
}

Mentor::Mentor(const std::string &name, int age, Gender gender, Level level) : Person(name, age, gender), _level(level)
{}

Mentor::Mentor() : Person(), _level(Level::INTERMEDIATE)
{}
