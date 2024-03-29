#include <iostream>
#include <map>

/*
 * We are going to represent our contacts in a map where the keys are going to be strings and the values are going to be strings as well.
    Create a map with the following key-value pairs.
        | Name (key) | Phone number (value) |
        | :------------------ | :------------------- |
        | William A. Lathan | 405-709-1865 |
        | John K. Miller | 402-247-8568 |
        | Hortensia E. Foster | 606-481-6467 |
        | Amanda D. Newland | 319-243-5613 |
        | Brooke P. Askew | 307-687-2982 |
    Create an application which solves the following problems.
    What is John K. Miller's phone number?
    Whose phone number is 307-687-2982?
    Do we know Chris E. Myers' phone number?
 */

int main()
{
    std::map<std::string, std::string> contacts = {
            {"William A. Lathan",   "405-709-1865"},
            {"John K. Miller",      "402-247-8568"},
            {"Hortensia E. Foster", "606-481-6467"},
            {"Amanda D. Newland",   "319-243-5613"},
            {"Brooke P. Askew",     "307-687-2982"}
    };

    std::cout << "What is John K. Miller's phone number? " << contacts["John K. Miller"] << std::endl;
    std::cout << "Whose phone number is 307-687-2982?";
    for (auto &iter: contacts) {
        if (iter.second == "307-687-2982") {
            std::cout << iter.first;
        }
    }
    std::cout << std::endl;

    std::cout << "Do we know Chris E. Myers' phone number?" << std::endl;
    if (contacts.find("Chris E. Myers") == contacts.end()) {
        std::cout << "No cell phone number for Chris E. Myers";
    } else {
        std::cout << "There is a cell phone number for Chris E. Myers";
    }
    std::cout << std::endl;

    return 0;
}