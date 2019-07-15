//
// Created by Gabor on 2019. 07. 15..
//

#ifndef GREEN_FOX_ORGANIZATION_MENTOR_H
#define GREEN_FOX_ORGANIZATION_MENTOR_H


#include "Person.h"

enum class Level {
    JUNIOR,
    INTERMEDIATE,
    SENIOR
};

class Mentor : public Person
{
    Level _level;
public:
    Mentor(const std::string &name, int age, Gender gender, Level level);

    Mentor();

private:
    void getGoal() override;
    void introduce() override;
    std::string levelToString();
};

#endif //GREEN_FOX_ORGANIZATION_MENTOR_H
