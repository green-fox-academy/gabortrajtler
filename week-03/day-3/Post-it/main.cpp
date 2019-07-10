#include <iostream>
#include "PostIt.h"

int main()
{
    PostIt postIt1("orange", "Idea 1", "blue");
    std::cout << "BG: " << postIt1.getBackgroundColor() << ", TColor: " << postIt1.getTextColor() << ", Text: " << postIt1.getText() << std::endl;
    PostIt postIt2("pink", "Awesome", "black");
    std::cout << "BG: " << postIt2.getBackgroundColor() << ", TColor: " << postIt2.getTextColor() << ", Text: " << postIt2.getText() << std::endl;
    PostIt postIt3("yellow", "Superb!", "green");
    std::cout << "BG: " << postIt3.getBackgroundColor() << ", TColor: " << postIt3.getTextColor() << ", Text: " << postIt3.getText() << std::endl;
    return 0;
}