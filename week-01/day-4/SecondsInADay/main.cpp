#include <iostream>

int main() {
    int currentHours = 14;
    int currentMinutes = 34;
    int currentSeconds = 42;

    // Write a program that prints the remaining seconds (as an integer) from a
    // day if the current time is represented by the variables

    // Solution: Static cast is always good. :)

    int totalSecondsInADay = 24*60*60;
    int remainingSeconds = totalSecondsInADay - currentHours*60*60 - currentMinutes*60 - currentSeconds;
    std::cout << "ebbol a napbol meg " << remainingSeconds << " masodperc van hatra, ami megfelel " << static_cast<float>(remainingSeconds)/60/60 << " oranak.";

    return 0;
}