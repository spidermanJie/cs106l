#include <cstring>
#include <iostream>

int main()
{
    const char *str1 = "Something";
    const char *str2 = "Something";
    
    if (!strcmp(str1, str2))
        std::cout << "strings are equal" << std::endl;
    else
        std::cout << "strings are not equal" << std::endl;

    return 0;
}
