#include <cstdio>
#include <cstring>
#include <cctype>

void Exaggerate(char *str)
{
    while (*str) {
        if (isdigit(*str) && *str != '9') *str += 1;
        str++;
    }
}

int main()
{
    char *str = new char[256];
    strcpy(str, "I worked 90 hours and drove 24 miles");
    Exaggerate(str);
    puts(str);
    
    return 0;
}
