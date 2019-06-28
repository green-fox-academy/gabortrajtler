#include <iostream>

int main()
{
    // - Create an array variable named `animals`
    //   with the following content: `["koal", "pand", "zebr"]`
    // - Add all elements an `"a"` at the end

    std::string animals[] = {"koal", "pand", "zebr"};

    for (int i = 0; i < sizeof(animals) / sizeof(animals[0]); ++i) {
        animals[i] = animals[i] + "a";
    }

    for (int i = 0; i < sizeof(animals) / sizeof(animals[0]); ++i) {
        std::cout << animals[i];
        std::cout << ", ";
    }

    return 0;
}