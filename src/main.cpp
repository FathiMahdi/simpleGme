#include <iostream>
#include "Game.hpp"

int main(int argv, char *argc[])
{
    const int FPS = 60;
    const int frameDelay = 1000 / FPS;
    Uint32 framestart;
    int frameTime;

    Game *newGame = new Game;
    newGame->init("Game", 255, 255, 800, 600, 0);

    // game loop
    while (newGame->isRunning)
    {
        framestart = SDL_GetTicks();
        newGame->eventHandler();
        newGame->update();
        newGame->render();
        frameTime = SDL_GetTicks() - framestart;

        if (frameDelay > frameTime)
        {
            SDL_Delay(frameDelay - frameTime);
        }
    }
    newGame->clean();
    return 0;
}