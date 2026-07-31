#include<iostream>
#include<vector>
using namespace std;

class Solution
{
    public:
        vector<int>height;
        int n;
        void input()
        {
            cout<<"Enter a size of array::";
            cin>>n;
            height.resize(n);
            cout<<"enter array elements::";
            for(int i=0;i<n;i++)
                cin>>height[i];
        }

        int trap()
        {
            int leftMax=0,rightMax=0,left=0,right=n-1;
            int water=0;
            while(left<right)
            {
                if(height[left]<height[right])
                {
                    leftMax=max(leftMax,height[left]);
                    water+=leftMax-height[left];
                    left++;
                }
                else
                {
                    rightMax=max(rightMax,height[right]);
                    water+=rightMax-height[right];
                    right--;
                }
            }
            return water;
        }
};


int main()
{
    Solution s;
    s.input();
    cout<<s.trap()<<endl;
    return 0;
}