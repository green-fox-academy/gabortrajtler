#include "draw.h"

void draw(SDL_Renderer *gRenderer, const int &screenWidth, const int &screenHeight)
{
    // Draw the canvas' diagonals.
    // If it starts from the upper-left corner it should be green, otherwise it should be red.

    //choose color
    SDL_SetRenderDrawColor(gRenderer, 0, 255, 0, 255);
    //draw line
    SDL_RenderDrawLine(gRenderer, 0, 0, 800, 600);

    //choose color
    SDL_SetRenderDrawColor(gRenderer, 255, 0, 0, 255);
    //draw line
    SDL_RenderDrawLine(gRenderer, 0, 600, 800, 0);
}