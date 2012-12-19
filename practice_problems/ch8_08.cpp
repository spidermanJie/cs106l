#include <cstring>
#include <iostream>

int CountFrequencyA(const char *str, char c)
{
    int count = 0;
    int len = strlen(str);
    for (int k = 0; k < len; ++k) {
        if (str[k] == c)
            count++;
    }
    
    return count;
}

int CountFrequencyB(const char *str, char c)
{
    int count = 0;
    while (*str) {
        if (*str == c)
            count++;
        str++;
    }
    
    return count;
}

int main()
{
    const char *str = "This is really something";
    std::cout << CountFrequencyA(str, 'i')  << ", " << CountFrequencyB(str, 'l') << std::endl;

    return 0;
}
