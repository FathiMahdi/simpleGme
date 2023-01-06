#include <iostream>
#include "Game.hpp"

int main(int argv, char *argc[])
{

    Game *newGame = new Game;
    newGame->init("Game", 255, 255, 800, 600, 0);
    newGame->render();
    newGame->clean();

    return 0;
}