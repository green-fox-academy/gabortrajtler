#include <iostream>

void divideTen(int number);

int main()
{
    // Create a function that takes a number
    // divides ten with it,
    // and prints the result.
    // It should print "fail" if the parameter is 0
    divideTen(0);
    return 0;
}

void divideTen(int number)
{
    try {
        if (number == 0) {
            throw 0;
        }
        std::cout << static_cast<float>(10) / number << std::endl;
    } catch (int exceptionId) {
        if (exceptionId == 0) {
            std::cout << "fail, cannot div by 0." << std::endl;
        }
    }
}
