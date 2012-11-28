#include <iostream>
#include <map>
#include <string>
using namespace std;

int NumberDuplicateEntries(map<string,string> m)
{
    map<string,int> dups;
    for (map<string,string>::iterator it = m.begin(); it != m.end(); ++it) {
        dups[it->second]++;
    }
    
    int numDuplicates = 0;
    for (map<string,int>::iterator it = dups.begin(); it != dups.end(); ++it) {
        if (it->second > 1) numDuplicates += it->second;
    }
    
    return numDuplicates;
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
    
    cout << NumberDuplicateEntries(m) << endl;

    return 0;
}
