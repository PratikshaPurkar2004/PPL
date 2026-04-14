#include "vector.h"
#include<cmath>
#include<iostream>
using namespace std;

Vector::Vector(double a,double b,double c,double d)
{
    x1=a;
    y1=b;
    x2=c;
    y2=d;
}

void Vector::input()
{
    cout<<"enter (x1,y1,x2,y2) ::";
    cin>>x1 >>y1 >>x2 >>y2;
    cout<<"Vector 1 is::(" <<x1 <<"," <<y1 <<")" <<endl;
    cout<<"Vector 2 is::(" <<x2 <<"," <<y2 <<")" <<endl;
}

double Vector ::findAngle()
{
    double dotProduct=x1*x2+y1*y2;
    double magnitude1=sqrt(x1*x1+y1*y1);
    double magnitude2=sqrt(x2*x2+y2*y2);
    double cosTheta=(dotProduct/(magnitude1*magnitude2));
    if(cosTheta>1)
        cosTheta=1;
    else if(cosTheta<-1)
        cosTheta=-1;
    double angle=acos(cosTheta);
    return angle * 180/M_PI; 
}