#ifndef FRAMEWORK_H
#define FRAMEWORK_H

#include<SDL2/SDL.h>
#include "Input.h"
#include "GameObject.h"


class Framework
{
public:
    Framework();
    ~Framework();
    void Init(int width, int height);

    void Draw();
    void ProcessInput();
    void Update();
    bool IsGameRunning();
    void Terminate();

protected:

private:
    int width;
    int height;
    bool isRunning;
    SDL_Renderer *renderer=NULL;
    SDL_Window *window=NULL;
};

#endif // FRAMEWORK_H
