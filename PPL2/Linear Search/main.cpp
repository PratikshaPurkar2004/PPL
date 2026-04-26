#include<iostream>
#include "LinearSearch.h"
using namespace std;

int main()
{
    int n,x,arr[100]; 
    cout<<"Enter the size of the array: ";
    cin>>n;
    LinearSearch ls(arr,n,x);
    ls.input();
    cout<<"Element found at index: "<<ls.search()<<endl;
    return 0;
}