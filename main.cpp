#include<SDL2/SDL.h>
#include<stdio.h>
#include<vector>

#include "Framework.h"
#include "Screen.h"


int Screen::width=800;
int Screen::height=650;

int main( int argc, char* args[] )
{
    Framework fw;

    fw.Init(Screen::GetWidth(),Screen::GetHeight());

    while(fw.IsGameRunning())
    {
        fw.ProcessInput();
        fw.Update();
        fw.Draw();
        SDL_Delay(1000 / 60);
    }

    return 0;
}
