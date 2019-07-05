#include <iostream>
#include <vector>

bool isAnagram(const std::string &input1, const std::string &input2);
int getCharOccurrences(char actualChar, std::string inputString);

bool isAnagram(const std::string &input1, const std::string &input2)
{
    // Test 1: compare sizes
    if (input1.size() != input2.size()) {
        return false;
    }

    // Test 2: compare chars: get actualChar occurrences in both strings and compare them
    for (int i = 0; i < input1.size(); ++i) {
        char actualChar = input1[i];
        if (getCharOccurrences(actualChar, input1) != getCharOccurrences(actualChar, input2)) {
            return false;
        }
    }

    // all tests are OK, return true
    return true;
}

int getCharOccurrences(char actualChar, std::string inputString)
{
    int occurrences = 0;
    for (int i = 0; i < inputString.size(); ++i) {
        if (inputString[i] == actualChar) {
            occurrences++;
        }
    }
    return occurrences;
}

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