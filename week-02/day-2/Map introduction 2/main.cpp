#include <iostream>
#include <map>

/*
 * Create a map where the keys are strings and the values are strings with the following initial values
        Key	Value
        978-1-60309-452-8	A Letter to Jo
        978-1-60309-459-7	Lupus
        978-1-60309-444-3	Red Panda and Moon Bear
        978-1-60309-461-0	The Lab
        Print all the key-value pairs in the following format

        A Letter to Jo (ISBN: 978-1-60309-452-8)
        Lupus (ISBN: 978-1-60309-459-7)
        Red Panda and Moon Bear (ISBN: 978-1-60309-444-3)
        The Lab (ISBN: 978-1-60309-461-0)
        Remove the key-value pair with key 978-1-60309-444-3

        Remove the key-value pair with value The Lab

        Add the following key-value pairs to the map

        Key	Value
        978-1-60309-450-4	They Called Us Enemy
        978-1-60309-453-5	Why Did We Trust Him?
        Print whether there is an associated value with key 478-0-61159-424-8 or not

        Print the value associated with key 978-1-60309-453-5
 *
 */

void printMap(std::map<std::string, std::string> &mapWorking, const std::string &mapName);

void printMapSpecialFormat(std::map<std::string, std::string> &mapWorking);

void printMap(std::map<std::string, std::string> &mapWorking, const std::string &mapName)
{
    std::cout << std::endl;
    std::cout << "| " << mapName << ": ";
    std::cout << std::endl;
    for (auto &iter: mapWorking) {
        std::cout << "| " << iter.first << ": " << iter.second;
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

void printMapSpecialFormat(std::map<std::string, std::string> &mapWorking)
{
    for (auto &iter: mapWorking) {
        std::cout << iter.second << " (ISBN: " << iter.first << ")";
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

void deletefromMapByValue(std::map<std::string, std::string> &mapWorking, const std::string &deleteItemName)
{
    for (auto &iter: mapWorking) {
        if (iter.second == deleteItemName) {
            std::cout << "deleting: " << iter.first << ": "  << iter.second << std::endl;
            mapWorking.erase(iter.first);
        }
    }
}

int main()
{
    std::map<std::string, std::string> books = {
            {"978-1-60309-452-8", "A Letter to Jo"},
            {"978-1-60309-459-7", "Lupus"},
            {"978-1-60309-444-3", "Red Panda and Moon Bear"},
            {"978-1-60309-461-0", "The Lab"}
    };

    printMapSpecialFormat(books);

    //Remove the key-value pair with key 978-1-60309-444-3
    books.erase("978-1-60309-444-3");

    //Remove the key-value pair with value The Lab
    deletefromMapByValue(books, "The Lab");

    //Add the following key-value pairs to the map
    // Key	Value
    //978-1-60309-450-4	They Called Us Enemy
    //978-1-60309-453-5	Why Did We Trust Him?
    books.insert((std::make_pair("978-1-60309-450-4", "They Called Us Enemy")));
    books.insert((std::make_pair("978-1-60309-453-5", "Why Did We Trust Him?")));

    // Print whether there is an associated value with key 478-0-61159-424-8 or not
    if(books.find("478-0-61159-424-8") != books.end()) {
        std::cout << "Found book with ID: \"478-0-61159-424-8\": " << books["478-0-61159-424-8"];
    } else {
        std::cout << "Book with ID 478-0-61159-424-8 not found.";
    }
    std::cout << std::endl;

    // Print the value associated with key 978-1-60309-453-5
    std::cout << books["978-1-60309-453-5"];
    printMap(books, "books");

    return 0;
}