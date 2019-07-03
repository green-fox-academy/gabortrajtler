#include "draw.h"
#include "random.h"

void draw(SDL_Renderer *gRenderer, const int &screenWidth, const int &screenHeight)
{
    // Exercise ("Fill with rectangles"):
    // draw four different size and color rectangles.
    // avoid code duplication.

    // Draw a green 100x100 square to the canvas' center.
    initRandom();
    for (int i = 0; i < 4; ++i) {
        //choose color
        SDL_SetRenderDrawColor(gRenderer, getRandomColor255(), getRandomColor255(), getRandomColor255(), 255);
        //create a rectangle
        SDL_Rect fillRect = { getRandomNumber500(), getRandomNumber500(), getRandomNumber500(), getRandomNumber500()};   // x, y, width, height
        //draw rectangles
        SDL_RenderFillRect( gRenderer, &fillRect );
    }
}