#include<iostream>
#include "Height.h"
using namespace std;

int main()
{
    Height h;
    h.input();
    cout<<"count=" <<h.heightChecker();
    return 0;
}