#include<iostream>
using namespace std;

class Factorial
{
    private:
        int num;
    public:
    int input()
    {
        cout<<"Enter an integer::";
        cin>>num;
    }
    int fact(int num)
    {
        if(num==0)
            return 1;
        return num*fact(num-1);
    }
    void display()
    {
        cout<<"Factorial="<<fact(num);
    }
};

int main()
{
    Factorial f;
    f.input();
    f.display();
    return 0;
}
