#include<iostream>
#include "sort.h"
using namespace std;

Sort::Sort(int n)
{
    arraysize=n;
    array=new int[arraysize];
}

Sort::~Sort()
{
    delete[] array;
}

void Sort::input()
{
    cout<<"enter array element::";
    for(int i=0;i<arraysize;i++)
        cin>>array[i];
}

void Sort::bubbleSort()
{
    for(int i=0;i<arraysize-1;i++)
    {
        for(int j=0;j<arraysize-i-1;j++)
        {
            if(array[j]>array[j+1])
                swap(array[j],array[j+1]);
        }
    }
}

void Sort::display()
{
    cout<<"sorted array::";
    for(int i=0;i<arraysize;i++)
        cout<<array[i] <<" ";
}


