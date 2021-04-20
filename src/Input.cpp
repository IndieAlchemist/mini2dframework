#include "Input.h"

void Input::Init()
{
    player1_x=0;
    player1_y=0;
    player2_x=0;
    player2_y=0;
}

extern "C" int Input::P1InputX()
{
    return player1_x;
}
extern "C" int Input::P1InputY()
{
    return player1_y;
}
extern "C" int Input::P2InputX()
{
    return player2_x;
}
extern "C" int Input::P2InputY()
{
    return player2_y;
}

void Input::SetP1InputX(int value)
{
    player1_x=value;
}

void Input::SetP1InputY(int value)
{
    player1_y=value;
}

void Input::SetP2InputX(int value)
{
    player2_x=value;
}

void Input::SetP2InputY(int value)
{
    player2_y=value;
}

int Input::player1_x=0;
int Input::player1_y=0;
int Input::player2_x=0;
int Input::player2_y=0;


