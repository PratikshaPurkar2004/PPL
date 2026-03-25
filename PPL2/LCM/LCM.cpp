#include<iostream>
#include "LCM.h"
using namespace std;

int LCM::gcd(int a,int b)
{
    while(b!=0)
    {
        int t=b;
        b=a%b;
        a=t;
    }
    return a;
}

int LCM::findLCM(int a,int b)
{
    return (a*b)/gcd(a,b);
}