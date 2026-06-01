#include<iostream>
#include<vector>
#include "ConcatinationOfArray.h"
using namespace std;

void ConcatinationOfArray::input()
{
    cout << "Enter size:";
    cin >> n;

    nums.resize(n);

    cout << "Enter array:";
    for(int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
}

// vector <int> ConcatinationOfArray:: getConcatenation()
// {
//     int n=nums.size();
//     vector<int>ans(2*n);
//     for(int i=0;i<n;i++)
//     {
//         ans[i]=nums[i];
//         ans[i+n]=nums[i];
//     }
//     return ans;
// }


vector<int> ConcatinationOfArray::getConcatenation()
{
    vector<int> ans;

    for(int i = 0; i < n; i++)
    {
        ans.push_back(nums[i]);
    }

    for(int i = 0; i < n; i++)
    {
        ans.push_back(nums[i]);
    }

    return ans;
}