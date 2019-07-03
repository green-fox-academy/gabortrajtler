#include "draw.h"

void draw(SDL_Renderer *gRenderer, const int &screenWidth, const int &screenHeight)
{
    // Draw a green 100x100 square to the canvas' center.
    //choose color
    SDL_SetRenderDrawColor(gRenderer, 0, 100, 0, 255);
    //create a rectangle (now square)
    SDL_Rect fillRect = { screenWidth/2-50, screenHeight/2-50, 100, 100};   // x, y, width, height
    //draw rectangle
    SDL_RenderFillRect( gRenderer, &fillRect );
}