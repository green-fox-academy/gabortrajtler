#include <iostream>

int main()
{
    // Create a program which accepts five integers from the console (given by the user)
    // and store them in an array
    // print out the values of that array using pointers again

    int numbers[5];

    for (int i = 0; i < 5; ++i) {
        std::cout << "number " << i+1 << ". : ";
        std::cin >> numbers[i];
    }

    int *myPtr = numbers;

    while (myPtr != &numbers[5]) {
        std::cout << *myPtr << " ";
        myPtr++;
    }

    return 0;
}