#include<iostream>
#include "Conic.h"
using namespace std;

Conic::Conic(double a1,double b1,double c1,double h1,double g1,double f1)
{
    a=a1;
    b=b1;
    c=c1;
    h=h1;
    g=g1;
    f=f1;
}

void Conic::classify()
{
    double delta=a*(b*c-f*f)-h*(h*c-f*g)+g*(h*f-b*g);
    double val=a*b-h*h;
    if(delta!=0)
    {
        if(val>0)
        {
            if(a==b && h==0)
                cout<<"Circle";
            else
                cout<<"Ellipse";
        }
        else if(val==0)
            cout<<"Parabola";
        else
            cout<<"Hyperbola";
    }
    else
    {
        if(val>0)
            cout<<"Two imaginary lines";
        else if(val==0)
            cout<<"Two real parallel lines";
        else
            cout<<"Two real intersecting lines";
    }
}