#include <iostream>
#include <vector>
#include "anagram.h"

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