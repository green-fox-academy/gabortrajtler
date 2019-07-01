#include <iostream>
#include <map>

/*
 * We are going to represent our products in a map where the keys are strings representing the product's name and
 * the values are numbers representing the product's price.
    Create a map with the following key-value pairs.
        | Product name (key) | Price (value) |
        | :----------------- | :------------ |
        | Eggs | 200 |
        | Milk | 200 |
        | Fish | 400 |
        | Apples | 150 |
        | Bread | 50 |
        | Chicken | 550 |
    Create an application which solves the following problems.
    How much is the fish?
    What is the most expensive product?
    What is the average price?
    How many products' price is below 300?
    Is there anything we can buy for exactly 125?
    What is the cheapest product?
 */

int main()
{
    std::map<std::string, int> products = {
            {"Eggs",    200},
            {"Milk",    200},
            {"Fish",    400},
            {"Apples",  150},
            {"Bread",   50},
            {"Chicken", 550}
    };

    int productMostExpensivePrice = products["Eggs"];
    std::string productMostExpensive;

    std::cout << "How much is the fish? " << products["Fish"] << std::endl;
    std::cout << "What is the most expensive product? ";

    for (auto &iter: products) {
        if (iter.second > productMostExpensivePrice) {
            productMostExpensivePrice = iter.second;
            productMostExpensive = iter.first;
        }
    }
    std::cout << productMostExpensive << std::endl;
    std::cout << "What is the average price?" << std::endl;
    std::cout << "How many products' price is below 300?" << std::endl;
    std::cout << "Is there anything we can buy for exactly 125?" << std::endl;
    std::cout << "What is the cheapest product?" << std::endl;

    return 0;
}