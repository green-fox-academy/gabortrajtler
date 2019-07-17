//
// Created by Gabor on 2019. 07. 17..
//

#include <iostream>
#include "CountLetters.h"

std::map<char, int> CountLetters::countLetters(std::string inputString)
{
    std::map<char, int> counterMap;
    for (int i = 0; i < inputString.size(); ++i) {
        counterMap[inputString[i]]++;
    }

    for (auto &iter: counterMap) {
        std::cout << iter.first << ": " << iter.second << std::endl;
    }

    return counterMap;
}
