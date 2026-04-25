#include<iostream>
#include "LCM.h"
using namespace std;

int LCM::gcd(int a,int b)
{
    // if(a<0 || b<0)
    // {
    //     cout<<"Negative numbers are not allowed."<<endl;
    //     return -1;
    // }
    while(b!=0)
    {
        // int t=b;
        // b=a%b;
        // a=t;
        int r=a%b;
        a=b;
        b=r;
    }
    return a;
}

int LCM::findLCM(int a,int b)
{
    return (a*b)/gcd(a,b);
}