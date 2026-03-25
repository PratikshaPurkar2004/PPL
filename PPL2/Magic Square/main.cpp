#include<iostream>
#include "MagicSquare.h"
using namespace std;

int main()
{
    int n;
    cout<<"Enter odd n:";
    cin>>n;

    if(n%2==0)
    {
        cout<<"Only odd number allowed!";
        return 0;
    }
    MagicSquare ms;
    ms.generate(n);
    ms.display(n);
    return 0;
}