//
// Created by Gabor on 2019. 07. 15..
//

#ifndef GREEN_FOX_ORGANIZATION_PERSON_H
#define GREEN_FOX_ORGANIZATION_PERSON_H


#include <string>

class Person
{
public:
    enum Gender{
        MALE,
        FEMALE
    };
private:
    std::string _name;
    int _age;
    Gender _gender;
public:
    Person(const std::string &name, int age, Gender gender);

    Person();

public:
    void introduce();
    void getGoal();
    std::string genderToString();
};


#endif //GREEN_FOX_ORGANIZATION_PERSON_H
