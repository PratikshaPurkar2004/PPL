#include<iostream>
using namespace std;
#include "Factorial.h"
    
int Factorial::input()
{
    cout<<"Enter an integer::";
    cin>>num;
}

int Factorial::fact(int num)
{
    if(num==0)
        return 1;
    return num*fact(num-1);
}

void Factorial:: display()
{
    cout<<"Factorial="<<fact(num);
}



