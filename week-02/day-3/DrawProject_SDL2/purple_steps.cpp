#include "draw.h"
#include "random.h"

void drawFilledRectangle(SDL_Renderer *gRenderer, const int &startX, const int &startY, const int &squareSize,
                         const int *fillColor, const int &screenWidth,
                         const int &screenHeight)
{
    //choose color
    SDL_SetRenderDrawColor(gRenderer, fillColor[0], fillColor[1], fillColor[2], 255);
    //create a rectangle
    SDL_Rect fillRect = { startX, startY, squareSize, squareSize};   // x, y, width, height
    //draw rectangles
    SDL_RenderFillRect( gRenderer, &fillRect );
}

void drawSimpleRectangle(SDL_Renderer *gRenderer, const int &startX, const int &startY, const int &squareSize,
                         const int *fillColor, const int &screenWidth,
                         const int &screenHeight)
{
    //choose color
    SDL_SetRenderDrawColor(gRenderer, fillColor[0], fillColor[1], fillColor[2], 255);
    //create a rectangle
    SDL_Rect simpleRect = { startX, startY, squareSize, squareSize};   // x, y, width, height
    //draw rectangles
    SDL_RenderDrawRect( gRenderer, &simpleRect );
}

void draw(SDL_Renderer *gRenderer, const int &screenWidth, const int &screenHeight)
{
    // Reproduce this:
    // [https://github.com/green-fox-academy/teaching-materials/blob/master/workshop/drawing/assets/r3.png]
    // Pay attention for the outlines as well

    int squareSizeFilled = 9;
    int squareSizeNotFilled = 10;
    int squareSizeSum = squareSizeNotFilled;
    int startX = 10;
    int startY = 10;

    int colorPurple[3] = { 177, 69, 243 };  // purple
    int colorBlack[3] = { 0, 0, 0 };  // black

    //draw rectangles
    for (int i = 10; i < screenHeight - screenHeight/3; i += squareSizeSum) {
        drawFilledRectangle(gRenderer, startX, startY, squareSizeFilled, colorPurple, screenWidth, screenHeight);
        drawSimpleRectangle(gRenderer, startX, startY, squareSizeNotFilled, colorBlack, screenWidth, screenHeight);
        startX += squareSizeSum;
        startY += squareSizeSum;
    }

    SDL_Delay(100); // don't kill cpu please
}