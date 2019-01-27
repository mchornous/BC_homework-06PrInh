#include <iostream>
#include <valarray>
#include <utility>
#include <string.h>
#include "base.h"
class Wine: private Base
{
    using ArrayIntT = std::valarray<int>;
    using PairArrayT = std::pair<ArrayIntT, ArrayIntT>;
private:
    char* label;
    int age;
//	PairArrayT Pair;

public:
    Wine();
    Wine(const char* l, int y, const int yr[], const int bot[]);
    // l - means label, y - number of years, yr[] - years of bottling, bot[] - number of bottles
    Wine(const char* l, int y);
    // l - label, y - number of years, array is created with that size
    ~Wine(){};
    virtual void getBottles();
    char * getLabel();
    virtual int sum() const;
    virtual void show () const;
};
