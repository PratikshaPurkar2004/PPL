#include<iostream>
#include<vector>
using namespace std;

vector<int>suffle(vector<int>&nums,int n)
{
    vector<int>ans(2*n);
    int ans_i=0;
    for(int i=0;i<n;i++)
    {
        ans[ans_i]=nums[i];
        ans[ans_i+1]=nums[i+n];
        ans_i+=2;
    }
    return ans;
}

int main()
{
    int n;
    cout<<"Enter size::";
    cin>>n;
    vector<int> nums(2*n);
    cout<<"Enter array::";
    for(int i=0;i<2*n;i++)    {
        cin>>nums[i];
    }

    vector<int> result = suffle(nums,n);

    for(int x : result)
    {
        cout << x << " ";
    }

    return 0;
}