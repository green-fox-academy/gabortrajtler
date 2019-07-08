#include <iostream>
#include <fstream>
#include <string>

void writeToFile(const std::string &path, const std::string &word, const int &number);

int main()
{
    // Create a function that takes 3 parameters: a path, a word and a number
    // and is able to write into a file.
    // The path parameter should be a string that describes the location of the file you wish to modify
    // The word parameter should also be a string that will be written to the file as individual lines
    // The number parameter should describe how many lines the file should have.
    // If the word is "apple" and the number is 5, it should write 5 lines
    // into the file and each line should read "apple"

    writeToFile("../write_multiple_lines.txt", "Beatles", 100);

    return 0;
}

void writeToFile(const std::string &path, const std::string &word, const int &number)
{
    std::ofstream inputFile(path);
    if (inputFile.is_open()) {
        for (int i = 0; i < number; ++i) {
            inputFile << word << "\n";
        }
    }
    inputFile.close();
}
