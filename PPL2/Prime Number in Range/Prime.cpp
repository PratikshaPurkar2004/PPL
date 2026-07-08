#include<iostream>
using namespace std;

class Prime
{
    public:
        void input(int &start,int &end)
        {
            cout<<"Enter a Number::";
            cin>>start >>end;
        }

        void prime(int start,int end)
        {
            for(int n=start;n<=end;n++)
            {
                if(n<2)
                    continue;
                bool prime=true;
                for(int i=2;i*i<=n;i++)
                {
                    if(n%i==0)
                    {
                        prime= false;
                        break;
                    }
                }
                if(prime)
                    cout<<n <<" ";
            }
        }

};

int main()
{
    Prime p;
    int start,end;
    p.input(start,end);
    p.prime(start,end);
    return 0;
}