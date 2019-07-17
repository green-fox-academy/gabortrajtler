//
// Created by Gabor on 2019. 07. 17..
//

#ifndef TEST_EXTENSION_H
#define TEST_EXTENSION_H

#include <iostream>
#include <vector>

int add(int a, int b);

int maxOfThree(int a, int b, int c);

int median(const std::vector<int> &pool);

bool isVowel(char c);

std::vector<std::string> split(const std::string &str, char delim);

std::string join(const std::string &separator, const std::vector<std::string> &array);

std::string translate(const std::string &hungarian);


#endif //TEST_EXTENSION_H
