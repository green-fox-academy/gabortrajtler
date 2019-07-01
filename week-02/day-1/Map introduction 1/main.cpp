#include <iostream>
#include <map>

int main()
{
    /*
     *  Create an empty map where the keys are integers and the values are characters
        Print out whether the map is empty or not
        Add the following key-value pairs to the map | Key | Value | | :-- | :---- | | 97 | a | | 98 | b | | 99 | c | | 65 | A | | 66 | B | | 67 | C |
        Print all the keys
        Print all the values
        Add value D with the key 68
        Print how many key-value pairs are in the map
        Print the value that is associated with key 99
        Remove the key-value pair where with key 97
        Print whether there is an associated value with key 100 or not
        Remove all the key-value pairs
     */

    std::map<int, char> charMap;
    std::cout << "Empty? " << (charMap.empty() ? "Yes" : "Nope") << std::endl;
    charMap.insert(std::make_pair(97, 'a'));
    charMap.insert(std::make_pair(98, 'b'));
    charMap.insert(std::make_pair(99, 'c'));
    charMap.insert(std::make_pair(65, 'A'));
    charMap.insert(std::make_pair(66, 'B'));
    charMap.insert(std::make_pair(67, 'C'));
    // Print keys
    auto it = charMap.begin();
    while (it != charMap.end()) {
        std::cout << it->first << ", ";
        it++;
    }
    std::cout << std::endl;

    // Print values
    it = charMap.begin();
    while (it != charMap.end()) {
        std::cout << it->second << ", ";
        it++;
    }
    std::cout << std::endl;

    charMap.insert(std::make_pair(68, 'D'));

    std::cout << "New size: " << charMap.size() << std::endl;
    std::cout << "99: " << charMap[99] << std::endl;

    charMap.erase(97);

    // Print key: values
    it = charMap.begin();
    while (it != charMap.end()) {
        std::cout << it->first << ":" << it->second << " ";
        it++;
    }
    std::cout << std::endl;

    std::cout << (charMap.find(100) == charMap.end() ? "No value with key 100" : "There's value for key 100")
              << std::endl;

    charMap.clear();

    return 0;
}