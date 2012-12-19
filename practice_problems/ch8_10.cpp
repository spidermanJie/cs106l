#include <cctype>
#include <cstring>
#include <iostream>
using namespace std;

bool StrCaseEqual(const char *str1, const char *str2)
{
    if (strlen(str1) != strlen(str2)) return false;

    while (*str1 && *str2) {
        if (tolower(*str1) != tolower(*str2)) return false;
        str1++;
        str2++;
    }
    
    return true;
}

int main()
{
    cout << boolalpha << StrCaseEqual("Hello", "heLLo") << endl;
    cout << boolalpha << StrCaseEqual("what", "now") << endl;
    cout << boolalpha << StrCaseEqual("WHEN111WHY", "when111why") << endl;
    cout << boolalpha << StrCaseEqual("WHEN", "when111why") << endl;

    return 0;
}
