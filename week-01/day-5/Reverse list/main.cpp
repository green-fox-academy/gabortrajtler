#include <iostream>

int main()
{
    // - Create an array variable named `aj`
    //   with the following content: `[3, 4, 5, 6, 7]`
    // - Reverse the order of the elements in `aj`
    // - Print the elements of the reversed `aj`

    int aj[] = {3, 4, 5, 6, 7};
    int sizeOfAj= sizeof(aj) / sizeof(aj[0]);
    for (int i = 0; i < sizeOfAj / 2; ++i) {
        // pull out the biggest value and move change with the first one
        int biggestVal = aj[sizeOfAj-i-1];
        int smallestVal = aj[i];
        aj[i] = biggestVal;
        aj[sizeOfAj-i-1] = smallestVal;
    }

    for (int i = 0; i < sizeOfAj; ++i) {
        std::cout << aj[i];
        std::cout << ", ";
    }

    return 0;
}