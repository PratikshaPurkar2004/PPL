#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution
{
    vector<int>num1;
    vector<int>num2;
    int m,n;
    public:
        void input()
        {
            cout<<"Enter size of first array:: ";
            cin>>m;
            cout<<"Enter size of second array:: ";
            cin>>n;
            num1.resize(m+n);
            num2.resize(n);

            cout<<"Enter first array:: ";
            for(int i=0;i<n;i++)
                cin>>num1[i];
            cout<<"Enter second array:: ";
            for(int i=0;i<m;i++)
            cin>>num2[i];
        }

        void merge()
        {
            for(int i=0;i<n;i++)
                num1[m+i]=num2[i];
            sort(num1.begin(),num1.end());
            for(int val:num1)
                cout<<val <<" ";
        }
};

int main()
{
    Solution s;
    s.input();
    s.merge();
    return 0;
}