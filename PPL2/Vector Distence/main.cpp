#include<iostream>
#include "vector.h"
using namespace std;

int main()
{
    double a,b,c,d;
    Vector v(a,b,c,d);
    v.input();
    cout<<"degree is::" <<v.findAngle() <<endl;
}
