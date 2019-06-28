#include <iostream>

std::string unique(int numbersArr[], int sizeArr);

int main()
{
    //  Create a function that takes a list of numbers as a parameter
    //  Don't forget you have pass the size of the list as a parameter as well
    //  Returns a list of numbers where every number in the list occurs only once

    //  Example
    int numbers[] = {1, 11, 34, 11, 52, 61, 1, 34};
    int sizeOfNumbers = sizeof(numbers) / sizeof(numbers[0]);
    std::cout << (unique(numbers, sizeOfNumbers)) << std::endl;
    //  should print: `[1, 11, 34, 52, 61]`

    // Solution: only learned arrays until today, so I will use a string as return value

    return 0;
}

std::string unique(int numbersArr[], int sizeArr)
{
    int uniqArr[sizeArr] = {0, 0, 0, 0, 0, 0, 0, 0}; // TODO: fill with for cycle
    bool itsNotInIt = true;
    std::string uniqueArrString = "";
    int index = 0;

    for (int i = 0; i < sizeArr; ++i) {
        // start for beginning of numbersArr, if not in uniqArr, add to it
        for (int j = 0; j < sizeArr; ++j) {
            if (numbersArr[i] == uniqArr[j]) {
                itsNotInIt = false;
            }
        }
        if (itsNotInIt) {
            uniqArr[index] = numbersArr[i];
            index++;
        }
        itsNotInIt = true;
    }

    uniqueArrString = "[";
    for (int k = 0; k < index; ++k) {
        uniqueArrString += std::to_string(uniqArr[k]);
        uniqueArrString += " ,";
    }
    uniqueArrString += "]";

    return uniqueArrString;
}