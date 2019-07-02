#include <iostream>

void addNum (const int &inFirst, const int &inSecond, int *out){
    std::cout << &inFirst << ": " << inFirst << std::endl;
    *out = inFirst + inSecond;
}

int main()
{
    // Add two numbers using pointers

    int a = 20;
    int b = 17;
    int sum;

    addNum(a, b, &sum);

    std::cout << sum << std::endl;
    return 0;
}