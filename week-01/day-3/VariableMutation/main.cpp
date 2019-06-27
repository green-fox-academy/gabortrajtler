#include <iostream>
#include <string>
#include <cmath>

int main() {

    int a = 3;
    // make the "a" variable's value bigger by 10
    a += 10;

    std::cout << a << std::endl;

    int b = 100;
    // make b smaller by 7
    b -= 7;

    std::cout << b << std::endl;

    int c = 44;
    // please double c's value
    c *= 2;

    std::cout << c << std::endl;

    int d = 125;
    // please divide by 5 d's value
    d /= 5;

    std::cout << d << std::endl;

    int e = 8;
    // please cube of e's value
    e = e*e*e;         // = 512
    e = std::cbrt(e);  // cube root = 8

    std::cout << e << std::endl;

    int f1 = 123;
    int f2 = 345;
    // tell if f1 is bigger than f2 (print as a boolean)

    std::cout << (f1 > f2 ? "f1 is bigger" : "f2 is bigger") << std::endl;
    // solution: maybe if() is nicer on the long term...

    int g1 = 350;
    int g2 = 200;
    // tell if the double of g2 is bigger than g1 (print as a boolean)
    if (g2*2 > g1) {
        std::cout << "g2*2 is bigger than g1\n";
    } else {
        std::cout << "g2*2 is less than g1\n";
    }

    int h = 135798745;
    // tell if it has 11 as a divisor (print as a boolean)
    bool hDivisor11;
    std::cout << (h % 11 == 0 ? hDivisor11=true : hDivisor11=false) << std::endl;

    int i1 = 10;
    int i2 = 3;
    // tell if i1 is higher than i2 squared and smaller than i2 cubed (print as a boolean)
    bool i1Condition;
    if (i1 > i2*i2 && i1 < i2*i2*i2){
        i1Condition = true;
    } else {
        i1Condition = false;
    }
    std::cout << i1Condition << std::endl;

    int j = 1521;
    // tell if j is divisible by 3 or 5 (print as a boolean)
    bool jIsDivisibleBy3or5;
    jIsDivisibleBy3or5 = j % 3 == 0 || j % 5 == 0;
    std::cout << std::boolalpha << jIsDivisibleBy3or5 << std::endl;

    return 0;
}