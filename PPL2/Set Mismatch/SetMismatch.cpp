#include<iostream>
#include<vector>
using namespace std;
#include "SetMismatch.h"

void SetMismatch::input()
{
    cout << "Enter size of array: ";
    cin >> n;

    nums.resize(n);

    cout << "Enter array elements: ";

    for(int i = 0; i < n; i++)
        cin >> nums[i];
}

vector<int> SetMismatch::findErrorNum(vector<int>& nums)
{
    vector<int> ans(2);
    int sz = nums.size();
    bool flag = false;

    for(int i = 0; i < sz; i++)
    {
        for(int j = i + 1; j < sz; j++)
        {
            if(nums[i] == nums[j])
            {
                ans[0] = nums[i];
                flag = true;
                break;
            }
        }

        if(flag == true)
            break;
    }

    for(int i = 1; i <= sz; i++)
    {
        bool found = false;

        for(int j = 0; j < sz; j++)
        {
            if(nums[j] == i)
            {
                found = true;
                break;
            }
        }

        if(found == false)
        {
            ans[1] = i;
            break;
        }
    }

    return ans;
}

