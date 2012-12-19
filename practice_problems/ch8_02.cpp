#include <cstring>
#include <cstdio>

int main()
{
    const char *src = "What do you want?";
    char dest[50];
    
    strncpy(dest, src, 50);
    
    printf("%s\n", dest);

    return 0;
}