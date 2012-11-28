#include <iostream>
#include <iomanip>
#include <iterator>
#include <string>
#include <set>
using namespace std;

void PrintMatchingPrefixes(set<string> strings, string prefix)
{
    set<string>::iterator start = strings.lower_bound(prefix);
    
    string pre_upper_bound(prefix);
    pre_upper_bound[pre_upper_bound.length() - 1]++;
    
    set<string>::iterator end = strings.lower_bound(pre_upper_bound);
    
    copy(start, end, ostream_iterator<string>(cout, "\n"));
}

int main()
{
    set<string> strings;
    strings.insert("hello");
    strings.insert("one");
    strings.insert("two");
    strings.insert("hell");
    strings.insert("hi");
    strings.insert("i");
    
    PrintMatchingPrefixes(strings, "t");
    cout << setfill('-') << setw(15) << "" << endl;
    PrintMatchingPrefixes(strings, "h");
    cout << setfill('-') << setw(15) << "" << endl;
    PrintMatchingPrefixes(strings, "hell");

    return 0;
}
