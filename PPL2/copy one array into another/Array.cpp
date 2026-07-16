#include<iostream>
#include<vector>
using namespace std;

class Array
{
    int n;
    vector<int>arr;
    public:
        void input()
        {
            cout<<"Enter a size of array::";
            cin>>n;
            arr.resize(n);
            cout<<"Enter array elements::";
            for(int i=0;i<n;i++)
                cin>>arr[i];
        }
        void copyArray()
        {
            vector<int>copy(n);
            for(int i=0;i<n;i++)
                copy[i]=arr[i];
            for(int val:copy)
                cout<<val <<" ";
        }
};

int main()
{
    Array a;
    a.input();
    a.copyArray();
    return 0;
}
