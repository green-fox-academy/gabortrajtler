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

    // Solution: With some help from the internet...

    int lineNum;

    std::cout << "Number of lines: " << std::endl;
    std::cin >> lineNum;
    int columnNum = lineNum;

    for (int i = 1; i <= lineNum; ++i) {
        for (int j = columnNum-1; j >= i; --j) {
            std::cout << " ";
        }
        for (int k = 1; k <= (2*i-1); ++k) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}