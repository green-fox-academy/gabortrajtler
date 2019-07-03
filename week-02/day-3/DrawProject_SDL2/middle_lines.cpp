#include "draw.h"

void draw(SDL_Renderer *gRenderer, const int &screenWidth, const int &screenHeight)
{
    // draw a red horizontal line to the canvas' middle.
    //choose color
    SDL_SetRenderDrawColor(gRenderer, 255, 0, 0, 255);
    //draw line
    SDL_RenderDrawLine(gRenderer, 0, screenHeight/2, screenWidth, screenHeight/2);

    // draw a green vertical line to the canvas' middle.
    //choose color
    SDL_SetRenderDrawColor(gRenderer, 0, 255, 0, 255);
    //draw line
    SDL_RenderDrawLine(gRenderer, screenWidth/2, 0, screenWidth/2, screenHeight);
}