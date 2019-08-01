#include <iostream>
#include <fstream>

int main()
{
    // Create a program that decrypts the file called "duplicated-chars.txt",
    // and pritns the decrypred text to the terminal window.

    // read by getline() and delete/print every two chars.
    std::ifstream doubledFile("../duplicated-chars.txt");

    std::string line;
    if (doubledFile.is_open()) {
        while (getline(doubledFile, line)) {
            for (int i = 0; i < line.size(); ++i) {
                if (i%2 == 0) {
                    std::cout << line[i];
                }
            }
            std::cout << std::endl;
        }
        doubledFile.close();
    } else {
        std::cout << "File does not exist!";
    }

    return 0;
}