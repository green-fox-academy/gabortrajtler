#include <iostream>
#include <vector>
#include "Station.h"

/*
 * Petrol Station
        Create Station and Car classes

        Station
        Members:
        gasAmount
        create a constructor that initializes the gasAmount
        fill(car) -> fills 1 unit of gas until the car is on full. Every time it transfers 1 unit it should print "Filling car!" on the console. When the car is full it should print the remaining gas amount of the station

        Car
        Members:
        gasAmount
        capacity
        create constructor for Car with 2 arguments(gasAmount and capacity)
        car has 2 methods:
        isFull() -> returns true if capacity equals to gasAmount, false otherwise
        fill() -> increments the gasAmount by one.
        In the main function create a station and 5 cars with different amount of capacity and gas. Refill all the cars.
 *
 */

std::vector<Car> initCars();

int main()
{
    Station station(1000);
    std::vector<Car> cars = initCars();

    std::cout << "Station Opened, yuhuuu!" << std::endl;

    for (int i = 0; i < cars.size(); ++i) {
        station.fill(cars[i]);
    }

    std::cout << "End of the day, guys!" << std::endl;

    return 0;
}

std::vector<Car> initCars()
{
    std::vector<Car> cars;

    cars.push_back(Car(10, 100));
    cars.push_back(Car(20, 200));
    cars.push_back(Car(5, 70));
    cars.push_back(Car(1, 45));
    cars.push_back(Car(25, 300));

    return cars;
}