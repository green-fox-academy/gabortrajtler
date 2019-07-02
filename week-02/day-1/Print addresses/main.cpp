#include <iostream>

int main()
{
    // Create a program which accepts five integers from the console (given by the user)
    // and store them in an array
    // print out the memory addresses of the elements in the array

    int numbers[5];

    for (int i = 0; i < 5; ++i) {
        std::cout << "number " << i+1 << ". : ";
        std::cin >> numbers[i];
    }

    for (int j = 0; j < 5; ++j) {
        std::cout << &numbers[j] << " ";
    }

    return 0;
}