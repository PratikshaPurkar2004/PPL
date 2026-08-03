#include<iostream>
using namespace std;

class Solution
{
    public:
        char ch;
        void input()
        {
            cout<<"Enter a character::";
            cin>>ch;
        }

        void findVowelConsonent()
        {
                if(ch=='a' || ch=='e' || ch=='i' || ch== 'o' || ch=='u')
                    cout<<"Vowels";
                else
                    cout<<"Consonent";
        }
};

int main()
{
    Solution s;
    s.input();
    s.findVowelConsonent();
    return 0;
}