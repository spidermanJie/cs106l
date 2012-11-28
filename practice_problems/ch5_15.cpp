#include <iostream>
#include <string>
#include <map>
using namespace std;

multimap<string,string> InvertMap(map<string,string> m)
{
    multimap<string,string> mm;
    
    for (map<string,string>::iterator it = m.begin(); it != m.end(); ++it) {
        mm.insert(make_pair(it->second, it->first));
    }

    return mm;
}

int main()
{
    map<string,string> m;
    m["name1"] = "tony";
    m["name2"] = "frank";
    m["name3"] = "peter";
    m["name4"] = "tony";
    m["name5"] = "sam";
    m["name6"] = "rebecca";
    m["name7"] = "sam";
    m["name8"] = "judy";
    
    multimap<string,string> mm = InvertMap(m);
    
    for (multimap<string,string>::iterator it = mm.begin(); it != mm.end(); ++it) {
        cout << it->first << ": " << it->second << endl;
    }

    return 0;
}
