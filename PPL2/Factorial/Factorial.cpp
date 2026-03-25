#include<iostream>
using namespace std;

class Factorial
{
    private:
        int n;
    public:
    int input()
    {
        cout<<"Enter an integer::";
        cin>>n;
    }
    int fact(int n)
    {
        if(n==0)
            return 1;
        return n*fact(n-1);
    }
    void display()
    {
        cout<<"Factorial="<<fact(n);
    }
};

int main()
{
    Factorial f;
    f.input();
    f.display();
    return 0;
}
