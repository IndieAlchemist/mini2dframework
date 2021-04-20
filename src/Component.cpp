#include "Component.h"

Component::Component(GameObject* gameObject){
    this->gameObject=gameObject;
}

void Component::update(){
    gameObject->update();
}

void Component::draw(SDL_Renderer* renderer)
{
    gameObject->draw(renderer);
}

