#include <iostream>
using namespace std;
#include "DecimalToBinary.h"

DecimalToBinary::DecimalToBinary(int n)
{
    this->n=n;
}
void DecimalToBinary::input()
{
    cout << "Enter decimal number: ";
    cin >> n;
}

void DecimalToBinary::solve()
{
    while (n != 0) {
        int rem = n % 2;
        binary += rem * place;
        n /= 2;
        place *= 10;
    }

    cout << "Binary: " << binary;
}