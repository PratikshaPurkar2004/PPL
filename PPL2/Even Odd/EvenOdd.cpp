#include <iostream>
#include "EvenOdd.h"
using namespace std;

EvenOdd::EvenOdd(int num)
{
    n=num;
}

void EvenOdd::input()
{
    cout<<"enter a number::";
    cin>>n;
}

int EvenOdd::check()
{
    for(int i=1;i<=n;i++)
        if(i%2==0)
            cout<<i <<" ";
    return 0;
}