#include "draw.h"
#include "random.h"

void drawSquare(SDL_Renderer *gRenderer, const int &startX, const int &startY, const int &screenWidth,
                        const int &screenHeight)
{
    //choose color
    SDL_SetRenderDrawColor(gRenderer, 0, getRandomColor75to175(), 0, 255);
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
    //draw square
    int i = screenWidth / 2 - 25;
    for (int j = screenHeight / 2 - 100; j < screenHeight / 2 + 100; j += 15) {
        drawSquare(gRenderer, i, j, screenWidth, screenHeight);
    }

    int i2 = screenWidth / 2 - 100;
    for (int j = screenHeight / 2 - 100; j < screenHeight / 2 + 100; j += 15) {
        drawSquare(gRenderer, i2, j, screenWidth, screenHeight);
    }

    int i3 = screenWidth / 2 + 75;
    for (int j = screenHeight / 2 - 100; j < screenHeight / 2 + 100; j += 15) {
        drawSquare(gRenderer, i3, j, screenWidth, screenHeight);
    }

    // draw land
    //choose color
    SDL_SetRenderDrawColor(gRenderer, 0, getRandomColor75to175(), 0, 255);
    //create a rectangle
    SDL_Rect fillRect = { 0, screenHeight / 2 + 100, screenWidth, screenHeight};   // x, y, width, height
    //draw rectangles
    SDL_RenderFillRect( gRenderer, &fillRect );

    SDL_Delay(100); // don't kill cpu please
}