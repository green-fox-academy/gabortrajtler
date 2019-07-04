#include "draw.h"
#include "random.h"

void drawDiagonal(SDL_Renderer *gRenderer, int startX, int startY, const int &squareSizeSum, const int fillColor[],
                  const int &screenWidth, const int &screenHeight);

void drawFilledRectangle(SDL_Renderer *gRenderer, const int &startX, const int &startY, const int &squareSize,
                         const int *fillColor, const int &screenWidth,
                         const int &screenHeight);

void drawSimpleRectangle(SDL_Renderer *gRenderer, const int &startX, const int &startY, const int &squareSize,
                         const int *fillColor, const int &screenWidth,
                         const int &screenHeight);

void draw(SDL_Renderer *gRenderer, const int &screenWidth, const int &screenHeight)
{
    // Fill the canvas with a checkerboard pattern.

    int startX = 0;
    int startY = 0;
    int squareSizeSum = 100;

    int colorPurple[3] = {177, 69, 243};
    int colorBlack[3] = {0, 0, 0};
    int colorWhite[3] = {255, 255, 255};

    // set background to black
    SDL_SetRenderDrawColor(gRenderer, 0, 0, 0, 255);
    SDL_RenderClear(gRenderer);

    // draw white rectangles
    for (int height = startY; height < screenHeight; height += squareSizeSum * 2) {
        drawDiagonal(gRenderer, startX, height, squareSizeSum, colorWhite, screenWidth, screenHeight);
    }
    for (int width = startX; width < screenWidth; width += squareSizeSum * 2) {
        drawDiagonal(gRenderer, width, startY, squareSizeSum, colorWhite, screenWidth, screenHeight);
    }

    SDL_Delay(100); // don't kill cpu please
}

void drawFilledRectangle(SDL_Renderer *gRenderer, const int &startX, const int &startY, const int &squareSize,
                         const int *fillColor, const int &screenWidth,
                         const int &screenHeight)
{
    //choose color
    SDL_SetRenderDrawColor(gRenderer, fillColor[0], fillColor[1], fillColor[2], 255);
    //create a rectangle
    SDL_Rect fillRect = {startX, startY, squareSize, squareSize};   // x, y, width, height
    //draw rectangles
    SDL_RenderFillRect(gRenderer, &fillRect);
}

void drawSimpleRectangle(SDL_Renderer *gRenderer, const int &startX, const int &startY, const int &squareSize,
                         const int *fillColor, const int &screenWidth,
                         const int &screenHeight)
{
    //choose color
    SDL_SetRenderDrawColor(gRenderer, fillColor[0], fillColor[1], fillColor[2], 255);
    //create a rectangle
    SDL_Rect simpleRect = {startX, startY, squareSize, squareSize};   // x, y, width, height
    //draw rectangles
    SDL_RenderDrawRect(gRenderer, &simpleRect);
}

void drawDiagonal(SDL_Renderer *gRenderer, int startX, int startY, const int &squareSizeSum, const int fillColor[],
                  const int &screenWidth, const int &screenHeight)
{
    int squareSizeFilled = squareSizeSum - 1;
    int squareSizeNotFilled = squareSizeSum;

    //draw rectangles - in a diagonal line
    for (int i = 10; i <= screenHeight; i += squareSizeSum) {
        drawFilledRectangle(gRenderer, startX, startY, squareSizeFilled, fillColor, screenWidth, screenHeight);
        drawSimpleRectangle(gRenderer, startX, startY, squareSizeNotFilled, fillColor, screenWidth, screenHeight);
        startX += squareSizeSum;
        startY += squareSizeSum;
    }
}
