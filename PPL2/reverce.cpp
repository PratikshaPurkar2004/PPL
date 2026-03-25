#include<iostream>
using namespace std;

class Reverse
{
    private:
        int n;
    public:
        void input()
        {
            cout<<"enter a num::";
            cin>>n;
        }
        int reverse()
        {
            int rev=0;
            while(n>0)
            {
                rev=rev*10+n%10;
                n=n/10;
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