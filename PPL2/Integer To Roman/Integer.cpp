#include<iostream>
#include "Integer.h"
using namespace std;

void Integer::input()
{
    cout<<"enter a number::";
    cin>>num; 
}

string Integer::intToRoman()
{
    string unit[]={"","I","II","III","IV","V","VI","VII","VIII","IX"};
    string tens[]={"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
    string hrns[]={"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
    string ths[]={"","M","MM","MMM"};
    return ths[num/1000]+hrns[(num%1000)/100]+tens[(num%100)/10]+unit[num%10];
}
