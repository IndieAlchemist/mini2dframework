#ifndef INPUT_H
#define INPUT_H

#include "Framework.h"

class Input
{
public:
    friend class Framework;

    static void Init();

    static int P1InputX();
    static int P1InputY();
    static int P2InputX();
    static int P2InputY();

protected:

private:
    static int player1_x;
    static int player1_y;
    static int player2_x;
    static int player2_y;

    static void SetP1InputX(int value);
    static void SetP1InputY(int value);
    static void SetP2InputX(int value);
    static void SetP2InputY(int value);
};

#endif // INPUT_H
