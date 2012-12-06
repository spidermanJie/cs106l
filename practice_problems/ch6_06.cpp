#include <iostream>
#include <iterator>
#include <algorithm>
#include <numeric>
#include <fstream>
#include <vector>
using namespace std;

bool IsOutsideRange(int val)
{
    return (val < 25) || (val > 75);
}

int main()
{
    ifstream in("ch6_06_data.txt");
    
    vector<int> values;
    
    copy(istream_iterator<int>(in),
        istream_iterator<int>(),
        back_inserter(values));

    vector<int>::iterator end = remove_if(values.begin(), values.end(), IsOutsideRange);
    cout << accumulate(values.begin(), end, 0) / distance(values.begin(), end) << endl;
    
    in.close();
    return 0;
}
