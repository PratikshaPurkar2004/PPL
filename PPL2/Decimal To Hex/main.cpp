#include<iostream>
#include "DecimalToHex.h"
using namespace std;

int main()
{
    int n,Hex = 0, place = 1;
    DecimalToHex d(n);
    d.input();
    d.solve();
}