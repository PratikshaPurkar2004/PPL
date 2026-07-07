#include<iostream>
using namespace std;


int main()
{
    int n;
    cout<<"enter a num::";
    cin>>n;

    int cnt=0;
    while(n!=0)
    {
        //int ans=ans*10+(n%10);
        n=n/10;
        cnt++;
    }
    cout<<cnt;
    return 0;
}