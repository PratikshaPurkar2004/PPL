#include<iostream>
using namespace std;
#include "ReverseNumber.h"

int main()
{
    int x;
    cout<<"Enter Number::";
    cin>>x;
    ReverseNumber r;
    cout<<r.reverse(x);
    return 0;
}