#include <iostream>

void swapNumbers(int *swapA, int *swapB);

int main()
{
    // Create a function which swaps the values of 'a' and 'b'
    // This time use a void funtion and pointers

    int a = 10;
    int b = 316;

    swapNumbers(&a, &b);

    std::cout << "a: " << a << ", b: " << b << std::endl;
    return 0;
}

void swapNumbers(int *swapA, int *swapB)
{
    int temp = *swapA;
    *swapA = *swapB;
    *swapB = temp;
}