#include<iostream>
#include "Conic.h"
using namespace std;

int main()
{
    double a,b,c,h,g,f;
    cin>>a >>b >>c >>h >>g >>f;
    Conic obj(a,b,c,h,g,f);
    obj.classify();
    return 0;
}