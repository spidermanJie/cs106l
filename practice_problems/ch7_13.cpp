#include <iostream>

enum Color
{
    #define DEFINE_COLOR(color) color,
    #include "color.h"
    #undef DEFINE_COLOR
};

std::string ColorToString(Color c)
{
    switch (c)
    {
        #define DEFINE_COLOR(color) case color: return #color;
        #include "color.h"
        #undef DEFINE_COLOR
        
        default: return "<unknown>";
    }
}
int main()
{
    std::cout << ColorToString(Red) << std::endl;
    
    std::cout << ColorToString(NOT_A_COLOR) << std::endl;

    return 0;
}