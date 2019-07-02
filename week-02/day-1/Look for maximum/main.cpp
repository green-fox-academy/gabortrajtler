#include <iostream>

void getBiggestNum(const int inArray[], const int &inIteration, int *biggestNumAddr);

int main()
{
    // Create a program which first asks for a number
    // this number indicates how many integers we want to store in an array
    // and than asks for numbers till the user fills the array
    // It should print out the biggest number in the given array and the memory address of it

    int iteration = 0;

    std::cout << "Iteration: ";
    std::cin >> iteration;

    int intArray[iteration];

    for (int i = 0; i < iteration; ++i) {
        std::cout << "integer " << i + 1 << ".: ";
        std::cin >> intArray[i];
    }

    int memAddr;

    getBiggestNum(intArray, iteration, &memAddr);

    std::cout << "The biggest number is " << memAddr << ", and the memAddr is " << &memAddr;

    return 0;
}

void getBiggestNum(const int inArray[], const int &inIteration, int *biggestNumAddr)
{
    *biggestNumAddr = inArray[0];
    for (int i = 0; i < inIteration; ++i) {
        if (inArray[i] > *biggestNumAddr) {
            *biggestNumAddr = inArray[i];
        }
    }
}