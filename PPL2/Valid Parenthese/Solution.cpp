#include<iostream>
#include<stack>
using namespace std;

class Solution
{
    string s;
    public:
        void input()
        {
            cout<<"Enter a string::";
            getline(cin,s);
        }
        bool validParentheses()
        {
            stack<char>stk;
            for(char ch:s)
            {
                if(ch=='(' || ch=='{' || ch=='[')
                    stk.push(ch);
                else
                {
                    if(stk.empty())
                        return false;
                    char top=stk.top();
                    stk.pop();
                    if((ch==')' && top!='(' )||(ch=='}' && top!='{') || (ch==']' && top!='['))
                        return false;
                }
            }
        }
};

int main()
{
    Solution s;
    s.input();
    if(s.validParentheses())
        cout<<"Valid Parentheses";
    else
        cout<<"Invalid-Parenthese";
    return 0;
}