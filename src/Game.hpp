#pragma once
#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

class Game
{
private:
    SDL_Window *window;
    SDL_Renderer *renderer;
    SDL_Texture *playerTexture;
  

public:
    bool isRunning;
    Game();
    void update();
    bool running();
    void init(const char *title, int xpos, int ypos, int w, int h, bool fullscreen);
    void render();
    void eventHandler();
    void clean();
    ~Game();
};
