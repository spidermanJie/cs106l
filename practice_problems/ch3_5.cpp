#include <iostream>
#include <iomanip>
using namespace std;

void DrawTriangle(int n, char c)
{
    for (int i = 1; i <= n; ++i) {
        cout << setw(n - i) << setfill(' ') << "";
        cout << setw(2*i - 1) << setfill(c) << "";
        cout << endl;
    }
}

int main()
{
    DrawTriangle(10, '#');
    return 0;
}
