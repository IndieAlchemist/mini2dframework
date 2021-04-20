#ifndef COLLIDER_H_INCLUDED
#define COLLIDER_H_INCLUDED

#include<vector>

#include "Component.h"


class Collider:Component
{
public:
    virtual void draw(SDL_Renderer *renderer);
    virtual void update();

protected:
    virtual bool collide(Collider* other)=0;

private:
    static std::vector<Collider> colliders;
};

#endif // COLLIDER_H_INCLUDED
