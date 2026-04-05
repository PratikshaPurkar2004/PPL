#include<iostream>
#include "CPrimeFactorizer.h"
using namespace std;

int main()
{
    unsigned long int num;
    cout<<"enter a positive number to find all factors::";
    cin>>num;
    CPrimeFactorizer cp(num);
    cp.print_prime_factors();
    return 0;
}