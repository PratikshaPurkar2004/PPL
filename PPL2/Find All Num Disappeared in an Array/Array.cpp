#include<iostream>
#include "Array.h"
using namespace std;

void Array::input()
{
    cout<<"enter size of array::";
    cin>>n;
    arr.resize(n);
    cout<<"enter elements of array::";
    for(int i=0; i<n; i++)
        cin>>arr[i];
}

void Array::display()
{
    cout<<"disappeared numbers::\n";
    for(int i=0; i<ans.size(); i++)
        cout<<ans[i]<<" ";
    cout<<"\n";
}


void Array::findDisappearedNumbers()
{
    for(int i=0; i<n; i++)
    {
        bool flag=false;
        for(int j=0; j<n; j++)
        {
            if(arr[j] == i + 1)
            {
                flag=true;
                break;
            }
        }
        if(!flag)
            ans.push_back(i + 1);
    }
}