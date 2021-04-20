#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include<SDL2/SDL.h>
#include<vector>

class GameObject
{
public:
    GameObject();
    virtual ~GameObject();
    int x;
    int y;
    virtual void draw(SDL_Renderer *renderer)=0;
    virtual void update()=0;

    static std::vector<GameObject*> getGameObjects();

private:
    static std::vector<GameObject*> gameObjects;
};

#endif
