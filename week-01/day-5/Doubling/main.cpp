#include <iostream>

int doubling(int inputNumber);

int main()
{
    // - Create an integer variable named `baseNum` and assign the value `123` to it
    // - Create a function called `doubling` that doubles it's input parameter and returns with an integer
    // - Print the result of `doubling(baseNum)`

    int baseNum = 123;

    std::cout << doubling(baseNum) << std::endl;
    return 0;
}

int doubling(int inputNumber){
    return inputNumber * 2;
}