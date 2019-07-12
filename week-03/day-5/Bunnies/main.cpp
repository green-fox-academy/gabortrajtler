#include <iostream>

int countBunnies(int bunniesNum){
    if(bunniesNum == 1) {
        return 2;
    } else {
        return 2 + countBunnies(bunniesNum-1);
    }
}

int main()
{
    /*
     * We have a number of bunnies and each bunny has two big floppy ears.
     * We want to compute the total number of ears across all the bunnies recursively (without loops or multiplication).
     *
     */
    std::cout << countBunnies(5) << std::endl;
    return 0;
}