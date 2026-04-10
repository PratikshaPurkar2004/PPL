#include<iostream>
#include "Lagrange.h"
using namespace std;

int main()
{
    try
    {
        Lagrange l;
        l.input();
        float xp;
        cout<<"Enter value to interpolate::";
        cin>>xp;
        cout<<l.interpolate(xp);
    }
    catch(const char*msg)
    {
        cout<<msg <<endl;
    }
}