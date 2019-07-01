#include <iostream>
#include <string>

int main()
{
    std::string quote("Hofstadter's Law: It you expect, even when you take into account Hofstadter's Law.");

    // When saving this quote a disk error has occured. Please fix it.
    // Add "always takes longer than" to the quote between the words "It" and "you" using the replace function

    std::string newString = "always takes longer than ";
    std::string oldString1 = "It";
    int oldString1Pos = quote.find(oldString1);
    int oldString1Size = oldString1.size();

    quote.replace(oldString1Pos + oldString1Size + 1, 0, newString);

    std::cout << quote << std::endl;
    return 0;
}