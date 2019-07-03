#include "draw.h"
#include "random.h"

void draw(SDL_Renderer *gRenderer, const int &screenWidth, const int &screenHeight)
{
    // Draw a box that has different colored lines on each edge.
    // The center of the box should align with the center of the screen.

    int boxWidth = 235;
    int boxHeight = 145;

    //choose color
    initRandom();
    SDL_SetRenderDrawColor(gRenderer, getRandomColor(), getRandomColor(), getRandomColor(), 255);

    //draw line
    SDL_RenderDrawLine(gRenderer, screenWidth / 2 - boxWidth / 2, screenHeight / 2 - boxHeight / 2,
            screenWidth / 2 + boxWidth / 2, screenHeight / 2 - boxHeight / 2);
    SDL_SetRenderDrawColor(gRenderer, getRandomColor(), getRandomColor(), getRandomColor(), 255);
    SDL_RenderDrawLine(gRenderer, screenWidth / 2 + boxWidth / 2, screenHeight / 2 - boxHeight / 2,
                       screenWidth / 2 + boxWidth / 2, screenHeight / 2 + boxHeight / 2);
    SDL_SetRenderDrawColor(gRenderer, getRandomColor(), getRandomColor(), getRandomColor(), 255);
    SDL_RenderDrawLine(gRenderer, screenWidth / 2 + boxWidth / 2, screenHeight / 2 + boxHeight / 2,
                       screenWidth / 2 - boxWidth / 2, screenHeight / 2 + boxHeight / 2);
    SDL_SetRenderDrawColor(gRenderer, getRandomColor(), getRandomColor(), getRandomColor(), 255);
    SDL_RenderDrawLine(gRenderer, screenWidth / 2 - boxWidth / 2, screenHeight / 2 + boxHeight / 2,
                       screenWidth / 2 - boxWidth / 2, screenHeight / 2 - boxHeight / 2);
    SDL_Delay(100);  // change color after 100 ms

}