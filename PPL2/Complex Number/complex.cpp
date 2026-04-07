#include<iostream>
#include "Complex.h"
using namespace std;

Complex::Complex()
{
    real=imag=0;
}

Complex::Complex(double r,double i)
{
    real=r;
    imag=i;
}

Complex::Complex(const Complex&c)
{
    real=c.real;
    imag=c.imag;
}

Complex::~Complex()
{}

void Complex::input()
{
    cout<<"Enter real and imaginary part";
    cin>>real >>imag;
}

void Complex::display()
{
    cout<<real;
    if(imag>=0)
        cout<<"+" <<imag <<"i" <<endl;
    else
        cout<<"-"<<-imag <<"i"<<endl; 
}

Complex Complex::addition(Complex c)
{
    Complex add;
    add.real=real+c.real;
    add.imag=imag+c.imag;
    return add;
    //return Complex(real+c.real,imag-c.imag) 
}

Complex Complex::subtraction(Complex c)
{
    Complex sub;
    sub.real=real-c.real;
    sub.imag=imag-c.imag;
    return sub;
}