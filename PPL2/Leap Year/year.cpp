#include<iostream>
using namespace std;
#include "year.h"


LeapYear::LeapYear(int y)
{
    year=y;
}

bool LeapYear::isLeapYear()
{
    if(year>9999 || year<1000)
        throw "Invalid year. Year should be a four-digit number.";
    if(year%4==0 && year%100!=0 || year%400==0)
        return true;
    else
        return false;
}