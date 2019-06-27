#include <iostream>

int main() {
    // Create a program that prints all the even numbers between 0 and 500

    // Solution: for now "between" is inclusive (incl. first and last num.).

    for (int i = 0; i < 501; ++i) {
        if (i % 2 == 0){
            std::cout << i << " is even.\n";
        }
    }

    return 0;
}