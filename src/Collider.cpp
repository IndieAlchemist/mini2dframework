#include "Collider.h"

void Collider::update(){

    gameObject->update();
}

void Collider::draw(SDL_Renderer* renderer)
{
    gameObject->draw(renderer);
}
