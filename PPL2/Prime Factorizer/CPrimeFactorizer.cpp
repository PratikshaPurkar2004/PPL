#include<iostream>
using namespace std;
#include<cmath>
#include "CPrimeFactorizer.h"

CPrimeFactorizer::CPrimeFactorizer(unsigned long int num)
{
    this->n=num;

    primes.push_back(2);
    primes.push_back(3);
}

void CPrimeFactorizer::fillNextPrimeNumber()
{
    unsigned long int x0=primes.back();
    unsigned long int p,x,y;
    bool found =false;
    x0+=2;
    do
    {
       x=x0;
       found=true;
       p=(unsigned long int)(sqrt((long double)x)+1.0);
       for(size_t i=0;i<primes.size();i++)
       {
            y=primes[i];
            if(y>p)
                break;
            if(x%y==0)
            {
                found=false;
                break;
            }
       }
       if(!found)
        x0+=2;
    } while(!found);

    primes.push_back(x0);  
}

unsigned long int CPrimeFactorizer::getNextPrimeFactor(unsigned long int x)
{
    unsigned long int y;
    unsigned long int x0=primes.back();
    while(x0*x0<=x)
    {
        fillNextPrimeNumber();
        x0=primes.back();
    }
    for(size_t i=0;i<primes.size();i++)
    {
        y=primes[i];
        if(x%y==0)
            return y;
    }
    return x;
}

void CPrimeFactorizer::print_prime_factors()
{
    cout.width(8);
    unsigned long int x=n;
    unsigned long int y;
    while(x>1)
    {
        y=getNextPrimeFactor(x);
        cout<<y <<" ";
        x/=y;
    }
    cout <<endl;
}