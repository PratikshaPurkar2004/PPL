#include<iostream>
#include "Prime.h"
using namespace std;

int main()
{
    Prime p;
    p.input();
    cout<<p.diagonalPrime();  
    return 0;   
}