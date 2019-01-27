#include <iostream>
#include "wine.h"
int main() {
    using std::cin;
    using std::cout;
    using std::endl;

    cout << "Enter name of wine: ";
    char lab[50] = "";
    cin.getline(lab, 50);
    cout << "Enter number of years: ";
    int yrs{0};
    cin >> yrs;

    Wine holding(lab, yrs);
    holding.getBottles();
    holding.show(); // print wine info

    constexpr int kYears = 3;
    int y[kYears] = { 1993, 1995, 1998 };
    int b[kYears] = { 48, 60, 72 };

    Wine more("Chianti", kYears, y, b);

    //std::valarray<int> val = static_cast<std::valarray<int> >(more.Pair.second);
    //auto val = more.Pair.second;
    //    cout << more.Pair.second[0] << "\n";
    more.show();
    return 0;
}
