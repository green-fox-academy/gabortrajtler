#include <iostream>

int main()
{
    // - Create a two dimensional array
    //   which can contain the different shades of specified colors
    // - In `colors[0]` store the shades of green:
    //   `"lime", "forest green", "olive", "pale green", "spring green"`
    // - In `colors[1]` store the shades of red:
    //   `"orange red", "red", "tomato"`
    // - In `colors[2]` store the shades of pink:
    //   `"orchid", "violet", "pink", "hot pink"`
    
    std::string colors[][5] = {
            {"lime", "forest green", "olive", "pale green", "spring green"},
            {"orange red", "red", "tomato"},
            {"orchid", "violet", "pink", "hot pink"}
    };

    int colorsSizeRow = sizeof(colors) / sizeof(colors[0]);
    int colorsSizeColumn = sizeof(colors[0]) / sizeof(colors[0][0]);

    for (int i = 0; i < colorsSizeRow; ++i) {
        for (int j = 0; j < colorsSizeColumn; ++j) {
            std::cout << colors[i][j] << ", ";
        }
        std::cout << std::endl;
    }

    return 0;
}