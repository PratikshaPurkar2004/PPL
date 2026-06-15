#include<iostream>
#include "Matrix.h"
using namespace std;

int main()
{
    Matrix m;
    m.input();
    m.setZeroes(m.mat);
    m.display();
}