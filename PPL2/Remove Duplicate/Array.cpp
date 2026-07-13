#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;

class Solution
{
    vector<int>arr;
    public:
        void input(int &n)
        {
            cout<<"Enter a array of size::";
            cin>>n;
            arr.resize(n);
            cout<<"Enter array elements::";
            for(int i=0;i<n;i++)
                cin>>arr[i];
        }

        void removeDuplicate()
        {
            // unordered_set<int>s;
            // for(int i=0;i<arr.size();i++)
            // {
            //     if(s.find(arr[i])==s.end())
            //     {
            //         cout<<arr[i]<<" ";
            //         s.insert(arr[i]);
            //     }
            // }

            int j=0;
            for(int i=1;i<arr.size();i++)
            {
                if(arr[i]!=arr[j])
                {
                    j++;
                    arr[j]=arr[i];
                }
            }
            for(int i=0;i<=j;i++)
                cout<<arr[i] <<" ";
        }
};

int main()
{
    Solution s;
    int n;
    s.input(n);
    s.removeDuplicate();
    return 0;
}