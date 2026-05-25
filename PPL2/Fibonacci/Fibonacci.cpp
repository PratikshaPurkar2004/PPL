#include<iostream>
using namespace std;

class Fibonacci
{
    private:
        int x=0,y=1,c,n;
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
                c=x+y;
                x=y;
                y=c;
                cout<<x <<" ";
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