#include<iostream>
using namespace std;

class Solution 
{
    
    public:
        int n;
        void input()
        {
            cout<<"Enter the number of versions: ";
            cin>>n;
        }
        bool isBadVersion(int version)
        {
            if(version>=4)
                return true;
            return false;
        }
        int firstBadVersion(int n) 
        {
            int low=1,high=n;
            while(low<high)
            {
                int mid=low+(high-low)/2;
                if(isBadVersion(mid))
                    high=mid;
                else
                    low=mid+1;
            }
            return low;
        }

};

int main()
{
    Solution s;
    s.input();
    cout<<s.firstBadVersion(s.n)<<endl;
    return 0;
}