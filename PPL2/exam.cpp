#include<iostream>
#include<cmath>
#include "exam.h"
using namespace std;

Exam::Exam(double a1,double b1,double c1)
{
    a=a1;
    b=b1;
    c=c1;
}

void Exam::input()
{
    cout<<"enter a,b,c::";
    cin>>a >>b >>c;
}

void Exam::calRoot()
{
    double d=b*b-4*a*c;
    if(a==0)
        cout<<"not possible!";
    if(d>0)
    {
        float root1=-b+sqrt(d)/(2*a);
        float root2=-b-sqrt(d)/(2*a);
        cout<<"Root 1=" <<root1 <<"Root 2=" <<root2 <<endl;

        if(root1<0)
            cout<<"(x+" <<-root1 <<")" <<endl;
        else
            cout<<"(x-" <<root1 <<")";
        if(root2<0)
            cout<<"(x+" <<-root2 <<")";
        else
            cout<<"(x-" <<root2 <<")";
    }
    else if(d==0)
    {
        float root=-b/(2*a);
        cout<<"(x-" <<root <<")^2";
    }
    else
    {
        double real=-b/(2*a);
        double imag=sqrt(d)/2*a;

        cout<<"roots are::";
        cout<<real<<"+"<<imag <<"i, ";
        cout<<real <<"-" <<imag <<"i\n";

        if(real==0)
            cout<<
        
    }

}