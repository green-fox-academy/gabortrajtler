#include <iostream>

//  Create a function that takes two strings as a parameter
//  Returns the starting index where the second one is starting in the first one
//  Returns `-1` if the second string is not in the first one

// Solution: Haha, solution was only one line + some fixing in the given skeleton

int substr(std::string str, std::string keyword)
{
    return str.find(keyword);
}

int main()
{
    // Should print: '17'
    std::cout << substr("this is what I'm searching in", "searching") << std::endl;

    // Should print: '-1'
    std::cout << substr("this is what I'm searching in", "not") << std::endl;
}