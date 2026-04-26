#include "LinearSearch.h"
#include<iostream>
using namespace std;
LinearSearch::LinearSearch(int arr[],int n,int x)
{
    this ->n =n;
    this ->x=x;
}

void LinearSearch::input()
{
    cout<<"enter an array:=";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"enter a key to search:=";
    cin>>x;
}

int LinearSearch::search()
{
    for(int i=0;i<n;i++)
    {
        if(x==arr[i])
            return i;
    }
    return -1;
}