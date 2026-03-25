#include<iostream>
using namespace std;

class Fibonacci
{
    private:
        int a=0,b=1,c,n;
    public:
        void input()
        {
            cout<<"Enter a number::";
            cin>>n;
        }
        void fibonacci()
        {
            for(int i=0;i<n;i++)
            {
                c=a+b;
                a=b;
                b=c;
                cout<<a <<" ";
            }
        }
};

int main()
{
    Fibonacci f;
    f.input();
    f.fibonacci();
    return 0;
}