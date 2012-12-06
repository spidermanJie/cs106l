#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
#include <cmath>
using namespace std;

double DistanceToOrigin(vector<double> point)
{
    return sqrt(inner_product(point.begin(), point.end(), point.begin(), 0.0));
}

int main()
{
    vector<double> point;
    point.push_back(3);
    point.push_back(5);
    point.push_back(2);
    
    cout << DistanceToOrigin(point) << endl;

    return 0;
}
