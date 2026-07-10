#include<iostream>
using namespace std;

class Solution
{
    public:
        void input(string &str)
        {
            cout<<"enter a string::";
            getline(cin,str);
        }

        void removeSpaces(string str)
        {
            string ans="";
            for(char ch:str)
            {
                if(ch!=' ')
                    ans+=ch;
            }
            cout<<ans;
        }
};

int main()
{
    Solution e;
    string str;
    e.input(str);
    e.removeSpaces(str);
    return 0;
}