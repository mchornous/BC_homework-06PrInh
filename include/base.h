#include <valarray>
#include <utility>

class Base
{
    using ArrayIntT = std::valarray<int>;
    using PairArrayT = std::pair<ArrayIntT, ArrayIntT>;

protected:
    PairArrayT Pair;
    virtual void getBottles()=0;
    virtual int sum() const=0;
    Base(int y, const int yr[], const int bot[]);
    Base(int y);
    virtual ~Base(){};
};
