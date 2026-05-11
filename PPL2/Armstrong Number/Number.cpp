#include <iostream>
#include <cmath>
#include "Number.h"
using namespace std;

Number::Number(int num)
{
    n=num;
}

void Number::input()
{
    cout << "Enter number: ";
    cin >> n;

}

void Number :: checkNum()
{
    int temp, rem, result = 0;
    temp = n;
    while(temp != 0) {
        rem = temp % 10;
        result += pow(rem, 3);
        temp /= 10;
    }

    if(result == n)
        cout << "Armstrong Number";
    else
        cout << "Not Armstrong Number";

}