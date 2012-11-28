#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void OpenFile(ifstream &in)
{
    cout << "enter a filename to open: ";
    
    string filename;
    getline(cin, filename);
    
    in.open(filename.c_str());
    if (!in.is_open()) {
        cerr << "file " << filename << " cannot be opened" << endl;
    }
}

int main()
{
    ifstream in;
    OpenFile(in);
    
    return 0;
}
