#include "draw.h"

void draw(SDL_Renderer *gRenderer, const int &screenWidth, const int &screenHeight)
{
    //choose color
    SDL_SetRenderDrawColor(gRenderer, 255, 0, 0, 255);
    //draw line
    SDL_RenderDrawLine(gRenderer, 300, 200, 200, 200);

    //choose color
    SDL_SetRenderDrawColor(gRenderer, 0xFF, 0x00, 0x00, 0xFF);
    //create a rectangle
    SDL_Rect fillRect = { 100, 100, 20, 50};
    //draw rectangle
    SDL_RenderFillRect( gRenderer, &fillRect );
}