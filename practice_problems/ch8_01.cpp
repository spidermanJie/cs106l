#include <cstdio>

int main()
{
    // allocation type 1
    char *str = new char[50 + 1];
    str[0] = 'a';
    str[1] = '\0';
    
    // allocation type 2
    char str2[50 + 1];
    str2[0] = 'b';
    str2[1] = '\0';
    
    printf("%s %s\n", str, str2);

    return 0;
}
