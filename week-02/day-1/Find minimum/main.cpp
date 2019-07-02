#include <iostream>

int *getSmallest(const int inNumbers[], int sizeOfNumbers, int *minPtr);

int main()
{
    // Create a function which takes an array (and its length) as a parameter
    // and returns a pointer to its minimum value

    int numbers[] = {12, 4, 66, 101, 87, 3, 15};
    int minVal = numbers[0];
    int size = sizeof(numbers) / sizeof(numbers[0]);

    getSmallest(numbers, size, &minVal);

    std::cout << minVal << std::endl;
    return 0;
}

int *getSmallest(const int inNumbers[], int sizeOfNumbers, int *minPtr)
{
    for (int i = 0; i < sizeOfNumbers; ++i) {
        if (inNumbers[i] < *minPtr) {
            *minPtr = inNumbers[i];
        }
    }
    return minPtr;
}