#include<iostream>
#include<vector>
#include "ConsicutiveOnes.h"

using namespace std;


void ConsicutiveOnes::input()
{
    cout<<"enter array size: ";
    cin>>n;

    cout<<"enter array::";
    for(int i=0;i<n;i++)
        cin>>arr[i];
}

int ConsicutiveOnes::solve()
{
    int cnt=0,ans=0;
    for(int i=0;i<n;i++)
        if(arr[i]==1)
        {
            cnt++;
            ans=max(cnt,ans);
        }
        else
        {
            cnt=0;
        }
    cout<<"max consecutive ones are:: "<<ans;
    return 0;
}