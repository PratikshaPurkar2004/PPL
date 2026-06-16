#include<iostream>
#include "Prime.h"
#include<algorithm>
using namespace std;

void Prime::input()
{
    cout<<"enter the number::";
    cin>>n;
    nums.resize(n,vector<int>(n));
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>nums[i][j];
}

bool Prime:: isPrime(int n)
{
    if(n<=1)
        return false;
    for(int i=2;i*i<n;i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}

int Prime::diagonalPrime()
{
    int maxPrime=0;
    for(int i=0;i<n;i++)
        if(isPrime(nums[i][i]))
            maxPrime=max(maxPrime,nums[i][i]);
    return maxPrime;
    for(int i=0;i<n;i++)
        if(isPrime(nums[i][n-i-1]))
            maxPrime=max(maxPrime,nums[i][n-i-1]);
    return maxPrime;
}