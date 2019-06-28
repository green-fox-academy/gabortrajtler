#include <iostream>

int main()
{
    // - Create an array variable named `ai`
    //   with the following content: `[3, 4, 5, 6, 7]`
    // - Print the sum of the elements in `ai`

    int ai[] = {3, 4, 5, 6, 7};
    int sumOfAi = 0;

    for (int i = 0; i < sizeof(ai) / sizeof(ai[0]); ++i) {
        sumOfAi += ai[i];
    }

    std::cout << "sum of ai: " << sumOfAi;

    return 0;
}