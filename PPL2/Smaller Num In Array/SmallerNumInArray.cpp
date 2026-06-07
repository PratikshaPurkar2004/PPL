#include<iostream>
#include<vector>
using namespace std;
#include "SmallerNumInArray.h"

void SmallerNumInArray::input() 
{
    cout<<"Enter size::";
    cin>>n;

    arr.resize(n);
    ans.resize(n);

    cout<<"Enter array::";
    for(int i=0;i<n;i++)
        cin>>arr[i];
}

int SmallerNumInArray::findSmallerNum()
{
    for(int i=0;i<n;i++)
    {
        int cnt=0;
        for(int j=i+1;j<n;j++)
        {
            if(i!=j && arr[i]<arr[j])
                cnt++;
        }
        ans[i]=cnt;
    }
    cout<<"Smaller number::";
    for(int i=0;i<n;i++)
        cout<<ans[i]<<" ";
    return 0;
}
