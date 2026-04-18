#include<iostream>
#include "BaseConvertor.h"
using namespace std;
int main()
{
    int n,b;
    cout<<"enter num and base::";
    cin>>n >>b;
    BaseConvertor base(n,b);
    cout<<base.convert();
    return 0;
}
