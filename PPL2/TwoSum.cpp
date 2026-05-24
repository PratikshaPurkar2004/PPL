#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>ans;
    int n,target;
    cout<<"enter array size: ";
    cin>>n;
    int arr[n];
    cout<<"enter array::";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"enter target::";
    cin>>target;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==target)
            {
                ans.push_back(i);
                ans.push_back(j);
                cout<<i  <<" " <<j;
            }
        }
    }
     return 0;
}
