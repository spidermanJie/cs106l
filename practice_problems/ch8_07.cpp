#include <cstdio>
#include <cstring>
#include <cctype>

void TruncateString(char *str, int indx)
{
    str[indx] = '\0';
}

int main()
{
    char *str = new char[256];
    strcpy(str, "I worked 90 hours and drove 24 miles");
    TruncateString(str, 8);
    puts(str);
    
    return 0;
}
