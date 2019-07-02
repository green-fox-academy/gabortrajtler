#include <iostream>
#include <vector>

void printList(const std::vector<std::string> &list, const std::string &listname, int element = -1);

void printList(const std::vector<std::string> &list, const std::string &listname, int element)
{
    if (element == -1) {        // Print ALL element
        std::cout << listname << ": ";
        for (const auto &iter : list) {
            std::cout << iter << ", ";
        }
        std::cout << std::endl;
    } else {                    // Print a specific element (position-11)
        std::cout << listname << " " << element << ". element: ";
        std::cout << list.at(element-1);
        std::cout << std::endl;
    }
}

int main()
{
    /*
     * Create a list ('List A') which contains the following values
        Apple, Avocado, Blueberries, Durian, Lychee
        Create a new list ('List B') with the values of List A
        Print out whether List A contains Durian or not
        Remove Durian from List B
        Add Kiwifruit to List A after the 4th element
        Compare the size of List A and List B
        Get the index of Avocado from List A
        Get the index of Durian from List B
        Add Passion Fruit and Pomelo to List B in a single statement
        Print out the 3rd element from List A
     */

    std::vector<std::string> listA = {
            "Apple", "Avocado", "Blueberries", "Durian", "Lychee"
    };
    std::vector<std::string> listB = listA;
    bool foundDurian = false;
    int indexOfDurianListA = -1;
    int indexOfDurianListB = -1;
    int indexOfAvocado = 0;
    int c = 0;

    for (const auto &iter : listA) {
        if (iter == "Durian") {
            foundDurian = true;
            indexOfDurianListA = c;
        }
        if (iter == "Avocado") {
            indexOfAvocado = c;
        }
        c++;
    }

    if (foundDurian) {
        std::cout << "There is Durian on the list." << std::endl;
    } else {
        std::cout << "Durian is not on the list." << std::endl;
    }

    listB.erase(listB.begin() + indexOfDurianListA);
    printList(listB, "listB");
    listA.insert(listA.begin() + 3, "Kiwifruit");
    printList(listA, "listA");

    c = 0;
    for (const auto &iter : listB) {
        if (iter == "Durian") {
            indexOfDurianListB = c;
        }
        c++;
    }

    if (listA.size() > listB.size()) {
        std::cout << "listA is bigger";
    } else if (listA.size() < listB.size()) {
        std::cout << "listB is bigger";
    } else {
        std::cout << "lists size identical";
    }
    std::cout << std::endl;

    std::cout << "Index of Avocado listA: " << indexOfAvocado << std::endl;
    std::cout << "Index of Durian listB: " << indexOfDurianListB << std::endl;

    std::vector<std::string> insertList = {"Passion Fruit", "Pomelo"};
    listB.insert(listB.end(), insertList.begin(), insertList.end());
    printList(listB, "listB");
    printList(listB, "listA", 3);

    return 0;
}