#include<iostream>
#include<vector>
using namespace std;

vector <int> getConcatenation(vector <int>&nums)
{
    int n=nums.size();
    vector<int>ans(2*n);
    for(int i=0;i<n;i++)
    {
        ans[i]=nums[i];
        ans[i+n]=nums[i];
    }
    return ans;
}


int main()
{
    int n;
    cout<<"Enter size::";
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter array::";
    for(int i=0;i<n;i++)    {
        cin>>nums[i];
    }

    vector<int> result = getConcatenation(nums);

    for(int x : result)
    {
        cout << x << " ";
    }

    return 0;
}