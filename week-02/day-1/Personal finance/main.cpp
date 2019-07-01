#include <iostream>
#include <vector>

/*
 * We are going to represent our expenses in a list containing integers.
        Create a list with the following items.
        500, 1000, 1250, 175, 800 and 120
        Create an application which solves the following problems.
        How much did we spend?
        Which was our greatest expense?
        Which was our cheapest spending?
        What was the average amount of our spendings?
 */
int main()
{
    std::vector<int> expenses = {500, 1000, 1250, 175, 800, 120};
    int expensesSum = 0;
    int expensesGreatest = expenses[0];
    int expensesCheapest = expenses[0];
    float expensesAvg = 0;

    for (int expense : expenses) {
        expensesSum += expense;
        if (expense > expensesGreatest) {
            expensesGreatest = expense;
        } else if (expense < expensesCheapest) {
            expensesCheapest = expense;
        }
    }

    expensesAvg = static_cast<float>(expensesSum) / expenses.size();

    std::cout << "Sum: " << expensesSum << std::endl;
    std::cout << "Greatest: " << expensesGreatest << std::endl;
    std::cout << "Cheapest: " << expensesCheapest << std::endl;
    std::cout << "Avg: " << expensesAvg << std::endl;

    return 0;
}