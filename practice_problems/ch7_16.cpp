#include <iostream>

enum Color
{
    //#define DEFINE_COLOR(color) eColor_##color,
    #include "color.h"
    //#undef DEFINE_COLOR
};

int main()
{


    return 0;
}