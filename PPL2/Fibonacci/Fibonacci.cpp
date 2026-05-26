#include<iostream>
using namespace std;
#include "Fibonacci.h"


void Fibonacci::input()
{
    cout<<"Enter a number::";
    cin>>n;
}
void Fibonacci::fibonacci()
{
    for(int i=0;i<n;i++)
    {
        c=x+y;
        x=y;
        y=c;
        cout<<x <<" ";
    }
}


