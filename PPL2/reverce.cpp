#include<iostream>
using namespace std;

class Reverse
{
    private:
        int num;
    public:
        void input()
        {
            cout<<"enter a num::";
            cin>>num;
        }
        int reverse()
        {
            int rev=0;
            while(num>0)
            {
                rev=rev*10+num%10;
                num=num/10;
            }
            cout<<"Reverse No is::"<<rev;
            return rev;
        }
};


int main()
{
    Reverse r;
    r.input();
    r.reverse();
}