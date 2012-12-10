#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
using namespace std;

string cipher = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

char encrypt(char c)
{
    return cipher[c - 'A'];
}

string MonoalphabeticSubstitutionEncrypt(string source)
{
    transform(source.begin(), source.end(), source.begin(), encrypt);
    return source;
}

int main()
{
    srand(time(NULL));
    
    cout << cipher << endl;
    random_shuffle(cipher.begin(), cipher.end());
    cout << cipher << endl;
    cout << "---------------------------" << endl;
    
    string source = "THECOOKIESAREINTHEFRIDGE";
    cout << source << endl;
    cout << MonoalphabeticSubstitutionEncrypt(source) << endl;

    return 0;
}
