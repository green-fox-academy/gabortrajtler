#include <iostream>

int main() {
    // Write a program that reads a number from the standard input, then draws a
    // square like this:
    //
    //
    // %%%%%
    // %%  %
    // % % %
    // %  %%
    // %%%%%
    //
    // The square should have as many lines as the number was

    int lineNum;

    std::cout << "Number of lines: " << std::endl;
    std::cin >> lineNum;

    // first line
    for (int i = 0; i < lineNum; ++i) {
        std::cout << "%";
    } std::cout << std::endl;

    for (int i = 1; i < lineNum -1; ++i) {
        bool firstColumn = true;
        for (int j = 1; j < lineNum; ++j) {
            while(firstColumn) {
                std::cout << "%";
                firstColumn = false;     // first column
            }

            if (j == i) {                // diagonal
                std::cout << "%";
            } else if (j == lineNum -1){   // last column
                std::cout << "%";
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    // last line
    for (int i = 0; i < lineNum; ++i) {
        std::cout << "%";
    } std::cout << std::endl;

    return 0;
}