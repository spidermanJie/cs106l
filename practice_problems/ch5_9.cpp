#include <iostream>
#include <set>
using namespace std;

int main()
{
    multiset<int> nums;
    
    int num;
    while (cin >> num) {
        nums.insert(num);
    }
    
    for (multiset<int>::iterator it = nums.begin(); it != nums.end(); ++it) {
        cout << *it << endl;
    }

    return 0;
}
