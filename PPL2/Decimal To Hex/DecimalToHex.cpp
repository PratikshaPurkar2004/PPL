#include <iostream>
using namespace std;
#include "DecimalToHex.h"

DecimalToHex::DecimalToHex(int n)
{
    this->n=n;
}
void DecimalToHex::input()
{
    cout << "Enter decimal number: ";
    cin >> n;
}

void DecimalToHex::solve()
{
    string hex="";
    while (n != 0) {
        int rem = n % 16;
        if(rem<10)
            hex=char(rem +'0')+hex;
        else
            hex=char(rem-10+'A')+hex;
        n /= 16;
    }

    cout << "Hex: " << hex;
}