#include <iostream>

int findGCD(int n1, int n2)
{
    if (n1 == n2) {
        return n1;
    } else if (n1 > n2) {
        //std::cout << n1-n2 <<", " << n2<< std::endl;
        return findGCD(n1 - n2, n2);
    } else {
        //std::cout << n1 <<", " << n2-n1<< std::endl;
        return findGCD(n1, n2 - n1);
    }
}

int main()
{
    /*
     * Find the greatest common divisor of two numbers using recursion.
     */

    // this is the Euclidean / deduction's way, it's not working with little difference between big numbers
    // eq. this fills the stack memory: findGCD(1000000, 1000010);
    int gcd = findGCD(15,1000);
    std::cout << gcd << " <-- GCD" << std::endl;
    return 0;
}