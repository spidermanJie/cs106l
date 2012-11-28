#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

vector<string> LinesFromFile(string filename)
{
    vector<string> vec;
    
    ifstream in(filename.c_str());
    if (in.is_open()) {
        string line;
        
        while (getline(in, line)) {
            vec.push_back(line);
        }
    }
    
    in.close();
    return vec;
}

int main(int argc, char *argv[])
{
    if (argc != 2) {
        cerr << "Usage: ./ch4_5 filename" << endl;
        exit(1);
    }

    vector<string> lines = LinesFromFile(argv[1]);
    
    for (size_t i = 0; i < lines.size(); ++i) {
        cout << "[" << i << "]: " << lines[i] << endl;
    }

    return 0;
}
