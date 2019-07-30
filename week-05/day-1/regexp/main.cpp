#include <iostream>
#include <regex>

int main()
{

    std::string subject("Name: John Doe");  std::string result;
    std::regex re("Name: (.*)");
    std::smatch match;
    if (std::regex_search(subject, match, re) && match.size() > 1) {
        result = match.str(1);
    } else {
        result = std::string("");
    }   // result: "John Doe"

    std::cout << result << std::endl;

    std::string subject2("Name: John Doe");
    std::regex re2("(Name: )(.*)( Doe)");  std::string replacement("Gabor");
    std::smatch match2;
    if (std::regex_search(subject2, match2, re2) && match2.size() > 1) {
        result = std::regex_replace(subject2, re2, "$1"+replacement+"$3");
    } else {
        result = subject2;
    }   // result: "Name: Gabor Doe"

    std::cout << result << std::endl;

    return 0;
}