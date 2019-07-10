#include <iostream>
#include <vector>

#include "domino.h"

std::vector<Domino> initializeDominoes()
{
    std::vector<Domino> dominoes;
    dominoes.push_back(Domino(5, 2));
    dominoes.push_back(Domino(4, 6));
    dominoes.push_back(Domino(1, 5));
    dominoes.push_back(Domino(6, 7));
    dominoes.push_back(Domino(2, 4));
    dominoes.push_back(Domino(7, 1));
    return dominoes;
}

int main(int argc, char *args[])
{
    std::vector<Domino> dominoes = initializeDominoes();
    // You have the list of Dominoes
    // Order them into one snake where the adjacent dominoes have the same numbers on their adjacent sides
    // eg: [2, 4], [4, 3], [3, 5] ...

    int numberToFitWith = dominoes[0].getValues().second;
    int insertBeforeIndex = 1;
    std::cout << "Got the first domino: " << dominoes[0].getValues().first << " : " << dominoes[0].getValues().second << std::endl;

    while (insertBeforeIndex != 6) {
        std::cout << "Searching for next domino in the pool..." << std::endl;
        for (int i = 0; i < dominoes.size(); i++) {
            if (dominoes[i].getValues().first == numberToFitWith) {
                std::cout << "Got it! It's: " << dominoes[i].getValues().first << " : " << dominoes[i].getValues().second << std::endl;
                //set fitWith for next checking
                numberToFitWith = dominoes[i].getValues().second;
                //insert domino next to the domino before
                dominoes.insert(dominoes.begin() + insertBeforeIndex, dominoes[i]);
                //delete from old position
                dominoes.erase(dominoes.begin() + i + 1);
                insertBeforeIndex++;
            }
        }
    }

    std::cout << std::endl << "The snake of dominoes: " << std::endl;
    for (int i = 0; i < dominoes.size(); i++) {
        std::cout << dominoes[i].getValues().first << " : " << dominoes[i].getValues().second << std::endl;
    }

    return 0;
}