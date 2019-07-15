//
// Created by Gabor on 2019. 07. 15..
//

#ifndef GREEN_FOX_ORGANIZATION_COHORT_H
#define GREEN_FOX_ORGANIZATION_COHORT_H


#include <string>
#include "Student.h"
#include "Mentor.h"
#include <vector>

class Cohort
{
public:
    Cohort(const std::string &name);

    void addStudent(Student *student);

    void addMentor(Mentor *mentor);

    void info();

private:
    std::string _name;
    std::vector<Student *> _students;
    std::vector<Mentor *> _mentors;

};


#endif //GREEN_FOX_ORGANIZATION_COHORT_H
