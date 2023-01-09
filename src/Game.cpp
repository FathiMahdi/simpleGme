#include "Game.hpp"
#include "GameObject.hpp"
#include <iostream>

GameObject *playerMain;

Game::Game()
{

}

Game::~Game()
{

}

void Game::init(const char *title, int xpos, int ypos, int w, int h, bool fullscreen)
{
    // IF INIT
    Uint32 flag;
    if (fullscreen)
    {
        flag = SDL_WINDOW_FULLSCREEN;
    }
    else
    {
        flag = 0;
    }
    if (SDL_INIT_EVERYTHING >= 0)
    {
        std::cout << "Successful initialization!!\n";
        Game::window = SDL_CreateWindow(title, xpos, ypos, w, h, flag);
        if (window)
        {
            std::cout << "Window created!!\n";
            Game::renderer = SDL_CreateRenderer(window, -1, 0);
        }
        if (renderer)
        {
            std::cout << "renderer initilized!!\n";
            Game::isRunning = true;

            playerMain = new GameObject("assets/mario_stand.png", Game::renderer, 0, 0);
        }
    }
    else
        std::cout << "Unsuccessful initialization!!\n";
}

void Game::render()
{
    SDL_RenderClear(Game::renderer);
    playerMain->Render();
    SDL_RenderPresent(Game::renderer);
}

void Game::update()
{
    playerMain->Update();
}

void Game::eventHandler()
{
    SDL_Event event;

    SDL_PollEvent(&event);

    switch (event.type)
    {
    case SDL_QUIT:
        Game::isRunning = false;
        break;
    default:
        break;
    }
}

void Game::clean()
{
    Game::isRunning = false;
    SDL_DestroyRenderer(Game::renderer);
    SDL_DestroyWindow(Game::window);
    SDL_Quit();
}
