#include<iostream>
#include "Subsequence.h"
#include <string>
using namespace std;

void Subsequence::input()
{
    cout<<"Enter a two string::";
    cin>>s >>t;
}

bool Subsequence::isSubsequence(string s,string t)
{
    int i=0,j=0;
    int cnt=0;
    if(s.size()>t.size())
        return false;
    while(i<s.size () && j<t.size())
    {
        if(s[i]==t[j])
        {
            cnt++;
            i++;
            j++;
        }
        else
            j++;
    }
    if(s.size()==cnt)
        return true;
    else
        return false;
}