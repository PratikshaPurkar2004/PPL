#include<iostream>
using namespace std;
#include "year.h"

int main()
{
    int y;
    cout<<"Enter a year: ";
    cin>>y;
    // if(y<=1500 ||y<1000 || y>9999)
    // {
    //     cout<<"Invalid Year";
    //     return 0;
    // }
    try{
        LeapYear yr(y);
        if(yr.isLeapYear())
            cout<<y <<endl <<"is leap year";
        else
            cout <<y <<endl <<"is not a leap year";
    }
    catch(const char* msg)
    {
        cout<<msg<<endl;
    }

    return 0;

}