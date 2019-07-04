#include "draw.h"
#include "random.h"

void draw(SDL_Renderer *gRenderer, const int &screenWidth, const int &screenHeight)
{
    // Draw the night sky:
    //  - The background should be black
    //  - The stars can be small squares
    //  - The stars should have random positions on the canvas
    //  - The stars should have random color (some shade of grey)
    //
    // You might have to make modifications somewhere else to create a black background ;)

    //Clear screen to black BG
    SDL_SetRenderDrawColor(gRenderer, 0, 0, 0, 255);  // black
    SDL_RenderClear(gRenderer);

    for (int i = 0; i < 10; ++i) {
        int staticColor = getRandomNumber(100, 255);
        //choose color
        SDL_SetRenderDrawColor(gRenderer, staticColor, staticColor, staticColor, 255);  // shade of grey
        //SDL_SetRenderDrawColor(gRenderer, 255, 255, getRandomColor75to175(), 255);  // shade of yellow
        //create a rectangle
        SDL_Rect fillRect = { getRandomNumber(0, 800), getRandomNumber(0, 600), 5, 5};   // x, y, width, height
        //draw rectangles
        SDL_RenderFillRect( gRenderer, &fillRect );
    }


    SDL_Delay(1000); // don't kill cpu please
}