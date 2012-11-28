#include <algorithm>
#include <iostream>
#include <iterator>
#include <set>

using namespace std;

set<int> Intersection(set<int> first, set<int> second)
{
    set<int> in;
    
    set<int>::iterator it;
    for (it = first.begin(); it != first.end(); ++it) {
        if (second.count(*it)) in.insert(*it);
    }
    
    return in;
}

int main()
{
    int a_first[] = {1, 2, 3, 5, 8};
    set<int> first(a_first, a_first + 5);
    
    int a_second[] = {2, 3, 5, 7, 11};
    set<int> second(a_second, a_second + 5);
    
    set<int> in = Intersection(first, second);
    
    copy(in.begin(), in.end(), ostream_iterator<int>(cout, ", "));

    return 0;
}
