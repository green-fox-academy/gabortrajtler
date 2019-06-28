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

// Solution: based on DrawPyramid. Not perfect, should examine the input number (odd, even) and act accordingly.

int main()
{
    int lineNum;

    std::cout << "Number of lines: " << std::endl;
    std::cin >> lineNum;
    lineNum = lineNum / 2 + 1;

    for (int i = 1; i <= lineNum; ++i) {
        for (int j = lineNum - 1; j >= i; --j) {
            std::cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); ++k) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    for (int i = 1; i <= lineNum; ++i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << " ";
        }
        for (int k = (lineNum - i) * 2 - 1; k >= 1; --k) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}