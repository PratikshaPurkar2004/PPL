#include<iostream>
#include<vector>
#include "ConcatinationOfArray.h"
using namespace std;

void ConcatinationOfArray::input()
{
    int n;
    cout<<"Enter size::";
    cin>>n;
    cout<<"Enter array::";
    for(int i=0;i<n;i++)    
        cin>>nums[i];

}

vector <int> ConcatinationOfArray:: getConcatenation()
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


