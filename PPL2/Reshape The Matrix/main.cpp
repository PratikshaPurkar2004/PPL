#include<iostream>
using namespace std;
#include "Matrix.h"

int main()
{
    Matrix m;
    m.input();
    m.reshape(2,3);
    m.display();
    return 0;
}