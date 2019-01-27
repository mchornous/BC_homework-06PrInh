
#include <ostream>
#include <valarray>
#include "base.h"
#include <string>
Base::Base(int y, const int yr[], const int bot[])
	:Pair(ArrayIntT(yr, y), ArrayIntT(bot, y) ) {}

Base::Base(int y)
	:Pair(static_cast<ArrayIntT>(y),static_cast<ArrayIntT>(y)){}
