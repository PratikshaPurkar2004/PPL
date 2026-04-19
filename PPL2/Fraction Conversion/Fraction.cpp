#include<iostream>
#include<cmath>
#include "Fraction.h"
using namespace std;

int gcd(int a,int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
Fraction::Fraction(string s)
{
    input=s;
}

void Fraction::convert()
{
    int pos = input.find('.');
    int I = stoi(input.substr(0, pos));
    string F = input.substr(pos + 1);

    if(F == "0")
    {
        cout << I;
        return;
    }
    int num = stoi(F);
    int den = 1;
    for(int i = 0; i < F.length(); i++)
        den *= 10;

    int g = gcd(num, den);
    num /= g;
    den /= g;

    if(I == 0)
        cout << num << " / " << den;
    else
        cout << I << " + " << num << " / " << den;
}