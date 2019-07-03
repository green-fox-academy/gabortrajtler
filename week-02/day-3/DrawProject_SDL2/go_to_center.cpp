#include "draw.h"

void drawLineToCenter(SDL_Renderer *gRenderer, const int &startX, const int &startY, const int &screenWidth,
                      const int &screenHeight) {
    //draw line
    SDL_RenderDrawLine(gRenderer, startX, startY, screenWidth/2, screenHeight/2);
}

void draw(SDL_Renderer *gRenderer, const int &screenWidth, const int &screenHeight)
{
    // Create a function that draws a single line and takes 2 parameters:
    // The x and y coordinates of the line's starting point
    // and draws a line from that point to the center of the canvas.
    // Draw at least 3 lines with that function using a loop.

    //choose color
    SDL_SetRenderDrawColor(gRenderer, 255, 0, 0, 255);
    //draw line
    for (int i = 0; i < screenWidth; i+=15) {       // 800/15 = 53 cycle
        for (int j = 0; j < screenHeight; j+=15) {  // 600/15 = 40 cycle    SUM 53*40 = 2120 line / 100 ms
            drawLineToCenter(gRenderer, i, j, screenWidth, screenHeight);
        }
    }
    SDL_Delay(100); // don't kill cpu please
}