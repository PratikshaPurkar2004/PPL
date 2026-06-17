#include<iostream>
#include "Matrix.h"
using namespace std;

void Matrix:: input()
{
    cout<<"enter the number of rows and columns::";
    cin>>rows>>cols;
    cout<<"enter the elements of the matrix::\n";
    for(int i=0;i<rows;i++)
        for(int j=0;j<cols;j++)
            cin>>mat[i][j];
}

void Matrix::display()
{
    cout<<"Matrix is:";
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
            cout<<mat[i][j]<<" ";
        cout<<"\n";
    }
}

bool Matrix::isToeplitz()
{
    for(int i=0;i<rows-1;i++)
        for(int j=0;j<cols-1;j++)
            if(mat[i][j]!=mat[i+1][j+1])
                return false;
    return true;
}