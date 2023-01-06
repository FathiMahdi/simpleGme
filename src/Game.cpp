#include "Game.hpp"
#include <iostream>

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
        }
    }
    else
        std::cout << "Unsuccessful initialization!!\n";
}

void Game::render()
{
    SDL_SetRenderDrawColor(Game::renderer, 255, 0, 0, 255);
    SDL_RenderClear(Game::renderer);
    SDL_RenderPresent(Game::renderer);
    SDL_Delay(5000);
}

void Game::update()
{
}

void Game::eventHandler()
{
}

void Game::clean()
{
    
    SDL_DestroyRenderer(Game::renderer);
    SDL_DestroyWindow(Game::window);
    SDL_Quit();
}