#include <iostream>
#include <sstream>
using namespace std;

bool HasHexLetters(int num)
{
    stringstream ss;
    ss << hex << num;
    
    int val;
    if (ss >> dec >> val) {
        char remaining;
        return (ss >> remaining) ? true : false;
    } else {
        return true;
    }
}

int main()
{
    int n;
    for (n = 0; n < 100; n++)
        cout << boolalpha << n << " has hex letters? " << HasHexLetters(n) << endl;
    
    return 0;
}
