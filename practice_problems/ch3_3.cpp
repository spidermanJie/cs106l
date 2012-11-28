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

double GetReal()
{
    while (true) {
        stringstream converter;
        converter << GetLine();

        double result;
        if (converter >> result) {
            char remaining;
            if (converter >> remaining)
                cout << "Unexpected character: " << remaining << endl;
            else 
                return result; 
        } else {
            cout << "Please enter a real number." << endl;
        }
        
        cout << "Retry: ";
    }
}

int main()
{
    cout << GetReal() << endl;
    return 0;
}
