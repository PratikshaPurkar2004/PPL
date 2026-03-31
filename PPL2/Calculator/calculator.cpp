#include<iostream>
#include "Calculator.h"
using namespace std;

Calculator::Calculator(double a,double b,char ch)
{
    num1=a;
    num2=b;
    op=ch;
}

double Calculator::calculate()
{
    switch(op)
    {
        case '+':return num1+num2;break;
        case '-':return num1-num2;break;
        case '*':return num1*num2;break;
        case '/': 
                    if(num2==0)
                        throw "divisibe by zero exception";
                    return num1/num2;break;
        default:
            throw "unknown operator";
    }
}