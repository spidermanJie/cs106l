#include <iostream>
#include <string>
#include <cctype>
#include <deque>
using namespace std;

string VigenereEncrypt(string plaintext, deque<int> keys)
{
    string ciphertext;
    
    for (size_t i = 0; i < plaintext.length(); ++i) {
        char c = plaintext[i];
        
        if (isalpha(c) && isupper(c)) {
            char x = c + keys[0];
            if (x > 'Z') {
                x = (x % ('Z' + 1)) + 'A';
            }
            
            ciphertext.push_back(x);
            keys.push_back(keys.front());
            keys.pop_front();
        }
    }

    return ciphertext;
}

int main()
{
    string message = "THE COOKIES ARE IN THE FRIDGE";
    
    deque<int> keys;
    keys.push_back(1);
    keys.push_back(3);
    keys.push_back(7);
    
    cout << VigenereEncrypt(message, keys) << endl;

    return 0;
}
