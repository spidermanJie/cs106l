#include <vector>
#include <iostream>
#include <algorithm>

int count(std::vector<int>::iterator start, std::vector<int>::iterator stop, int element)
{
    return std::count(start, stop, element);
}

int main()
{
    int values[] = {3, 5, 6, 3, 1, 7, 9, 3, -3, 8, 17, 3};
    std::vector<int> vec(values, values + 12);
    
    std::cout << count(vec.begin(), vec.end(), 3) << std::endl;

    return 0;
}
