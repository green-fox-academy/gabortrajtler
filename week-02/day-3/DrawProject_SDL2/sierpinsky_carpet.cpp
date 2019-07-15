#include "draw.h"
#include "random.h"

void fillRects(SDL_Renderer *gRenderer, int screenWidth, int screenHeight, int size, int depth)
{
    if (depth == 5) {
        return;
    }

    SDL_Rect fillRect = {screenWidth, screenHeight, size, size};

    //draw rectangles
    SDL_RenderFillRect(gRenderer, &fillRect);

    fillRects(gRenderer, screenWidth / 3, screenHeight / 3, size / 3, depth + 1); // upper left
}

void draw(SDL_Renderer *gRenderer, const int &screenWidth, const int &screenHeight)
{
    // Draw this:
    // https://github.com/green-fox-academy/teaching-materials/blob/master/project/fractals/sierpinski-carpet.png
    // TODO: finish the app.

    //Clear screen to black BG
    SDL_SetRenderDrawColor(gRenderer, 255, 255, 255, 255);  // white
    SDL_RenderClear(gRenderer);

    //create a rectangle
    SDL_SetRenderDrawColor(gRenderer, 0, 0, 0, 255);  // white
    fillRects(gRenderer, screenWidth, screenHeight, screenHeight, 0);   // width, height, depth


    //SDL_Delay(1000); // don't kill cpu please
}