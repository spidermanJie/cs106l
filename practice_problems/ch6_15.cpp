#include <fstream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

int main()
{
    ofstream out("stl_out.txt");
    
    vector<string> strings;
    strings.push_back("one");
    strings.push_back("two");
    strings.push_back("three");
    strings.push_back("four");
    strings.push_back("five");
    
    copy(strings.begin(), strings.end(), ostream_iterator<string>(out, "\n"));
    
    out.close();

    return 0;
}
