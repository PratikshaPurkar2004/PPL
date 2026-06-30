#include<iostream>
using namespace std;

class String
{
    public:
        bool isAlphaNum(char ch)
        {
            if((ch>='0' && ch<='9')||(tolower(ch)>='a' && tolower(ch)<='z'))
                return true;
            return false;
        }

        bool isPalindrome(string str)
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
    cout<<"enter a string::";
    cin>>str;
    String s;
    if(s.isPalindrome(str))
        cout<<"palindrome";
    else
        cout<<"not palindrome";
    return 0;
}