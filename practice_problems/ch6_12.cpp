#include <algorithm>
#include <numeric>
#include <iterator>
#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

const int N = 1000;

int main()
{
    srand(time(NULL));

    vector<int> vals;
    generate_n(back_inserter(vals), N, rand);
    
    cout << RAND_MAX << endl;
    cout << "Average: " << accumulate(vals.begin(), vals.end(), 0.0) / N << endl;

    return 0;
}
