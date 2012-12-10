#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int median(vector<int> &data)
{
    int median;
    int middle = data.size() / 2;
    
    if (data.size() % 2 == 0) {
        nth_element(data.begin(), data.begin() + middle - 1, data.end());
        nth_element(data.begin(), data.begin() + middle, data.end());
        median = (data[middle - 1] + data[middle]) / 2;
    } else {
        nth_element(data.begin(), data.begin() + middle, data.end());
        median = data[middle];
    }
    
    return median;
}

int main()
{
    int nums[] = {3, 6, 1, 2, 9, 5, 4, 8, 7, 11, 10};
    vector<int> vec(nums, nums + 11);
    
    cout << median(vec) << endl;

    return 0;
}
