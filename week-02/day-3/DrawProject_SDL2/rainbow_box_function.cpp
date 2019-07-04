#include "draw.h"
#include "random.h"
#include <vector>

void drawSquare(SDL_Renderer *gRenderer, const int &squareSize, const int fillColor[3], const int &screenWidth,
                const int &screenHeight)
{
    //choose color
    SDL_SetRenderDrawColor(gRenderer, fillColor[0], fillColor[1], fillColor[2], 255);
    //create a rectangle
    SDL_Rect simpleRect = {screenWidth / 2 - squareSize / 2, screenHeight / 2 - squareSize / 2, squareSize,
                           squareSize};   // x, y, width, height
    //draw rectangles
    SDL_RenderDrawRect(gRenderer, &simpleRect);
    //SDL_RenderDrawRects( gRenderer, &simpleRect, 4 );
}

void draw(SDL_Renderer *gRenderer, const int &screenWidth, const int &screenHeight)
{
    // Rainbow boxes
    // Create a square drawing function that takes 2 parameters:
    // The square size, and the fill color,
    // and draws a square of that size and color to the center of the canvas.
    // Create a loop that fills the canvas with a rainbow of colored squares.

    int colorIterator = getRandomNumber(0,6);

    //draw rectangles
    for (int squareSize = 100; squareSize < screenHeight; squareSize += 10) {
        std::vector<std::vector<int>> fillColorChooser = {  // Violet, Indigo, Blue, Green, Yellow, Orange and Red
                {148, 0,   211},
                {75,  0,   130},
                {0,   0,   255},
                {0,   255, 0},
                {255, 255, 0},
                {255, 127, 0},
                {255, 0,   0}
        };

        int fillColor[3] = {fillColorChooser[colorIterator][0], fillColorChooser[colorIterator][1],
                            fillColorChooser[colorIterator][2]};

        drawSquare(gRenderer, squareSize, fillColor, screenWidth, screenHeight);

        if (colorIterator == fillColorChooser.size()-1) {
            colorIterator = 0;
        } else {
            colorIterator++;
        }
    }

    SDL_Delay(100); // don't kill cpu please
}