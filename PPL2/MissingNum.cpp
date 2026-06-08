// #include<iostream>
// #include <algorithm>
// #include<vector>
// using namespace std;

// int main()
// {
//     int n;
//     cout<<"enter size of array::";
//     cin>>n;
//     vector <int>nums(n);
//     vector<int>ans;    
//     cout<< "enter array elements::";
//     for(int i=0;i<n;i++)
//         cin>>nums[i]; 
        
//     sort(nums.begin(),nums.end());
//     int sum=0;
//     for(int i=0;i<nums.size()-1;i++)
//     {
//         sum+=nums[i];
//         if(nums[i]==nums[i+1])
//             ans.push_back(nums[i]);
//     }
//    sum+=nums[nums.size()-1];
//    int total=(nums.size() * (nums.size()+1)) /2;
//     ans.push_back(total-(sum-ans[0]));
//     cout<<"missing number is::"<<ans[0];
//     return 0;
// }

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    int sum = 0;

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> nums[i];
        sum += nums[i];
    }

    int total = ((n + 1) * (n + 2)) / 2;

    cout << "Missing number is: " << total - sum;

    return 0;
}  