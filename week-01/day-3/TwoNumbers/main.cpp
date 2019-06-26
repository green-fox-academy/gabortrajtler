#include <iostream>

int main() {

    // Create a program that prints a few operations on two numbers: 22 and 13

    // Print the result of 13 added to 22

    // Print the result of 13 substracted from 22

    // Print the result of 22 multiplied by 13

    // Print the result of 22 divided by 13 (as a decimal fraction)

    // Print the integer part of 22 divided by 13

    // Print the remainder of 22 divided by 13

    // Solution: used pretty variable names, used cast to double at div.

    int twentytwo = 22;
    int thirteen = 13;

    std::cout << "22 and 13 manipulations:\n";
    std::cout << "+ : " << twentytwo + thirteen << std::endl;
    std::cout << "- : " << twentytwo - thirteen << std::endl;
    std::cout << "* : " << twentytwo * thirteen << std::endl;
    double dDiv = (double)twentytwo / (double)thirteen;
    std::cout << "/ double : " << dDiv << std::endl;
    std::cout << "/ int : " << twentytwo / thirteen << std::endl;
    std::cout << "% : " << twentytwo % thirteen << std::endl;

    return 0;
}