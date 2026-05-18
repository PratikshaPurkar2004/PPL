#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n,arr[n];
    cout<<"enter array size: ";
    cin>>n;

    cout<<"enter array::";
    for(int i=0;i<n;i++)
        cin>>arr[i];

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