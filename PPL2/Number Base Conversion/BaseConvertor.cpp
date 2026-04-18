#include<iostream>
#include<algorithm>
#include "BaseConvertor.h"
using namespace std;

BaseConvertor::BaseConvertor(int n,int b)
{
    number=n;
    base=b;
}

string BaseConvertor::convert()
{
    string digit="0123456789ABCDEF";
    string result="";
    int n=number;
    if(n==0)
        return "0";
    while(n>0)
    {
        result=digit[n%base]+result;
        n/=base;
    }
    return result;
    // if(base<2 || base>36)
    //     return "Invalid base";
    // string result="";
    // int num=number;
    // while(num>0)
    // {
    //     int rem=num%base;
    //     if(rem<10)
    //         result+=to_string(rem);
    //     else
    //         result+=char('A'+rem-10);
    //     num/=base;
    // }
    // reverse(result.begin(),result.end());
    // return result;
}