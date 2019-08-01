#include <iostream>

std::string createPalindrome(std::string input);

int main()
{
    std::cout << createPalindrome("123321") << std::endl;
    return 0;
}

std::string createPalindrome(std::string input)
{
    bool isPalindrome = true;
    std::string palindromeCreated;
    for (int i = 0; i < input.size(); ++i) {
        if (input[i] != input[input.size()-i-1]) {
            isPalindrome = false;
        }
    }
    if (!isPalindrome) {
        palindromeCreated = input;
        for (int i = input.size()-1; i >= 0; --i) {
            palindromeCreated += input[i];
        }
    } else {
        palindromeCreated = input;
    }

    return palindromeCreated;
}
