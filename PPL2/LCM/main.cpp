#include<iostream>
#include "LCM.h"
using namespace std;

int main()
{
    int a,b;
    cout<<"enter (a,b)::";
    cin>>a >>b;

    LCM l;
    cout<<l.findLCM(a,b);
    return 0;
}