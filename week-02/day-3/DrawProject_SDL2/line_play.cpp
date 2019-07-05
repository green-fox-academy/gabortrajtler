#include "draw.h"

void draw(SDL_Renderer *gRenderer, const int &screenWidth, const int &screenHeight)
{
    int actualScreenWidth = screenWidth - 200; // make screen 600*600 instead of 800*600
    int spaceSize = 20;

    //choose color - purple
    SDL_SetRenderDrawColor(gRenderer, 204, 0, 204, 255);
    for (int i = spaceSize; i <= screenHeight; i+=spaceSize) {
        //draw lines
        SDL_RenderDrawLine(gRenderer, i-spaceSize, 0, actualScreenWidth, i);
    }

    //choose color - green
    SDL_SetRenderDrawColor(gRenderer, 102, 255, 102, 255);
    for (int i = 0; i <= screenHeight; i+=spaceSize) {
        //draw lines
        SDL_RenderDrawLine(gRenderer, 0, i, i+spaceSize, screenHeight);
    }

}