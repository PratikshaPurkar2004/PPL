#include<iostream>
#include<vector>
using namespace std;

vector<int> findErrorNum(vector<int>& nums)
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

int main()
{
    int n;

    cout << "Enter size: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter array: ";

    for(int i = 0; i < n; i++)
        cin >> nums[i];

    vector<int> result = findErrorNum(nums);

    cout << "Duplicate number: " << result[0] << endl;
    cout << "Missing number: " << result[1] << endl;

    return 0;
}