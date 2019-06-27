#include <iostream>

// Write a program that reads a number from the standard input, then draws a
// diamond like this:
//
//
//    *
//   ***
//  *****
// *******
//  *****
//   ***
//    *
//
// The diamond should have as many lines as the number was

// Solution: based on DrawPyramid

int main() {
    int lineNum;

    std::cout << "Number of lines: " << std::endl;
    std::cin >> lineNum;
    int columnNum = lineNum;

    for (int i = 1; i <= lineNum; ++i) {
        for (int j = columnNum-1; j >= i; --j) {
            std::cout << "a";
        }
        for (int k = 1; k <= (2*i-1); ++k) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    // Not ready yet!
    for (int i = lineNum; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << "a";
        }
        for (int k = (i/2+1); k >= 1; --k) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}