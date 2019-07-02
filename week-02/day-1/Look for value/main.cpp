#include <iostream>

int *whereIsNumber(int inputArray[], int sizeOfArray, int inputNumber);

int main()
{
    // Create a function which takes an array (and it's lenght) and a number as a parameter
    // the function should return index where it found the given value
    // if it can't find the number return -1

    // Solution: this is a pointer exercise so I will return 0 (nullptr).

    int inputArray[] = {1, 3, 5, 2, 3, 4};
    int inputNumber = 3;
    int sizeOfArray = sizeof(inputArray) / sizeof(inputArray[0]);

    int *returnPointer = whereIsNumber(inputArray, sizeOfArray, inputNumber);

    if (returnPointer != nullptr) {
        std::cout << *returnPointer << std::endl;
    } else {
        std::cout << "-1" << std::endl;
    }
    return 0;
}

int *whereIsNumber(int inputArray[], int sizeOfArray, int inputNumber)
{
    int *returnPtr = &inputArray[0];
    int c = 0;
    for (int i = 0; i < sizeOfArray; ++i) {
        if (inputArray[i] == inputNumber) {
            *returnPtr = i;
            c++;
            break;  // if it found the first value in the array, stop
        }
    }
    if (c == 0) {
        return nullptr;
    } else {
        return returnPtr;
    }
}