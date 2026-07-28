#include<iostream>
#include<vector>
using namespace std;

class Solution
{
    public:
        int n;
        vector<int>arr;
        void input()
        {
            cout<<"Enter the number of elements: ";
            cin>>n;
            arr.resize(n);
            cout<<"Enter the elements: ";
            for(int i=0;i<n;i++)
                cin>>arr[i];
        }
        vector<int> sortedSquares(vector<int>& arr) 
        {
            int n=arr.size();
            vector<int>ans(n);
            int left=0,right=n-1;
            for(int i=n-1;i>=0;i--)
            {
                if(abs(arr[left])>abs(arr[right]))
                {
                    ans[i]=arr[left]*arr[left];
                    left++;
                }
                else
                {
                    ans[i]=arr[right]*arr[right];
                    right--;
                }
            }
            return ans;
        }
};

int main()
{
    Solution s;
    s.input();
    vector<int>ans=s.sortedSquares(s.arr);
    cout<<"The sorted squares are: ";
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
    cout<<endl;
    return 0;
}