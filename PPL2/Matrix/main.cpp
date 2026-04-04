#include<iostream>
#include "Matrix.h"
using namespace std;


int main()
{
    Matrix M1(2,2),M2(2,2);
    M1.input("input1.txt");
    M2.input("input2.txt");
    try{
        Matrix A=M1+M2;
        Matrix B=M1-M2;
        Matrix C=M1*M2;
        cout<<"Addition::\n";
        A.show();
        cout<<"subtraction::\n";
        B.show();
        cout<<"Multiplication::\n";
        C.show();
    }
    catch(const char*msg)
    {
        cout<<msg<<endl;
    }
    return 0;
}
