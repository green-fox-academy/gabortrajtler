#include "draw.h"

void drawLineToPoint(SDL_Renderer *gRenderer, const int &startX, const int &startY, const int &screenWidth,
                     const int &screenHeight) {
    //draw line
    SDL_RenderDrawLine(gRenderer, startX, startY, screenWidth/2, screenHeight/2);
}

void draw(SDL_Renderer *gRenderer, const int &screenWidth, const int &screenHeight)
{
    // Create a function that draws a single line and takes 2 parameters:
    // The x and y coordinates of the line's starting point
    // and draws a line from that point to the center of the canvas.
    // Fill the canvas with lines from the edges, every 20 px, to the center.

    //choose color
    SDL_SetRenderDrawColor(gRenderer, 255, 0, 0, 255);
    //draw line
    for (int i = 0; i <= screenWidth; i+=20) {       // ~800/20*2 = 80 lines (cycles)
        drawLineToPoint(gRenderer, i, 0, screenWidth, screenHeight);
        drawLineToPoint(gRenderer, i, screenHeight, screenWidth, screenHeight);
    }

    for (int j = 0; j <= screenHeight; j+=20) {      // ~600/20*2 = 60 lines (cycles), SUM ~140 lines
        drawLineToPoint(gRenderer, 0, j, screenWidth, screenHeight);
        drawLineToPoint(gRenderer, screenWidth, j, screenWidth, screenHeight);
    }

    SDL_Delay(100); // don't kill cpu please
}