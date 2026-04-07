#include<iostream>
#include "Complex.h"
using namespace std;

int main()
{
    Complex c1,c2,c3;
    c1.input();
    c2.input();

    c3=c1.addition(c2);
    cout<<"addition::\n";
    c3.display();

    c3=c1.subtraction(c2);
    cout<<"subtraction::\n";
    c3.display();

    return 0;
}