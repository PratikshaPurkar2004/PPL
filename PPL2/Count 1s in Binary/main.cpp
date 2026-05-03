#include<iostream>
#include "count.h"  
using namespace std;

int main()
{
    int n;
    count c(n);
    c.input();
    cout<<c.countOnes();
    return 0;
}