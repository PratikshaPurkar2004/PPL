#include<iostream>
#include<cmath>
#include "angle.h"
using namespace std;

Angle::Angle(float a1,float b1,float c1)
{
    a=a1;
    b=b1;
    c=c1;
}

void Angle::input()
{
    cout<<"enter a angles::";
    cin>>a >>b >>c;
}

void Angle::calAngle()
{
    if(a+b<c || b+c<a ||a+c<b)
    {
        cout<<"invalid";
        return;
    }
    float A=acos((b*b+c*c-a*a)/(2*b*c))*180/3.14;
    float B =acos((a*a+c*c-b*b)/(2*a*c))*180/3.14;
    float C=180-A-B;

    cout<<"A=" <<A <<"B=" <<B <<"C="<<C;
}