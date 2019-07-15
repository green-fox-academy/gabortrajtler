//
// Created by Gabor on 2019. 07. 15..
//

#ifndef GREEN_FOX_ORGANIZATION_STUDENT_H
#define GREEN_FOX_ORGANIZATION_STUDENT_H


#include "Person.h"

class Student : public Person
{
    std::string _previousOrganization;
    int _skippedDays;
public:
    Student(const std::string &name, int age, Gender gender, const std::string &previousOrganization);

    Student();

    void skipDays(int numberOfDays);

private:
    void getGoal() override;

    void introduce() override;
};


#endif //GREEN_FOX_ORGANIZATION_STUDENT_H
