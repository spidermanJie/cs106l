#include <algorithm>
#include <cstring>
#include <cstdio>
#include <ctime>
using namespace std;

void strfry(char *str)
{
    random_shuffle(str, str + strlen(str));
}

int main()
{
    srand(time(NULL));

    char str[256];
    strcpy(str, "Unscramble");
    
    strfry(str);
    puts(str);

    return 0;
}
