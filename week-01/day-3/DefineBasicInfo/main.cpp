#include <iostream>

int main() {
    // Define several things as a variable then print their values
    // Your name as a string
    // Your age as an integer
    // Your height in meters as a double
    // Whether you are married or not as a boolean

    // Solution: Got the output code in one line for fun. For UTF-8 support, check the IntroduceYourself project

    std::string name = "Gabor Trajtler";
    int age = 34;
    double height = 1.83;
    bool married = true;

    std::cout << "Khm, so, I'm " << name << ". I'm " << age << " years old, "
    , married ? std::cout << "married." : std::cout << "not married", std::cout << " I'm " << height << " meters long.\n";

    return 0;
}