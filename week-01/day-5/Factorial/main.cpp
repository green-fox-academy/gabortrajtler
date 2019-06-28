#include <iostream>

// - Create a function called `factorio`
//   it should calculate its input's factorial.
//   it should not return it, but take an additional integer parameter and overwrite its value.

void factorio(int inputNumber);

int main()
{
    int inputNum = 0;

    std::cout << "do factorial to: " << std::endl;
    std::cin >> inputNum;

    factorio(inputNum);

    return 0;
}

void factorio(int inputNumber)
{
    int factorial = 1;

    for (int i = 1; i <= inputNumber; ++i) {
        factorial *= i;
    }

    if (inputNumber == 0){
        factorial = 1;
    }

    std::cout << inputNumber << "! = " << factorial << std::endl;
}