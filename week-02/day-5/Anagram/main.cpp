#include <iostream>
#include <vector>
#include "app/anagram.h"

int main()
{
    /*
     * Create a function named is anagram
     * following your current language's style guide.
     * It should take two strings and return a
     * boolean value depending on whether its an anagram or not.
     */


    std::string words[2] = {
            "dog", "god"
    };

    std::cout << "Anagram? " << isAnagram(words[0], words[1]) << std::endl;

    return 0;
}