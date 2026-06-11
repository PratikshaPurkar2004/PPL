#include<iostream>
#include "Height.h"
using namespace std;
#include<algorithm>


void Height::input()
{
    cout<<"Enter number of students::";
    cin>>n;
    ht.resize(n);
    cout<<"Enter height of students::";
    for(int i=0;i<n;i++)
        cin>>ht[i];
}

int Height::heightChecker()
{
    vector<int> e=ht;
    sort(e.begin(),e.end());
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(e[i]!=ht[i])
            cnt++;
    }
    return cnt;
}
