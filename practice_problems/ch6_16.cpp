#include <algorithm>
#include <vector>
#include <iostream>
#include <iterator>
using namespace std;

int main()
{
    int nums_one[] = {3, 5, 6, 9, 12, 14, 18, 49};
    int nums_two[] = {5, 6, 10, 11, 18, 30, 55, 88};
    
    vector<int> one(nums_one, nums_one + 8);
    vector<int> two(nums_two, nums_two + 8);
    
    set_intersection(one.begin(), one.end(),
        two.begin(), two.end(), ostream_iterator<int>(cout, ","));

    return 0;
}
