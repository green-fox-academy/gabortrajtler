#include "draw.h"
#include <vector>

void drawLineToPoint(SDL_Renderer *gRenderer, std::vector<std::vector<int>> &coordinates,
                     const int &screenWidth, const int &screenHeight)
{
    for (int i = 0; i < coordinates.size()-1; ++i) {          // row = 0,1,...
        //draw line
        SDL_RenderDrawLine(gRenderer, coordinates[i][0], coordinates[i][1], coordinates[i+1][0], coordinates[i+1][1]);
    }
}

void draw(SDL_Renderer *gRenderer, const int &screenWidth, const int &screenHeight)
{
    // Create a function that takes 1 parameter:
    // An array of {x, y} points
    // and connects them with green lines.
    // Connect these to get a box: {{10, 10}, {290,  10}, {290, 290}, {10, 290}}
    // Connect these: {{50, 100}, {70, 70}, {80, 90}, {90, 90}, {100, 70}, {120, 100}, {85, 130}, {50, 100}}

    //choose color
    SDL_SetRenderDrawColor(gRenderer, 0, 150, 0, 255); // green

    std::vector<std::vector<int>> coordinatesBox = {
            {10,  10},
            {290, 10},
            {290, 290},
            {10,  290},
            {10,  10},
    };

    std::vector<std::vector<int>> coordinatesSomeThing = {
            {50,  100},
            {70,  70},
            {80,  90},
            {90,  90},
            {100, 70},
            {120, 100},
            {85,  130},
            {50,  100}
    };

    //draw vectors
    drawLineToPoint(gRenderer, coordinatesSomeThing, screenWidth, screenHeight);

    SDL_Delay(100); // don't kill cpu please
}