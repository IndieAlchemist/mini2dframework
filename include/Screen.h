#ifndef SCREEN_H_INCLUDED
#define SCREEN_H_INCLUDED

class Screen
{
public:
    extern "C" static int GetWidth()
    {
        return width;
    }

    extern "C" static int GetHeight()
    {
        return height;
    }
    extern "C" static void SetResolution(int w,int h)
    {
        width=w;
        height=h;
    }

private:
    static int width;
    static int height;
};


#endif // SCREEN_H_INCLUDED
