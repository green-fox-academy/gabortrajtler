#include <iostream>
#include <string>
#include <Windows.h>
#include <cstdio>

int main() {
    // Write a program that prints a few details to the terminal window about you
    // It should print each detail to a new line.
    //  - Your name
    //  - Your age
    //  - Your height in meters (as a decimal fraction)
    //
    //  Example output:
    //  John Doe
    //  31
    //  1.87

    // Solution: It's not trivial to have utf-8 on win terminal. Found solution at
    // https://stackoverflow.com/questions/45575863/how-to-print-utf-8-strings-to-stdcout-on-windows

    // Set console code page to UTF-8 so console known how to interpret string data
    SetConsoleOutputCP(CP_UTF8);

    // Enable buffering to prevent IDE from chopping up UTF-8 byte sequences
    setvbuf(stdout, nullptr, _IOFBF, 1000);

    std::string name = u8"Gábor Trajtler\n";
    std::cout << name;
    std::cout << 34 << std::endl;
    std::cout << 1.83 << std::endl;

    return 0;
}
