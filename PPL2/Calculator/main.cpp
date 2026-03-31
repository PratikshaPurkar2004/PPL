#include<iostream>
#include "calculator.h"
using namespace std;

int main()
{
    double a,b;
    char ch;
    cout<<"enter two number(num1 ,num2)::";
    cin>>a >>b;
    cout<<"enter an operator(+,-,*,/)::";
    cin>>ch;
    try
    {
        Calculator c(a,b,ch);
        double ans=c.calculate();
        cout<<"answer=" <<ans <<endl;
    }
    catch(const char* msg)
    {
        cout<<msg <<endl;
    }
    return 0;
}