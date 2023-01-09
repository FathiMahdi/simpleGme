#include "GameObject.hpp"
#include "textureManager.hpp"

GameObject::GameObject(const char *texturesheet, SDL_Renderer *ren, int x, int y)
{
    GameObject::renderer = ren;
    GameObject::objTexture = textureManager::LoadTexture(texturesheet, ren);
}

void GameObject::Render()
{
    SDL_RenderCopy(GameObject::renderer, GameObject::objTexture, NULL, &destRect);
}

void GameObject::Update()
{
    srcRect.x = 0;
    srcRect.y = 0;
    destRect.w = 64;
    destRect.h = 64;

    // destRect.x = 255;
    // destRect.y = 255;
    //destRect.x = 64;
    //destRect.w = 64;
}

GameObject::~GameObject()
{

}