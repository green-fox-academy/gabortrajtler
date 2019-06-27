#include <iostream>

int main() {
    // Create a program that asks for two numbers
    // If the second number is not bigger than the first one it should print:
    // "The second number should be bigger"
    //
    // If it is bigger it should count from the first number to the second by one
    //
    // example:
    //
    // first number: 3, second number: 6, should print:
    //
    // 3
    // 4
    // 5

    int firstNum;
    int secondNum;

    while (true) {
        std::cout << "Please type in the 1. number: ";
        std::cin >> firstNum;
        std::cout << "Please type in the 2. number: ";
        std::cin >> secondNum;

        if (firstNum > secondNum) {
            std::cout << "1. num. should be bigger than 2. Please enter again. \n";
        } else {
            break;
        }
    }

    do {
        std::cout << firstNum << std::endl;
        firstNum++;
    } while (firstNum < secondNum);

    return 0;
}