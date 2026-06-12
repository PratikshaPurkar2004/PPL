#include<iostream>
#include "MergeStr.h"
using namespace std;

void MergeStr::input()
{
    cout<<"Enter first string: ";
    cin>>w1;
    cout<<"Enter second string: ";
    cin>>w2;
}

string MergeStr::mergeStr()
{
    int sz1=w1.size();
    int sz2=w2.size();
    string ans;
    int i=0,j=0;
    while(i<sz1 && j<sz2)
    {
        ans+=w1[i];
        ans+=w2[j];
        i++;
        j++;
    }
    
    while(i<sz1)
    {
        ans+=w1[i];
        i++;
    }
    while(j<sz2)
    {
        ans+=w2[j];
        j++;
    }
    return ans;
}