#include<iostream>
#include "reverse.h"
using namespace std;

Reverse::Reverse(int n)
{
    num=n;
}

void Reverse::input()
{
    cout<<"enter a number::";
    cin>>num;
}

int Reverse::reverseNum()
{
    int rev=0;
    while(num>0)
    {
        rev=rev*10+num%10;
        num=num/10;
    }
    return rev;
}