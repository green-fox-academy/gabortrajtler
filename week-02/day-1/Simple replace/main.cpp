#include <iostream>
#include <string>

int main(int argc, char* args[])
{
    std::string example("In a dishwasher far far away");
    std::string oldString = "dishwasher";
    int firstPos = example.find(oldString);
    int lengthToReplace = oldString.size();
    example.replace(firstPos, lengthToReplace, "galaxy");

    // I would like to replace "dishwasher" with "galaxy" in this example, but it has a problem.
    // Please fix it for me!
    // Expected output: In a galaxy far far away

    std::cout << example << std::endl;
    return 0;
}