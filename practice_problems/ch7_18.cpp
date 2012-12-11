#include <iostream>
#include <string>
using namespace std;

enum LengthUnit
{
    #define DEFINE_UNIT(name, metres_per_unit, suffix, system) eLengthUnit_##suffix,
    #include "units.h"
    #undef DEFINE_UNIT
    eLengthUnit_ERROR
};

LengthUnit SuffixStringToLengthUnit(string suffix)
{
    #define DEFINE_UNIT(nm, per, suff, sys) if (#suff == suffix) return eLengthUnit_##suff;
    #include "units.h"
    #undef DEFINE_UNIT
    
    return eLengthUnit_ERROR;
}

int main()
{
    cout << SuffixStringToLengthUnit("cm") << endl;
    cout << SuffixStringToLengthUnit("m") << endl;
    cout << SuffixStringToLengthUnit("CANDY!") << endl;

    return 0;
}
