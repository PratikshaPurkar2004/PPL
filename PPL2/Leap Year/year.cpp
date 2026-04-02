#include<iostream>
using namespace std;
#include "year.h"


LeapYear::LeapYear(int y)
{
    year=y;
}

bool LeapYear::isLeapYear()
{
    if(year%4==0 && year%100!=0 || year%400==0)
        return true;
    else
        return false;
}