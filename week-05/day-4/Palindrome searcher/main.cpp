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
    bool isPalindome = true;
    for (int i = 0; i < input.size(); ++i) {
        char charToExamine = input[i];
/*        int palindromeSize = 0;
        while (isPalindome) {
            for (int j = i; j < input.size(); ++j) {
                if (charToExamine == input[j]) {

                }
            }
        }*/
    }
}
