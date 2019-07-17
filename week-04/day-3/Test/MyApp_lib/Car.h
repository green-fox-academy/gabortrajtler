//
// Created by Gabor on 2019. 07. 17..
//

#ifndef TEST_CAR_H
#define TEST_CAR_H

class Car
{
public:
    Car();

    void drive();

    void refill();

    int getGas();

private:
    int _gas;
};


#endif //TEST_CAR_H
