#include<string>
#include "Integer.h"
using namespace std;
#include<iostream>
#include<unordered_map>

void Integer::input()
{
   cout<<"enter a string::";
   cin>>s; 
}

// int Integer:: convert()
// {
//     unordered_map<string,int> map = {
//     {"I",1}, {"V",5}, {"X",10},
//     {"L",50}, {"C",100},
//     {"D",500}, {"M",1000},
//     {"IV",4}, {"IX",9},
//     {"XL",40}, {"XC",90},
//     {"CD",400}, {"CM",900}
// };
//     int ans=0;
//     for(int i=0;i<s.size();i++)
//     {
//         string s1;
//         if(i != s.size()-1)
//         {
//             s1 += s[i];
//             s1 += s[i+1];
//         }
//         else
//             s1 += s[i];
//     }
//     return ans;
// }


int Integer::convert()
{
    unordered_map<char,int> mp = {
        {'I',1}, {'V',5}, {'X',10},
        {'L',50}, {'C',100},
        {'D',500}, {'M',1000}
    };

    int ans = 0;

    for(int i = 0; i < s.size(); i++)
    {
        if(i + 1 < s.size() && mp[s[i]] < mp[s[i+1]])
            ans -= mp[s[i]];
        else
            ans += mp[s[i]];
    }

    return ans;
}