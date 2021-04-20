#include "Framework.h"

Framework::Framework()
{
    isRunning=true;
}

Framework::~Framework()
{
    Terminate();
}

extern "C" void Framework::Init(int width, int height)
{
    this->width=width;
    this->height=height;
    SDL_Init(SDL_INIT_VIDEO);
    SDL_CreateWindowAndRenderer(width, height,0,&window,&renderer);
    Input::Init();
}

void Framework::Terminate()
{
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
}

extern "C" void Framework::Draw()
{
    SDL_SetRenderDrawColor(renderer,0,0,0,0);
    SDL_RenderClear(renderer);

    for(size_t i=0; i<GameObject::getGameObjects().size(); i++)
    {
        GameObject* g=GameObject::getGameObjects()[i];
        g->draw(renderer);
    }

    SDL_RenderPresent(renderer);

}
extern "C" void Framework::ProcessInput()
{
    SDL_Event e;
    while (SDL_PollEvent(&e) != 0)
    {
        switch(e.type)
        {

        case SDL_QUIT:
            isRunning = false;
            break;

        case SDL_KEYDOWN:
            switch(e.key.keysym.scancode)
            {
            case SDL_SCANCODE_W:
                Input::SetP1InputY(-1);
                break;
            case SDL_SCANCODE_UP:
                Input::SetP2InputY(-1);
                break;
            case SDL_SCANCODE_S:
                Input::SetP1InputY(1);
                break;
            case SDL_SCANCODE_DOWN:
                Input::SetP2InputY(1);
                break;
            default:
                break;
            }
            break;
        case SDL_KEYUP:
            switch(e.key.keysym.scancode)
            {
            case SDL_SCANCODE_W:
                Input::SetP1InputY(0);
                break;
            case SDL_SCANCODE_UP:
                Input::SetP2InputY(0);
                break;
            case SDL_SCANCODE_S:
                Input::SetP1InputY(0);
                break;
            case SDL_SCANCODE_DOWN:
                Input::SetP2InputY(0);
                break;
            default:
                break;
            }
            break;
        }
    }
}
extern "C" void Framework::Update()
{
    for(size_t i=0; i<GameObject::getGameObjects().size(); i++)
    {
        GameObject* g=GameObject::getGameObjects()[i];
        g->update();
    }
}
extern "C" bool Framework::IsGameRunning()
{
    return isRunning;
}



