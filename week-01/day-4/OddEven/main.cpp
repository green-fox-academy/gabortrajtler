#include <iostream>

int main() {
    // Write a program that reads a number from the standard input,
    // Then prints "Odd" if the number is odd, or "Even" if it is even.

    // Solution: run until 113 :)

    int cInput;
    std::cout << "Please enter numbers! Enter 113 to quit.\n";
    while (true) {
        std::cin >> cInput;
        if (cInput % 2 == 0) {
            std::cout << "Even\n";
        } else {
            std::cout << "Odd\n";
        }
        if(cInput == 113){
            break;
        }
    }

    return 0;
}