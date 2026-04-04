#include<iostream>
#include<fstream>
#include "Matrix.h"
using namespace std;

Matrix::Matrix()
{
    rows=cols=2;
}

Matrix::Matrix(int r,int c)
{
    rows=r;
    cols=c;
}

Matrix::~Matrix()
{}

void Matrix::input(string filename)
{
    ifstream fin(filename);
    if(!fin)
        throw "File not found!";
    for(int i=0;i<rows;i++)
        for(int j=0;j<cols;j++)
            fin>>mat[i][j];
    fin.close();
}

Matrix Matrix::operator+(Matrix m)
{
    if(rows!=m.rows || cols!=m.cols)
        throw "Addition not possible";
    Matrix ans(rows,cols);
    for(int i=0;i<rows;i++)
        for(int j=0;j<cols;j++)
            ans.mat[i][j]=mat[i][j]+m.mat[i][j];
    return ans;
}

Matrix Matrix::operator-(Matrix m)
{
    if(rows!=m.rows || cols!=m.cols)
        throw "subtraction not possible";
    Matrix ans(rows,cols);
    for(int i=0;i<rows;i++)
        for(int j=0;j<cols;j++)
            ans.mat[i][j]=mat[i][j]-m.mat[i][j];
    return ans;
}

Matrix Matrix::operator *(Matrix m)
{
    if(cols!=m.rows)
        throw "Multiplication not possible";
    Matrix ans(rows,m.cols);
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<m.cols;j++)
        {
            ans.mat[i][j]=0;
            for(int k=0;k<cols;k++)
                ans.mat[i][j]+=mat[i][k]*m.mat[k][j];
        }
    }
    return ans;
}

void Matrix::show()
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
            cout<<mat[i][j] <<" ";
        cout<<endl;
    }
}