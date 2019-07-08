#include <iostream>
#include <fstream>
#include <string>

int countLines(std::string &fileName);

int main()
{
    // Write a program that opens a file called "my-file.txt", then prints
    // each line from the file.
    // You will have to create the file, you may use C-programming, although it is not mandatory

    // Write a function that takes a filename as string,
    // then returns the number of lines the file contains.
    // It should return zero if it can't open the file

    std::string fileName = "../my-file2.txt";
    std::ifstream inputFile(fileName);
    std::string line;
    if (inputFile.is_open()) {
        while (getline(inputFile, line)) {
            std::cout << line << "\n";
        }
    }
    inputFile.close();

    std::cout << countLines(fileName);

    return 0;
}

int countLines(std::string &fileName)
{
    std::ifstream inputFile(fileName);
    std::string line;
    int lineCounter = 0;
    if (inputFile.is_open()) {
        while (getline(inputFile, line)) {
            lineCounter++;
        }
    } else {
        return 0;
    }
    inputFile.close();

    return lineCounter;
}