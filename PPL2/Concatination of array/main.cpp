#include<iostream>
#include "ConcatinationOfArray.h"
using namespace std;

int main()
{
    
    ConcatinationOfArray c;
    c.input();
    vector<int>ans=c.getConcatenation();
    for(int x : ans)
    {
        cout << x << " ";
    }

    return 0;
}