#include<vector>
#include<iostream>
using namespace std;

class CPrimeFactorizer
{
    private:
        unsigned long int n;
        vector<unsigned long int>primes;
        unsigned long int getNextPrimeFactor(unsigned long int);
        void fillNextPrimeNumber();
    public:
        CPrimeFactorizer(unsigned long int);
        void print_prime_factors();

};