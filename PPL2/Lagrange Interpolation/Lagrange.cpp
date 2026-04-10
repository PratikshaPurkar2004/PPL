#include<iostream>
#include "Lagrange.h"
using namespace std;

void Lagrange ::input()
{
    cout<<"Enter number of point::";
    cin>>n;
    if(n<=0 ||n>10)
        throw "invalid ponts!";
    for(int i=0;i<n;i++)
    {
        cout<<"Enter x[" <<i <<"] and y[" <<i <<"]: ";
        cin>>x[i] >>y[i];
    }
}

float Lagrange::interpolate(float xp)
{
    float yp=0;
    for(int i=0;i<n;i++)
    {
        float term= y[i];
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(x[i]==x[j])
                    throw "duplicate x values!";
                term *=(xp-x[j])/(x[i]-x[j]);
            }

        }
        yp +=term;
    }
   return yp; 
}