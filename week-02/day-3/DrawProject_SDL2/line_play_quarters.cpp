#include "draw.h"

void linePlay(SDL_Renderer *gRenderer, const int &spaceSize, int startX, int startY, int squareSize);
void linePlayColumn(SDL_Renderer *gRenderer, const int &spaceSize, int startX, int squareSize, const int &screenHeight);

void draw(SDL_Renderer *gRenderer, const int &screenWidth, const int &screenHeight)
{
    int spaceSize = 2;          // space between lines
    int lineNum = 8;            // no. of lines
    int squareSize = screenHeight / lineNum;

    // draw columns
    for (int startX = 0; startX <= screenWidth; startX += squareSize) {
        linePlayColumn(gRenderer, spaceSize, startX, squareSize, screenHeight);
    }
}

void linePlayColumn(SDL_Renderer *gRenderer, const int &spaceSize, int startX, int squareSize, const int &screenHeight)
{
    for (int i = 0; i <= screenHeight; i += squareSize) {
        linePlay(gRenderer, spaceSize, startX, i, squareSize);
    }
}

void linePlay(SDL_Renderer *gRenderer, const int &spaceSize,
              int startX, int startY, int squareSize)
{
    //choose color - purple
    SDL_SetRenderDrawColor(gRenderer, 204, 0, 204, 255);
    for (int i = 0; i <= squareSize; i += spaceSize) {
        //draw lines
        SDL_RenderDrawLine(gRenderer, startX + i, startY, startX + squareSize, startY + i);
    }

    //choose color - green
    SDL_SetRenderDrawColor(gRenderer, 102, 255, 102, 255);
    for (int i = 0; i <= squareSize; i+=spaceSize) {
        //draw lines
        SDL_RenderDrawLine(gRenderer, startX, startY+i, startX + i, startY + squareSize);
    }
}
