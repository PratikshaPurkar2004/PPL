#include<iostream>
using namespace std;

class Solution
{
    public:
        // char ch;
        // void input()
        // {
        //     cout<<"Enter a character::";
        //     cin>>ch;
        // }

        // void findVowelConsonent()
        // {
        //         if(ch=='a' || ch=='e' || ch=='i' || ch== 'o' || ch=='u')
        //             cout<<"Vowels";
        //         else
        //             cout<<"Consonent";
        // }

        string str;
        void input()
        {
            cout<<"Enter a string::";
            cin>>str;
        }
        void findVowelConsonent()
        {
            int v=0,c=0;
            for(int i=0;i<str.length();i++)
            {
                if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]== 'o' || str[i]=='u')
                    v++;
                else
                    c++;
            }
            cout<<"Vowels::"<<v<<endl;
            cout<<"Consonent::"<<c<<endl;
        }
};

int main()
{
    Solution s;
    s.input();
    s.findVowelConsonent();
    return 0;
}