#include<iostream>
#include<cmath>
#include "Root.h"
using namespace std;

Root::Root()
{
    a=0;
    b=0;
    c=0;
}

void Root::input()
{
    cout<<"Enter a Value of (a,b,c)::" <<endl;
    cin>>a >>b >>c;
}

void Root::solveRoot()
{
    double d = b*b - 4*a*c;

    if(a == 0)
    {
        cout << "Not a quadratic equation";
        return;
    }

    if(d > 0)
    {
        double root1 = (-b + sqrt(d))/(2*a);
        double root2 = (-b - sqrt(d))/(2*a);

        cout<<"Roots are:: "<<root1<<","<<root2<<endl;

        if(root1 < 0)
            cout<<"(x + "<<-root1<<")";
        else
            cout<<"(x - "<<root1<<")";

        if(root2 < 0)
            cout<<"(x + "<<-root2<<")";
        else
            cout<<"(x - "<<root2<<")";
    }
    else if(d == 0)
    {
        double root = -b/(2*a);
        cout<<"(x - "<<root<<")^2";
    }
    else
    {
        double real = -b/(2*a);
        double imag = sqrt(-d)/(2*a);

        cout<<"Roots are:: ";
        cout<<real<<" + "<<imag<<"i , ";
        cout<<real<<" - "<<imag<<"i\n";

        if(real == 0)
        {
            cout<<"(x + "<<imag<<"i)(x - "<<imag<<"i)";
        }
        else
        {
            cout<<"(x - ("<<real<<" + "<<imag<<"i))";
            cout<<"(x - ("<<real<<" - "<<imag<<"i))";
        }
    }
}
