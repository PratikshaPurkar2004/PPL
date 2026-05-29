#include<iostream>
#include<vector>
#include "TwoSum.h"
using namespace std;

void TwoSum::input()
{

    cout<<"enter array size: ";
    cin>>n;
    arr.resize(n);
    cout<<"enter array::";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"enter target::";
    cin>>target;
}

int TwoSum::solve()
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==target)
            {
                // ans.push_back(i);
                // ans.push_back(j);
                cout<<i  <<" " <<j;
            }
        }
    }
     return 0;
}
