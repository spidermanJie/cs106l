#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
#include <vector>
using namespace std;

bool IsShort(string str)
{
    return str.length() <= 3;
}

void RemoveShortWords(vector<string> &strings)
{
    strings.erase(remove_if(strings.begin(), strings.end(), IsShort), strings.end());
}

int main()
{
    vector<string> strings;
    strings.push_back("hello");
    strings.push_back("abc");
    strings.push_back("lajsdf");
    strings.push_back("a");
    strings.push_back("kdsjfkjdf");
    
    RemoveShortWords(strings);
    
    copy(strings.begin(), strings.end(), ostream_iterator<string>(cout, ", "));

    return 0;
}
