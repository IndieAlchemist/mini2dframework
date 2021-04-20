#include "GameObject.h"

GameObject::GameObject()
{
    gameObjects.push_back(this);
}

GameObject::~GameObject()
{

}

std::vector<GameObject*> GameObject::getGameObjects(){
    return gameObjects;
}

std::vector<GameObject*>  GameObject::gameObjects;
