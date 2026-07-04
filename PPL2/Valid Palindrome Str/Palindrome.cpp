#include<iostream>
using namespace std;

class Palindrome
{
    public:
        void input(string &str)
        {
            cout<<"enter a string::";
            getline(cin,str);
        }

        bool isAlphaNum(char ch)
        {
            if((ch>='0' && ch<='9')|| (tolower(ch)>='a' && tolower(ch)<='z'))
                return true;
            return false;
        }

        bool isPlindrome(string str)
        {
            int start=0,end=str.length()-1;
            while(start<end)
            {
                if(!isAlphaNum(str[start]))
                {
                    start++;
                    continue;
                }
                if(!isAlphaNum(str[end]))
                {
                    end--;
                    continue;
                }
                if(tolower(str[start])!=tolower(str[end]))
                    return false;
                start++;
                end--;
            }
            return true;
        }
};


int main()
{
    string str;
    Palindrome p;
    p.input(str);
    if(p.isPlindrome(str))
        cout<<"Palindrome";
    else
        cout<<"Not Palindrome";
    return 0;
}