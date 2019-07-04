#include "draw.h"
#include "random.h"

void drawFilledRectangle(SDL_Renderer *gRenderer, const int &startX, const int &startY, const int &squareSize,
                         const int fillColor[], const int &screenWidth,
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
                         const int fillColor[], const int &screenWidth,
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
    // [https://github.com/green-fox-academy/teaching-materials/blob/master/workshop/drawing/assets/r4.png]
    // Pay attention for the outlines as well

    float squareSize = 10;
    int startX = 10;
    int startY = 10;
    float multiplier = 1.5;

    int colorPurple[3] = { 177, 69, 243 };  // purple
    int colorBlack[3] = { 0, 0, 0 };  // black

    //draw rectangles
    for (int i = 10; i < screenHeight; i += static_cast<int>(squareSize)) {
        drawFilledRectangle(gRenderer, startX, startY, static_cast<int>(squareSize), colorPurple, screenWidth, screenHeight);
        drawSimpleRectangle(gRenderer, startX, startY, static_cast<int>(squareSize), colorBlack, screenWidth, screenHeight);
        startX += static_cast<int>(squareSize)-1;
        startY += static_cast<int>(squareSize)-1;
        squareSize *= multiplier;
    }

    SDL_Delay(100); // don't kill cpu please
}