#include<iostream>
#include<vector>
using namespace std;

class Solution 
{
    vector<string> str;
    public:
        void input()
        {
            cout<<"Enter the string: ";
            string s;
            getline(cin,s);
            str.push_back(s);
        }
        string longestCommonPrefix()
        {
            string ans="";
            int n=str.size();
            for(int i=0;i<str[0].size();i++)
            {
                char ch=str[0][i];
                for(int j=1;j<n;j++)
                {
                    if(str[j][i]!=ch)
                        return ans;
                }
                ans+=ch;
            }
            return ans;
        }
};

int main()
{
    Solution s;
    int n;
    cout<<"Enter the number of strings: ";
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++)
        s.input();
    cout<<s.longestCommonPrefix();
    return 0;
}