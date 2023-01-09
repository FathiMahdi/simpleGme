#pragma once
#include "Game.hpp"

class textureManager
{
private:
public:
    static SDL_Texture *LoadTexture(const char *filename, SDL_Renderer *ren);
};
