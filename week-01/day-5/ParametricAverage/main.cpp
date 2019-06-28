#include <iostream>

int main()
{
    // Write a program that asks for a number.
    // It would ask this many times to enter an integer,
    // if all the integers are entered, it should print the sum and average of these
    // integers like:
    //
    // Sum: 22, Average: 4.4

    // Solution #1: without arrays

    std::cout << "Please enter repetition num: ";
    int repetitionNum = 0;
    std::cin >> repetitionNum;

    int iInt = 0;
    int sum = 0;
    float average = 0;
    for (int i = 0; i < repetitionNum; ++i) {
        std::cout << "Please enter an integer: ";
        std::cin >> iInt;
        sum += iInt;
    }
    average = static_cast<float>(sum) / repetitionNum;

    std::cout << std::endl;
    std::cout << "Sum: " << sum << ", Average: " << average << std::endl;

    return 0;
}