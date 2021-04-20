#ifndef COMPONENT_H_INCLUDED
#define COMPONENT_H_INCLUDED

#include "GameObject.h"

class Component: public GameObject
{
public:
    Component(GameObject* gameObject);
    virtual void draw(SDL_Renderer *renderer);
    virtual void update();


protected:
    GameObject* gameObject;
};


#endif // COMPONENT_H_INCLUDED
