#include <iostream>

int main() {
    // Swap the values of the variables

    // Solution: ok, lets introduce a swap variable.

    int a = 123;
    int b = 526;
    int swap = 0;

    std::cout << "old a: " << a << std::endl;
    std::cout << "old b: " << b << std::endl;

    std::cout << "swapping...\n";
    swap = a;
    a = b;
    b = swap;

    std::cout << "new a: " << a << std::endl;
    std::cout << "new b: " << b << std::endl;

    return 0;
}