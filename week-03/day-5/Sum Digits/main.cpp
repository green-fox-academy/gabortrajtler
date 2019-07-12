#include <iostream>

int sumDigits(unsigned int n) {
    if(n < 10) {
        return n;
    } else {
        return (n % 10) + sumDigits(n / 10);
    }
}

int main()
{

    /*
     *
     * Given a non-negative integer n, return the sum of its digits recursively (without loops).

        Hint
        Mod (%) by 10 yields the rightmost digit (e.g. 126 % 10 is 6)

        Java, C++, C#, Python
        Divide (/) by 10 removes the rightmost digit (e.g. 126 / 10 is 12).
     *
     */
    std::cout << sumDigits(323456) << std::endl;
    return 0;
}