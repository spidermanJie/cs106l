#include <iostream>
#include <vector>
#include <deque>
#include <ctime>
using namespace std;

const int NUM = 100000;

void AddRepeatedly(vector<string> &vec, string str)
{
    clock_t start = clock();

    for (int i = 0; i < NUM; ++i) {
        vec.insert(vec.begin(), str);
    }
    
    clock_t end = clock();
    
    cout << "Added " << NUM << " elements to vector in " <<
        static_cast<double>(end - start) / CLOCKS_PER_SEC << "s" << endl;
}

void AddRepeatedly(deque<string> &deq, string str)
{
    clock_t start = clock();

    for (int i = 0; i < NUM; ++i) {
        deq.push_front(str);
    }
    
    clock_t end = clock();
    
    cout << "Added " << NUM << " elements to deque in " <<
        static_cast<double>(end - start) / CLOCKS_PER_SEC << "s" << endl;
}

int main()
{
    string str = "ljasdklfjklsdjfkldsjfkldjsfdsf";
    vector<string> vec1;
    
    AddRepeatedly(vec1, str);
    
    vector<string> vec2;
    vec2.reserve(NUM);
    
    AddRepeatedly(vec2, str);
    
    deque<string> deq;
    AddRepeatedly(deq, str);
    
    return 0;
}
