#include <iostream>

int main() {
    // Write a program that asks for a double that is a distance in miles,
    // then it converts that value to kilometers and prints it

    double miletoKilometre = 1.60934;
    std::cout << "Please add the distance in miles: ";
    int miles;
    std::cin >> miles;
    std::cout << "In km: " << miles * miletoKilometre << std::endl;

    return 0;
}