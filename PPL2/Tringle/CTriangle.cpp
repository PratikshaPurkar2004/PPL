#include<cmath>
#include<iostream>
using namespace std;
#include "CTriangle.hpp"

void CTriangle::input()
{
    cout <<"enter a sides of triangle::";
    cin >>a >>b >>c;
}

void CTriangle::CalculateArea()
{
    double s=(a+b+c)/2;
    double area=sqrt(s*(s-a)*(s-b)*(s-c));
    cout << "Area of Triangle is::" << area <<endl;   
}

bool CTriangle:: isValid()
{
    return(a+b>c && a+c>b && b+c>a);
}

void CTriangle::checkSides()
{
    if(a==b && b==c)
        cout<<"Equilateral"<<endl;
    else if(a==b || b==c || c==a)
        cout<<"Isosceles"<<endl;
    else
        cout<<"scalene"<<endl;
}

void CTriangle::checkAngles()
{
    double x = a*a;
    double y = b*b;
    double z = c*c;
    if(x+y==z || x+z==y || y+z==x)
        cout<<"Right Angle"<<endl;
    else if(x+y<z || x+z<y || y+z<x )
        cout<<"Obtuse Angle"<<endl;
    else
        cout<<"Acute Angle";
}

void CTriangle::largestSide()
{
    double max=a;
    if(max<b)
        max=b;
    if(max<c)
        max=c;
    cout<<"Largest side is::"<<max <<endl;
}

void CTriangle::smallestSide()
{
    double min=a;
    if(min>b)
        min=b;
    if(min>c)
        min=c;
    cout<<"Smallest side is::" <<min <<endl;  
}

void CTriangle::display()
{
    if(!isValid())
    {
        cout << "Not Valid Triangle" <<endl;
        return;
    }
    cout <<"Valid Triangle" <<endl;
    CalculateArea();
    checkSides();
    checkAngles();
    smallestSide();
    largestSide();
}