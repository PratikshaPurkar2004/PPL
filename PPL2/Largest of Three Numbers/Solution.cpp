#include<iostream>
using namespace std;

class Solution
{
    public:
        int a,b,c;
        void input()
        {
            cout<<"Enter a three num(a,b,c)::";
            cin>>a >>b >>c;
        }
        void largest()
        {
            if(a>b && a>c)
                cout<<a <<" is largest";
            else if(b>a && b>c)
                cout<<b <<" is largest";
            else
                cout<<c <<" is largest";
        }
};

int main()
{
    Solution s;
    s.input();
    s.largest();
    return 0;
}