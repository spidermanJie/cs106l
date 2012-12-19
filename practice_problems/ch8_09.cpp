#include <algorithm>
#include <iostream>
#include <cstring>

int CountFrequency(const char *str, const char c)
{
    return std::count(str, str + strlen(str), c);
}

int main()
{
    std::cout << CountFrequency("this is a test message", 'e') << std::endl;
    return 0;
}
