#include <SDL_ttf.h>
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







    if(TTF_Init()==-1) {
        // Err. handling

        SDL_SetRenderDrawColor(gRenderer, 200, 0, 0, 255);
        SDL_RenderClear(gRenderer);

        TTF_Quit();
    } else if(TTF_Init()==0) {
        for (int i = 0; i < 10; ++i) {
            int staticColor = getRandomNumber(100, 255);
            //choose color
            SDL_SetRenderDrawColor(gRenderer, staticColor, staticColor, staticColor, 255);  // shade of grey
            //SDL_SetRenderDrawColor(gRenderer, 255, 255, getRandomColor75to175(), 255);  // shade of yellow
            //create a rectangle
            SDL_Rect fillRect = {getRandomNumber(0, 800), getRandomNumber(0, 600), 5, 5};   // x, y, width, height
            //draw rectangles
            SDL_RenderFillRect(gRenderer, &fillRect);
        }

        TTF_Font *Gabriola = TTF_OpenFont("../Gabriola.ttf", 24); //this opens a font style and sets a size

        SDL_Color White2 = {100, 100,
                            100};  // this is the color in rgb format, maxing out all would give you the color white, and it will be your text's color

        SDL_Color White = {255, 255,
                           255};  // this is the color in rgb format, maxing out all would give you the color white, and it will be your text's color

        SDL_Surface *surfaceMessage = TTF_RenderText_Solid(Gabriola, "Bogi",
                                                           White2); // as TTF_RenderText_Solid could only be used on SDL_Surface then you have to create the surface first

        SDL_Texture *Message = SDL_CreateTextureFromSurface(gRenderer,
                                                            surfaceMessage); //now you can convert it into a texture

        SDL_Rect Message_rect; //create a rect
        Message_rect.x = 202;  //controls the rect's x coordinate
        Message_rect.y = 202; // controls the rect's y coordinte
        Message_rect.w = 100; // controls the width of the rect
        Message_rect.h = 100; // controls the height of the rect

        SDL_RenderCopy(gRenderer, Message, nullptr,
                       &Message_rect); //you put the renderer's name first, the Message, the crop size(you can ignore this if you don't want to dabble with cropping), and the rect which is the size and coordinate of your texture


        TTF_Font *Emoji = TTF_OpenFont("../seguiemj.ttf", 24); //this opens a font style and sets a size


        SDL_Surface *surfaceMessage2 = TTF_RenderText_Solid(Gabriola, "Bogi",
                                                           White); // as TTF_RenderText_Solid could only be used on SDL_Surface then you have to create the surface first

        SDL_Texture *Message2 = SDL_CreateTextureFromSurface(gRenderer,
                                                            surfaceMessage2); //now you can convert it into a texture

        SDL_Rect Message2_rect; //create a rect
        Message2_rect.x = 200;  //controls the rect's x coordinate
        Message2_rect.y = 200; // controls the rect's y coordinte
        Message2_rect.w = 100; // controls the width of the rect
        Message2_rect.h = 100; // controls the height of the rect

        //Mind you that (0,0) is on the top left of the window/screen, think a rect as the text's box, that way it would be very simple to understance

        //Now since it's a texture, you have to put RenderCopy in your game loop area, the area where the whole code executes

        SDL_RenderCopy(gRenderer, Message2, nullptr,
                       &Message2_rect); //you put the renderer's name first, the Message, the crop size(you can ignore this if you don't want to dabble with cropping), and the rect which is the size and coordinate of your texture

        //Don't forget too free your surface and texture
        TTF_Quit();
    }




    SDL_Delay(1000); // don't kill cpu please
}