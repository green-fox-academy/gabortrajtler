//
// Created by Gabor on 2019. 07. 15..
//

#include <iostream>
#include "Cohort.h"

void Cohort::addStudent(Student *student)
{
    _students.push_back(student);
}

void Cohort::addMentor(Mentor *mentor)
{
    _mentors.push_back(mentor);
}

void Cohort::info()
{
    std::cout << "The " << _name << " cohort has " << _students.size() << " students and " << _mentors.size() << " mentors."
              << std::endl;
}

Cohort::Cohort(const std::string &name) : _name(name)
{
    _students = {};
    _mentors = {};
}
