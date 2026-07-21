#include<iostream>
using namespace std;

class Solution
{
    string s;
    public:
    void input()
    {
        cout<<"Enter a string::";
        cin>>s;
    }
    int lengthOfLastWord()
    {
        int end=s.size()-1;
        while(s[end]==' ')
            end--;
        int start=end;
        while(start>=0 && s[start]!=' ')
            start--;
        return end-start;
    }
    // {
    //     int cnt=0;
    //     for(int i=s.size()-1;i>=0;i--)
    //     {
    //         if(s[i]==' ' && cnt>0)
    //             break;
    //         else if(s[i]!=' ')
    //             cnt++;
    //     }
    //     return cnt;
    //}
};

int main()
{
    Solution s;
    s.input();
    cout<<s.lengthOfLastWord()<<endl;
    return 0;
}
