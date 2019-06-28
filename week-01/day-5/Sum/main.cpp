#include <iostream>

int sum(int inputNumber);

int main()
{
    // Summing
    // Write a function called `sum` that returns the sum of numbers from zero to the given parameter

    int inputNum = 0;

    std::cout << "do sum to: " << std::endl;
    std::cin >> inputNum;

    std::cout << "sum: " << sum(inputNum) << std::endl;
    return 0;
}

int sum(int inputNumber)
{
    int sumNumber = 0;
    int addNum = 1;
    for (int i = 0; i < inputNumber; ++i) {
        sumNumber += addNum;
        addNum++;
    }
    return sumNumber;
}