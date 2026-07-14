#include<iostream>
#include <vector>
using namespace std;

class Solution
{
    int n;
    vector<int>arr;
    public:
        void input()
        {
            cout<<"Enter a size of array::";
            cin>>n;
            arr.resize(n);
            cout<<"enter array elements::";
            for(int i=0;i<n;i++)
                cin>>arr[i];
        }
        void moveZeros()
        {
            int index=0;
            for(int i=0;i<n;i++)
            {
                if(arr[i]!=0)
                {
                    swap(arr[index],arr[i]);
                    index++;
                }
            }
            for(int val:arr)
                cout<<val <<" ";
        }
};

int main()
{
    Solution s;
    s.input();
    s.moveZeros();
    return 0;
}