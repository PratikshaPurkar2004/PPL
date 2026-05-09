#include<iostream>
#include "prime.h"
using namespace std;

int main()
{
    int n;
    Prime p(n);
    p.input();
    if(p.checkPrime())
        cout<<"prime";
    else
        cout<<"not prime";
    return 0;
}