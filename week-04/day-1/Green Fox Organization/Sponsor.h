//
// Created by Gabor on 2019. 07. 15..
//

#ifndef GREEN_FOX_ORGANIZATION_SPONSOR_H
#define GREEN_FOX_ORGANIZATION_SPONSOR_H


#include "Person.h"

class Sponsor : public Person
{
    std::string _company;
    int _hiredStudents;
public:
    Sponsor(const std::string &name, int age, Gender gender, const std::string &company);

    Sponsor();

    void hire();

private:
    void introduce() override;

    void getGoal() override;
};


#endif //GREEN_FOX_ORGANIZATION_SPONSOR_H
