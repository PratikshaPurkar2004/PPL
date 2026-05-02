#include<iostream>
#include "reverse.h"
using namespace std;

int main()
{
    int num;
    Reverse r(num);
    r.input();
    cout<<"reversed number is::" <<r.reverseNum()<<endl;
    return 0;
}