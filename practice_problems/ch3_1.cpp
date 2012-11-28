#include <iostream>
#include <sstream>
#include <string>
using namespace std;

string ExtractFirstToken(string str)
{
    string firstToken;
    istringstream ss(str);
    ss >> firstToken;
    return firstToken;
}

int main()
{
    cout << ExtractFirstToken("Eleanor Roosevelt") << endl;
    return 0;
}
