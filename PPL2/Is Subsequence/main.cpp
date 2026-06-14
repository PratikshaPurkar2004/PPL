#include "Subsequence.h"
#include<iostream>
using namespace std;

int main()
{
    string s,t;
    Subsequence sub;
    sub.input();
    if(sub.isSubsequence(sub.s,sub.t))
        cout<<"True";
    else
        cout<<"False";
    return 0;
}