#include <iostream>

int main() {
    // Write a program that stores a number, and the user has to figure it out.
    // The user can input guesses, after each guess the program would tell one
    // of the following:
    //
    // The stored number is higher
    // The stried number is lower
    // You found the number: 8

    int secretNumber;

    std::cout << "Secret number, above 0: " << std::endl;
    std::cin >> secretNumber;

    // some new line
    for (int i = 0; i < 10; ++i) {
        std::cout << std::endl;
    }

    // guessing
    int guessedNumber = 0;

    while (guessedNumber != secretNumber){
        std::cout << "Guessed number: ";
        std::cin >> guessedNumber;
        if (guessedNumber > secretNumber) {
            std::cout << "The stored number is lower" << std::endl;
        } else if (guessedNumber < secretNumber) {
            std::cout << "The stored number is higher" << std::endl;
        }
    }

    std::cout << "You've found the number :" << secretNumber << std::endl;

    return 0;
}