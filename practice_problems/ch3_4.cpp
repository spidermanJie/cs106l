#include <iostream>
#include <sstream>
#include <string>
using namespace std;

string GetLine()
{
    string line;
    getline(cin, line);
    return line;
}

bool GetBoolean()
{
    while (true) {
        stringstream converter;
        converter << GetLine();

        string result;
        if (converter >> result) {
            char remaining;
            if (converter >> remaining)
                cout << "Unexpected character: " << remaining << endl;
            else {
                if (result == "true") {
                    return true;
                } else if (result == "false") {
                    return false;
                }
            }
        } else {
            cout << "Please enter true or false" << endl;
        }
        
        cout << "Retry: ";
    }
}

int main()
{
    cout << boolalpha << GetBoolean() << " entered" << endl;
    return 0;
}
