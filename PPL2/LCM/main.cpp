#include<iostream>
#include "LCM.h"
using namespace std;

int main()
{
    int a,b;
    cout<<"enter (a,b)::";
    cin>>a >>b;
    try{
        if(a<0 || b<0)
            throw "Negative numbers are not allowed.";
    }
    catch(const char* msg)
    {
        cout<<msg<<endl;
        return 0;
    }
    LCM l;
    cout<<l.gcd(a,b)<<endl;
    cout<<l.findLCM(a,b);
    return 0;
}