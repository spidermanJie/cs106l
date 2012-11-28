#include <iterator>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int data[] = {3, 5, 6, 17, 44, 45, 46, 46, 46, 49};
    vector<int> vals;
    vals.assign(data, data + 10);
    
    vector<int>::iterator start, end;
    
    // [min, max)
    start = lower_bound(vals.begin(), vals.end(), 5);
    end = lower_bound(vals.begin(), vals.end(), 46);
    copy(start, end, ostream_iterator<int>(cout, ", "));
    
    cout << endl;
    
    // (min, max]
    start = upper_bound(vals.begin(), vals.end(), 5);
    end = upper_bound(vals.begin(), vals.end(), 46);
    copy(start, end, ostream_iterator<int>(cout, ", "));
    
    cout << endl;
    
    // (min, max)
    start = upper_bound(vals.begin(), vals.end(), 5);
    end = lower_bound(vals.begin(), vals.end(), 46);
    copy(start, end, ostream_iterator<int>(cout, ", "));

    return 0;
}
