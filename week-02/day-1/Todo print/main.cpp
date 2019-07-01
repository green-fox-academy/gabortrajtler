#include <iostream>
#include <string>

int main(int argc, char* args[])
{
    std::string todoText = " - Buy milk\n";
    // Add "My todo:" to the beginning of the todoText
    // Add " - Download games" to the end of the todoText
    // Add " - Diablo" to the end of the todoText but with indentation

    // Expected outpt:

    // My todo:
    //  - Buy milk
    //  - Download games
    //      - Diablo

    todoText.insert(0, "My todo:\n");
    todoText.insert(todoText.size(), " - Download games\n");
    todoText.insert(todoText.size(), "\t - Diablo\n");          // I used tab as indentation

    std::cout << todoText << std::endl;

    return 0;
}