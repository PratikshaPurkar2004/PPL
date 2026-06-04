#include<iostream>
#include<vector>
using namespace std;
#include "SuffleArray.h"

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

    ShuffleArray s;
    vector<int> result = s.shuffle(nums,n);

    for(int x : result)
    {
        cout << x << " ";
    }

    return 0;
}