// #include<iostream>
// #include "Date.h"
// using namespace std;


// void Date::input()
// {
//     cout<<"Enter day month and year:: ";
//     cin>>day >>month >>year;
// }

// void Date::check()
// {
//     int temp=year;
//     int rev=0;
//     while(temp>0)
//     {
//         rev=rev*10+temp%10;
//         temp/=10;
//     }
//     int dm=day*100+month;
//     if (rev==dm)
//     {
//         cout<<"Symmetric Date";
//         if(day < 10) cout<<"0";
//         cout<<day<<"-";
//         if(month < 10) cout<<"0";
//         cout<<month<<"-"<<year;
//     }
//     else
//          cout<<"Not Symmetric";
// }


#include <iostream>
#include "Date.h"
using namespace std;

void Date::findDates()
{
    for(int year = 2001; year <= 2100; year++)
    {
        int temp = year;
        int rev = 0;

        // reverse year
        while(temp > 0)
        {
            rev = rev * 10 + temp % 10;
            temp /= 10;
        }

        int day = rev / 100;
        int month = rev % 100;

        // basic valid check
        if(month >= 1 && month <= 12 && day >= 1 && day <= 31)
        {
            // print in format dd-mm-yyyy
            if(day < 10) cout << "0";
            cout << day << "-";

            if(month < 10) cout << "0";
            cout << month << "-";

            cout << year << endl;
        }
    }
}
