#include <iostream>

int fibonacci(int n) {
    if(n==1 || n==0) {
        return n;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main()
{
    /*
     * The first two values in the sequence are 0 and 1 (essentially 2 base cases).
     * Each subsequent value is the sum of the previous two values, so the whole sequence is: 0, 1, 1, 2, 3, 5, 8, 13, 21 and so on.

        Define a recursive fibonacci(n) method that returns the n'th fibonacci number, with n=0 representing the start of the sequence.
     *
     *
     */

    for (int i = 0; i < 100; ++i) {
        std::cout << i << ": " << fibonacci(i) << std::endl;
        if (fibonacci(i) < 0){
            return 0;
        }
    }
    return 0;
}