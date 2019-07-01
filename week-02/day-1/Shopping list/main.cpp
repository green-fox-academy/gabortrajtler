#include <iostream>
#include <vector>

/*
 * We are going to represent a shopping list in a list containing strings.
    Create a list with the following items.
    Eggs, milk, fish, apples, bread and chicken
    Create an application which solves the following problems.
    Do we have milk on the list?
    Do we have bananas on the list?
 */

int main()
{
    std::vector<std::string> fruits = {"Eggs", "milk", "fish", "apples", "bread", "chicken"};
    bool gotmilk = false;
    bool gotbananas = false;
    for (int i = 0; i < fruits.size(); ++i) {
        if (fruits[i] == "milk") {
            gotmilk = true;
        }
        if (fruits[i] == "banana") {
            gotbananas = true;
        }
    }
    if (gotmilk) {
        std::cout << "Yepp, we've got milk." << std::endl;
    } else {
        std::cout << "Oh no, go get milk, we don't have it!" << std::endl;
    }
    if (gotbananas) {
        std::cout << "Yepp, we've got bananas." << std::endl;
    } else {
        std::cout << "Oh no, go get bananas, we don't have them!" << std::endl;
    }

    return 0;
}