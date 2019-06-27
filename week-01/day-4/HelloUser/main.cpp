#include <iostream>

int main() {
    // Modify this program to greet user instead of the World!
    // The program should ask for the name of the user

    // Solution: use traveller's name.

    std::string travellerName;
    std::cout << "Enter traveller name: ";
    std::cin >> travellerName;
    std::cout << "Greetings " << travellerName << "!" << std::endl;

    return 0;
}