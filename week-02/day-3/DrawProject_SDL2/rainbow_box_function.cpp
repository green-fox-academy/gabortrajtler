#include "draw.h"
#include "random.h"

void drawSquare(SDL_Renderer *gRenderer, const int &squareSize, const int fillColor[3], const int &screenWidth,
                        const int &screenHeight)
{
    //choose color
    SDL_SetRenderDrawColor(gRenderer, fillColor[0], fillColor[1], fillColor[2], 255);
    //create a rectangle
    SDL_Rect simpleRect = { screenWidth /2 - squareSize /2, screenHeight /2 - squareSize /2, squareSize, squareSize};   // x, y, width, height
    //draw rectangles
    SDL_RenderDrawRect( gRenderer, &simpleRect );
    //SDL_RenderDrawRects( gRenderer, &simpleRect, 4 );
}

void draw(SDL_Renderer *gRenderer, const int &screenWidth, const int &screenHeight)
{
    // Rainbow boxes
    // Create a square drawing function that takes 2 parameters:
    // The square size, and the fill color,
    // and draws a square of that size and color to the center of the canvas.
    // Create a loop that fills the canvas with a rainbow of colored squares.

    //draw rectangles
    for (int squareSize = 100; squareSize < screenHeight; squareSize += 10) {
        //choose color
        const int fillColor[3] = { getRandomColor255(), getRandomColor255(), getRandomColor255() };
        drawSquare(gRenderer, squareSize, fillColor, screenWidth, screenHeight);
    }

    SDL_Delay(100); // don't kill cpu please
}