#include <algorithm>
#include <iterator>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool BiasedCmp(string first, string second)
{
    if (first == "Me First")
        return true;
    else if (second == "Me First")
        return false;
    else
        return first < second;
}

void BiasedSort(vector<string> &strings)
{
    sort(strings.begin(), strings.end(), BiasedCmp);
}

int main()
{
    vector<string> strings;
    
    strings.push_back("testing");
    strings.push_back("one");
    strings.push_back("holiday");
    strings.push_back("Me First");
    strings.push_back("alphabet");
    
    BiasedSort(strings);
    
    copy(strings.begin(), strings.end(), ostream_iterator<string>(cout, ", "));

    return 0;
}
