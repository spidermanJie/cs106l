#include <map>
#include <string>
#include <iostream>
using namespace std;

map<string,string> ComposeMaps(map<string,string> one, map<string,string> two)
{
    map<string,string> composition;

    map<string,string>::iterator it;
    string one_out;
    for (it = one.begin(); it != one.end(); ++it) {
        one_out = it->second;
        
        if (two.count(one_out)) {
            composition[it->first] = two[one_out];
        }
    }

    return composition;
}

int main()
{
    map<string,string> one;
    one["a"] = "b";
    one["b"] = "c";
    
    map<string,string> two;
    two["b"] = "c";
    two["d"] = "e";
    
    map<string,string> composition = ComposeMaps(one, two);
    
    map<string,string>::iterator it;
    for (it = composition.begin(); it != composition.end(); ++it) {
        cout << it->first << ": " << it->second << endl;
    }

    return 0;
}
