#include <algorithm>
#include <iostream>
#include <iterator>
#include <set>

using namespace std;

set<int> Union(set<int> first, set<int> second)
{
    set<int> un;
    
    un.insert(first.begin(), first.end());
    un.insert(second.begin(), second.end());
    
    return un;
}

int main()
{
    int a_first[] = {1, 2, 3, 5, 8};
    set<int> first(a_first, a_first + 5);
    
    int a_second[] = {2, 3, 5, 7, 11};
    set<int> second(a_second, a_second + 5);
    
    set<int> un = Union(first, second);
    
    copy(un.begin(), un.end(), ostream_iterator<int>(cout, ", "));

    return 0;
}
