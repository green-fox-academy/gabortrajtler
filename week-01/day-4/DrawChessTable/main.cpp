#include <iostream>

int main() {
    // Crate a program that draws a chess table like this
    //
    // % % % %
    //  % % % %
    // % % % %
    //  % % % %
    // % % % %
    //  % % % %
    // % % % %
    //  % % % %

    bool draw = false;

    for (int i = 1; i <= 8; ++i) {
        for (int j = 1; j <= 8; ++j) {
            if ((i+j) % 2 == 0) {
                std::cout << "%";
            } else {
                std::cout << " ";

            }
        }
        std::cout << std::endl;
    }

    return 0;
}