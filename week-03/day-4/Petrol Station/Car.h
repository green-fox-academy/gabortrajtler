//
// Created by Gabor on 2019. 07. 11..
//

#ifndef PETROL_STATION_CAR_H
#define PETROL_STATION_CAR_H


class Car
{
public:
    Car(int gasAmount, int capacity);
    bool isFull();
    void fill();

private:
    int gasAmount;
    int capacity;

    int getGasAmount() const;
    void setGasAmount(int gasAmount);
    int getCapacity() const;
    void setCapacity(int capacity);
};


#endif //PETROL_STATION_CAR_H
