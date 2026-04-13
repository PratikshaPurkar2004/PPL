#include<iostream>
#include "GCDLCM.h"
using namespace std;

int main()
{
    int a,b;
    cout<<"enter a (a,b)::";
    cin>>a >>b;
    GCDLCM g(a,b);
    cout<<"GCD is::" <<g.findGCD()<<endl;
    cout<<"LCM is::" <<g.lcm() <<endl;
    return 0;
}