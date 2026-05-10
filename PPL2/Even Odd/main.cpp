#include<iostream>
#include "EvenOdd.h"
using namespace std;

int main()
{
    int n;
    EvenOdd e(n);
    e.input();
    cout<<e.check();
    return 0;
}