#include "draw.h"

void drawLineHorizontal(SDL_Renderer *gRenderer, const int &startX, const int &startY, const int &screenWidth,
                        const int &screenHeight)
{
    //draw line
    SDL_RenderDrawLine(gRenderer, startX, startY, startX + 50, startY);
}

void draw(SDL_Renderer *gRenderer, const int &screenWidth, const int &screenHeight)
{
    // Create a function that draws a single line and takes 2 parameters:
    // The x and y coordinates of the line's starting point
    // and draws a 50 long horizontal line from that point.
    // Draw at least 3 lines with that function using a loop.

    //choose color
    SDL_SetRenderDrawColor(gRenderer, 255, 0, 0, 255);
    //draw line
    int i = screenWidth / 2 - 25;
    for (int j = screenHeight / 2 - 100; j < screenHeight / 2 + 100; j += 15) {
        drawLineHorizontal(gRenderer, i, j, screenWidth, screenHeight);
    }

    SDL_Delay(100); // don't kill cpu please
}