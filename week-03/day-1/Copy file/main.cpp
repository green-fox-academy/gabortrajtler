#include <iostream>
#include <fstream>
#include <string>

bool copyFileContent(const std::string &sourceFilePath, const std::string &destinationFilePath);

int main()
{
    // Write a function that reads all lines of a file and writes the read lines to an other file (a.k.a copies the file)
    // It should take the filenames as parameters
    // It should return a boolean that shows if the copy was successful

    std::string sourceFilePath = "../source.txt";
    std::string destinationFilePath = "../destination.txt";

    bool copySuccess = copyFileContent(sourceFilePath, destinationFilePath);

    if (copySuccess) {
        std::cout << "Copy was successful." << std::endl;
    } else {
        std::cout << "Copy was NOT successful." << std::endl;
    }

    return 0;
}

bool copyFileContent(const std::string &sourceFilePath, const std::string &destinationFilePath)
{
    std::ifstream sourceFile(sourceFilePath);
    std::ofstream destinationFile(destinationFilePath);
    std::string line;

    if (sourceFile.is_open() && destinationFile.is_open()) {
        while (getline(sourceFile, line)) {
            destinationFile << line << std::endl;
        }
        sourceFile.close();
        destinationFile.close();
        return true;
    } else {
        sourceFile.close();
        destinationFile.close();
        return false;
    }

}
