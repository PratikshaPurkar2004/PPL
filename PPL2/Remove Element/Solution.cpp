#include<iostream>
#include<vector>
using namespace std;

class Solution
{
    vector<int>arr;
    int n,val;
    public:
        void input()
        {
            cout<<"Enter a size of array::";
            cin>>n;
            arr.resize(n);
            cout<<"Enter a array elements::";
            for(int i=0;i<n;i++)
                cin>>arr[i];
            cout<<"Enter a value to remove::";
            cin>>val;
        }
        void display()
        {
            int k=0;
            for(int i=0;i<n;i++)
            {
                if(arr[i]!=val)
                {
                    arr[k]=arr[i];
                    k++;
                }
            }
            for(int i=0;i<k;i++)
                cout<<arr[i]<<" " ;
            cout<<endl;
            cout<<k<<endl;
        }
};

int main()
{
    Solution s;
    s.input();
    s.display();
    return 0;
}