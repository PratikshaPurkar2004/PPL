#include<iostream>
#include "Altitude.h"
using namespace std;

int main()
{
    Altitude a;
    a.input();
    cout<<"The highest altitude is: "<<a.heightAltitude();
    return 0;
}