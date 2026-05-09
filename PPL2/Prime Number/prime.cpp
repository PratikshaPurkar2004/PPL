#include <iostream>
#include "prime.h"
using namespace std;

Prime::Prime(int num)
{
    n=num;
}

void Prime::input()
{
    cout<<"enter a number::";
    cin>>n;
}

int Prime :: checkPrime()
{
    if( n<2)
        return false;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
    
}