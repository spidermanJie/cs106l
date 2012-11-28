#include <iostream>
#include <cstdlib>
#include <ctime>
#include <set>
using namespace std;

const int NUM_TRIALS = 10000;

int RollRepeat()
{
    multiset<int> rolled;
    
    int numRolls = 0;
    while (true) {
        int roll = (rand() % 6) + 1;
        rolled.insert(roll);
        numRolls++;
        
        if (rolled.count(roll) == 3) break;
    }

    return numRolls;
}

int main()
{
    srand(time(NULL));
    
    int numRolls = 0;
    for (int i = 0; i < NUM_TRIALS; ++i) {
        numRolls += RollRepeat();
    }
    
    cout << "Average over " << NUM_TRIALS <<
        " trials: " << static_cast<float>(numRolls)/NUM_TRIALS << endl;
    

    return 0;
}
