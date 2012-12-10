#include <iterator>
#include <algorithm>
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("ch6_practice.txt");
    
    copy(istreambuf_iterator<char>(in),
        istreambuf_iterator<char>(),
        ostreambuf_iterator<char>(cout));
    
    in.close();

    return 0;
}
