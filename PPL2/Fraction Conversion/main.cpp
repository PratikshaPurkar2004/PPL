#include <iostream>
#include "Fraction.h"
using namespace std;

int main() {
    string s;
    cin >> s;

    Fraction obj(s);
    obj.convert();

    return 0;
}