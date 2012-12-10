#include <algorithm>
#include <iterator>
#include <iostream>
#include <string>
#include <map>
#include <set>
using namespace std;

bool MovieCmp(pair<string, double> a, pair<string, double> b)
{
    return a.second < b.second;
}

set<string> CriticsPick(map<string, double> movieRatings)
{
    set<string> top10;
    
    map<string, double>::iterator it;
    for (int i = 0; i < 10; ++i) {
        it = max_element(movieRatings.begin(), movieRatings.end(), MovieCmp);
        if (it != movieRatings.end()) {
            top10.insert(it->first);
            movieRatings.erase(it);
        }
    }
    
    return top10;
}

int main()
{
    map<string, double> movieRatings;
    
    movieRatings["a"] = 3.2;
    movieRatings["b"] = 1.4;
    movieRatings["c"] = 8.3;
    movieRatings["d"] = 9.6;
    movieRatings["e"] = 5.6;
    movieRatings["f"] = 8.3;
    movieRatings["g"] = 3.8;
    movieRatings["h"] = 3.2;
    movieRatings["i"] = 1.7;
    movieRatings["j"] = 0.0;
    movieRatings["k"] = 10.0;
    movieRatings["l"] = 6.5;
    
    set<string> top10 = CriticsPick(movieRatings);
    
    copy(top10.begin(), top10.end(), ostream_iterator<string>(cout, ", "));

    return 0;
}
