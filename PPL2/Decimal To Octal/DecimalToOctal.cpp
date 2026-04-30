#include <iostream>
using namespace std;
#include "DecimalToOctal.h"

DecimalToOctal::DecimalToOctal(int n)
{
    decimal=n;
}

void DecimalToOctal::input()
{
    cout << "Enter a decimal number: ";
    cin >> decimal;
}

void DecimalToOctal::solve()
{
    while (decimal != 0) 
    {
        remainder = decimal % 8;
        octal += remainder * place;
        decimal /= 8;
        place *= 10;
    }
    cout << "Octal number: " << octal;
}