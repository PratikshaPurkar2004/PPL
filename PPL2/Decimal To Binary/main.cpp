#include<iostream>
#include "DecimalToBinary.h"
using namespace std;

int main()
{
    int n,binary = 0, place = 1;
    DecimalToBinary d(n);
    d.input();
    d.solve();
}