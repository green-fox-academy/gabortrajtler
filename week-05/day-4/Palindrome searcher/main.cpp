#include <iostream>
#include <vector>

std::vector<std::string> searchPalindrome(std::string input);

int main()
{
    std::vector<std::string> palindomes = searchPalindrome("dog goat dad duck doodle never");
    for (int i = 0; i < palindomes.size(); ++i) {
        std::cout << palindomes[i] << ", ";
    }
    std::cout << std::endl;
    return 0;
}

std::vector<std::string> searchPalindrome(std::string input)
{
    // előről megyünk karakterenként vizsgálunk, ameddig meg nem szakad az isPalindrome státusz.
    bool isPalindome = true;
    for (int i = 0; i < input; ++i) {

    }
}
