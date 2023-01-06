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
            Game::isRunning = true;
            SDL_Surface *tempSurface = IMG_Load("mario_stand.png");
            Game::playerTexture = SDL_CreateTextureFromSurface(Game::renderer, tempSurface);
            SDL_FreeSurface(tempSurface);
        }
    }
    else
        std::cout << "Unsuccessful initialization!!\n";
}

void Game::render()
{

    SDL_RenderClear(Game::renderer);
    SDL_RenderCopy(Game::renderer, Game::playerTexture, NULL, NULL);
    SDL_RenderPresent(Game::renderer);
}

void Game::update()
{
}

void Game::eventHandler()
{
}

void Game::clean()
{
    Game::isRunning = false;
    SDL_DestroyRenderer(Game::renderer);
    SDL_DestroyWindow(Game::window);
    SDL_Quit();
}