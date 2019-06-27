#include <iostream>

int main() {
    // Write a program that reads a number from the standard input, then draws a
    // triangle like this:
    //
    // *
    // **
    // ***
    // ****
    //
    // The triangle should have as many lines as the number was

    // Solution: There should be nicer solutions.

    int lineNum;

    std::cout << "Number of lines: " << std::endl;
    std::cin >> lineNum;
    int columnNum = lineNum;

    for (int i = 0; i <= lineNum; ++i) {
        for (int j = 0; j <= columnNum; ++j) {
            if (i == j) {
                for (int k = 0; k < i; ++k) {
                    std::cout << "*";
                }
            }
        }
        std::cout << std::endl;
    }

    return 0;
}