#include <iostream>
#include <cstdlib>
using namespace std;

//#define NO_CS106L_VERIFY

void CS106LVerify(bool invariant)
{
    if (!invariant) {
        cerr << "CS106LVerify failed" << endl;
        #ifndef NO_CS106L_VERIFY
        abort();
        #endif
    }
}

bool myfunc()
{
    return false;
}

int main()
{
    CS106LVerify(myfunc());

    return 0;
}
