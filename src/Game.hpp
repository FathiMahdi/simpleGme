#pragma once
#include <iostream>
#include <SDL2/SDL.h>

class Game
{
private:
    SDL_Window *window;
    SDL_Renderer *renderer;

public:
    Game();
    void update();
    void init(const char *title, int xpos, int ypos, int w, int h, bool fullscreen);
    void render();
    void eventHandler();
    void clean();
    ~Game();
};
