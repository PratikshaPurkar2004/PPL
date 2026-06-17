#include<iostream>
#include "Matrix.h"
using namespace std;

int main()
{
    Matrix m;
    m.input();
    if(m.isToeplitz())
        cout<<"The matrix is a Toeplitz matrix.\n";
    else
        cout<<"The matrix is not a Toeplitz matrix.\n";
    m.display();
    return 0;
}