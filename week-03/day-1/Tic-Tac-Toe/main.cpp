#include <iostream>
#include <fstream>
#include <string>
#include <vector>

std::string ticTacResult(const std::string &filePath);

void printCharVector(const std::vector<char> &vector, const std::string &vectorName);

bool hasWinnerPos(const std::vector<char> &vector, char player);

int main()
{
    // Write a function that takes a filename as string,
    // open and read it. The file data represents a tic-tac-toe
    // game result. Return 'X'/'O'/'draw' based on which player
    // has winning situation.

    std::cout << ticTacResult("../win-o.txt") << std::endl;
    // should print O

    std::cout << ticTacResult("../win-x.txt") << std::endl;
    // should print X

    std::cout << ticTacResult("../draw.txt") << std::endl;
    // should print draw

    return 0;
}

std::string ticTacResult(const std::string &filePath)
{
    std::ifstream playFile(filePath);
    std::vector<char> playPositions;
    std::string line;
    if (playFile.is_open()) {
        while (getline(playFile, line)) {
            for (int i = 0; i < line.size(); ++i) {
                playPositions.emplace_back(line[i]);
            }
        }
    }
    playFile.close();
    //printCharVector(playPositions, "positions");
    if (hasWinnerPos(playPositions, 'O')) {
        return "Winner: O";
    } else if (hasWinnerPos(playPositions, 'X')) {
        return "Winner: X";
    } else {
        return "draw";
    }
}

void printCharVector(const std::vector<char> &vector, const std::string &vectorName)
{
    std::cout << vectorName << ": [";
    for (int i = 0; i < vector.size(); ++i) {
        if (i != vector.size() - 1) {
            std::cout << vector[i] << ", ";
        } else {
            std::cout << vector[i];
        }
    }
    std::cout << "]" << std::endl;
}

bool hasWinnerPos(const std::vector<char> &vector, char player)
{
    std::vector<std::vector<int>> winnerPositions = {
            {0, 1, 2},
            {3, 4, 5},
            {6, 7, 8},
            {0, 3, 6},
            {1, 4, 7},
            {2, 5, 8},
            {0, 4, 8},
            {2, 4, 6}
    };

    for (int i = 0; i < winnerPositions.size(); ++i) {
        if (player == vector[winnerPositions[i][0]] && player == vector[winnerPositions[i][1]] && player ==
            vector[winnerPositions[i][2]]) {
            return true;
        }
    }

    return false;
}