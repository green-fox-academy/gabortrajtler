#include "draw.h"
#include "random.h"

void drawSquare(SDL_Renderer *gRenderer, const int &squareSize, const int &screenWidth,
                        const int &screenHeight)
{
    //choose color
    SDL_SetRenderDrawColor(gRenderer, getRandomColor255(), getRandomColor255(), getRandomColor255(), 255);
    //create a rectangle
    SDL_Rect simpleRect = { screenWidth /2 - squareSize /2, screenHeight /2 - squareSize /2, squareSize, squareSize};   // x, y, width, height
    //draw rectangles
    SDL_RenderDrawRect( gRenderer, &simpleRect );
    //SDL_RenderDrawRects( gRenderer, &simpleRect, 4 );
}

void draw(SDL_Renderer *gRenderer, const int &screenWidth, const int &screenHeight)
{
    // Centered boxes
    // create a function that draws one square and takes 1 parameters:
    // the square size
    // and draws a square of that size to the center of the canvas.
    // draw at least 3 squares with that function.
    // the squares should not be filled otherwise they will hide each other
    // avoid code duplication.

    //choose color
    SDL_SetRenderDrawColor(gRenderer, 255, 0, 0, 255);
    //draw rectangles
    for (int squareSize = 100; squareSize < screenHeight; squareSize += 10) {
        drawSquare(gRenderer, squareSize, screenWidth, screenHeight);
    }

    SDL_Delay(100); // don't kill cpu please
}