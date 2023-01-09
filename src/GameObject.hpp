#pragma once
#include "Game.hpp"


class GameObject
{
private:

    SDL_Texture *objTexture;
    SDL_Rect srcRect, destRect;
    SDL_Renderer *renderer;

public:
    GameObject(const char *texturesheet, SDL_Renderer *ren, int x, int y);
    void Update();
    void Render();
    ~GameObject();
};
