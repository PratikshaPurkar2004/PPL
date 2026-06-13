#include<iostream>
using namespace std;
#include "Altitude.h"
#include<vector>

void Altitude::input()
{
    cout<<"Enter the number of gains: ";
    cin>>n;
    gains.resize(n);
    cout<<"Enter the gains: ";
    for(int i=0;i<n;i++)
        cin>>gains[i];
}

int Altitude::heightAltitude()
{
    int maxA=0,currA=0;
    for(int i=0;i<n;i++)
    {
        currA+=gains[i];
        if(maxA<currA)
            maxA=currA;
    }
    return maxA;
}
