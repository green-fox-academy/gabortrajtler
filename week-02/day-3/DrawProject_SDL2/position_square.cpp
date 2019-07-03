#include "draw.h"
#include "random.h"

void drawSquare(SDL_Renderer *gRenderer, const int &startX, const int &startY, const int &screenWidth,
                        const int &screenHeight)
{
    //choose color
    SDL_SetRenderDrawColor(gRenderer, getRandomColor255(), getRandomColor255(), getRandomColor255(), 255);
    //create a rectangle
    SDL_Rect fillRect = { startX, startY, 50, 50};   // x, y, width, height
    //draw rectangles
    SDL_RenderFillRect( gRenderer, &fillRect );
}

void draw(SDL_Renderer *gRenderer, const int &screenWidth, const int &screenHeight)
{
    // create a function that draws one square and takes 2 parameters:
    // the x and y coordinates of the square's top left corner
    // and draws a 50x50 square from that point.
    // draw at least 3 squares with that function.
    // avoid code duplication.

    //choose color
    SDL_SetRenderDrawColor(gRenderer, 255, 0, 0, 255);
    //draw line
    int i = screenWidth / 2 - 25;
    for (int j = screenHeight / 2 - 100; j < screenHeight / 2 + 100; j += 15) {
        drawSquare(gRenderer, i, j, screenWidth, screenHeight);
    }

    SDL_Delay(100); // don't kill cpu please
}