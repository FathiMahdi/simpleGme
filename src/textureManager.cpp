#include "textureManager.hpp"
#include <stdio.h>

SDL_Texture *textureManager::LoadTexture(const char *filename, SDL_Renderer *ren)
{
    SDL_Surface *tempSurface = IMG_Load(filename);
    SDL_Texture *tex = SDL_CreateTextureFromSurface(ren, tempSurface);
    SDL_FreeSurface(tempSurface);
    return tex;
}