//
// Created by Gabor on 2019. 07. 15..
//

#ifndef GREEN_FOX_ORGANIZATION_PERSON_H
#define GREEN_FOX_ORGANIZATION_PERSON_H


#include <string>

enum class Gender
{
    MALE,
    FEMALE
};

class Person
{
public:
private:
    Gender _gender;
protected:
    std::string _name;
    int _age;
public:
    Person(const std::string &name, int age, Gender gender);

    Person();

public:
    virtual void introduce();

    virtual void getGoal();

    std::string genderToString();
};


#endif //GREEN_FOX_ORGANIZATION_PERSON_H
