#include<iostream>
#include<algorithm>
#include<string>
#include "String.h"
using namespace std;

void String::input()
{
    cout<<"enter a string::";
    //cin>>str;
    getline(cin,str);
}

// void String::reverseStr()
// {
//     int start=0, end=str.size()-1;
//     while(start<end)
//     {
//         swap(str[start],str[end]);
//         start++;
//         end--;
//     }
//     cout<<str;
// }


void String::reverseStr()
{
    reverse(str.begin(), str.end());
    cout<<str;
}