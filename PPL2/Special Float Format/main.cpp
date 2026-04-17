#include<iostream>
#include "Formatter.h"
using namespace std;

int main()
{
    string s;
    cout<<"Enter a float number: ";
    cin>>s;
    Formatter f(s);
    cout<<f.format();
    return 0;
}