#include<iostream>
#include<algorithm>
using namespace std;

class Solution
{
    string s,t;
    public:
        void input()
        {
            cout<<"Enter a first string::";
            getline(cin,s);
            cout<<"Enter a second string::";
            getline(cin,t);
        }

        bool anagrams()
        {
            sort(s.begin(),s.end());
            sort(t.begin(),t.end());
            if(s==t)
                return true;
            else
                return false;
        }
};

int main()
{
    Solution s;
    s.input();
    if(s.anagrams())
        cout<<"Anagrams";
    else
        cout<<"Not Anagrams";
}