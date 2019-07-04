#include <iostream>
#include <map>
#include <vector>

float sumPayments(const std::map<std::string, int> &shoppingList, std::map<std::string, float> productsPrice);
int piecesOnList(const std::map<std::string, int> &shoppingList);

int main()
{
    // Represent the following products with their prices
    std::map<std::string, float> products = {
            {"Milk",            1.07},
            {"Rice",            1.59},
            {"Eggs",            3.14},
            {"Cheese",          12.60},
            {"Chicken Breasts", 9.40},
            {"Apples",          2.31},
            {"Tomato",          2.58},
            {"Potato",          1.75},
            {"Onion",           1.10}
    };

    // Represent Bob's shopping list
    std::map<std::string, int> bobList = {
            {"Milk",            3},
            {"Rice",            2},
            {"Eggs",            2},
            {"Cheese",          1},
            {"Chicken Breasts", 4},
            {"Apples",          1},
            {"Tomato",          2},
            {"Potato",          1}
    };

    // Represent Alice's shopping list
    std::map<std::string, int> aliceList = {
            {"Rice",            1},
            {"Eggs",            5},
            {"Chicken Breasts", 2},
            {"Apples",          1},
            {"Tomato",          10}
    };

    /*
     * Create an application which solves the following problems.
            How much does Bob pay?
            How much does Alice pay?
            Who buys more Rice?
            Who buys more Potato?
            Who buys more different products?
            Who buys more products? (piece)
     */

    float bobPayed = 0;
    float alicePayed = 0;

    // How much does Bob pay?
    bobPayed = sumPayments(bobList, products);
    std::cout << "Bob payed: " << bobPayed << std::endl;

    // How much does Alice pay?
    alicePayed = sumPayments(aliceList, products);
    std::cout << "Alice payed: " << alicePayed << std::endl;

    // Who buys more Rice?
    // Who buys more Potato?
    std::vector<std::string> productNames = {"Rice", "Potato"};
    for (int i = 0; i < productNames.size(); ++i) {
        if (bobList[productNames[i]] > aliceList[productNames[i]]) {
            std::cout << "Bob buys more " << productNames[i] << ".";
        } else if (bobList[productNames[i]] < aliceList[productNames[i]]) {
            std::cout << "Alice buys more " << productNames[i] << ".";
        } else {
            std::cout << "No ones buy more " << productNames[i] << " than the other.";
        }
        std::cout << std::endl;
    }

    // Who buys more different products?
    if (bobList.size() > aliceList.size()) {
        std::cout << "Bob buys more different products (" << bobList.size() << ")." ;
    } else if (bobList.size() < aliceList.size()) {
        std::cout << "Alice buys more different products (" << aliceList.size() << ").";
    } else {
        std::cout << "No ones buys more different products.";
    }
    std::cout << std::endl;

    // Who buys more products (piece)?
    int piecesOnListBob = piecesOnList(bobList);
    int piecesOnListAlice = piecesOnList(aliceList);
    if (piecesOnListBob > piecesOnListAlice) {
        std::cout << "Bob buys more products (pieces: " << piecesOnListBob << ")." ;
    } else if (piecesOnListBob < piecesOnListAlice) {
        std::cout << "Alice buys more products (pieces: " << piecesOnListAlice << ").";
    } else {
        std::cout << "No ones buys more products (pieces).";
    }
    std::cout << std::endl;

    return 0;
}

float sumPayments(const std::map<std::string, int> &shoppingList, std::map<std::string, float> productsPrice)
{
    float sumPayed = 0;
    for (auto &iter: shoppingList) {
        std::string item = iter.first;
        int quantity = iter.second;
        sumPayed += quantity * productsPrice[item];
    }
    return sumPayed;
}

int piecesOnList(const std::map<std::string, int> &shoppingList)
{
    int sumPieces = 0;
    for (auto &iter: shoppingList) {
        int quantity = iter.second;
        sumPieces += quantity;
    }
    return sumPieces;
}

