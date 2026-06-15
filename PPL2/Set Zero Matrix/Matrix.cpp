#include<iostream>
#include "Matrix.h"
using namespace std;    

void Matrix::input()
{
    cout<<"Enter the number of rows and columns: ";
    cin>>rows>>cols;
    cout<<"Enter the elements of the matrix: ";
    mat.resize(rows, vector<int>(cols));
    for(int i=0; i<rows; i++)
        for(int j=0;j<cols;j++)
            cin>>mat[i][j];
}

void Matrix::setZeroes(vector<vector<int>>&mat)
{
    int m=mat.size();
    int n=mat[0].size();
    vector<int> row(m,0);
    vector<int> col(n,0);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(mat[i][j]==0)
            {
                row[i]=1;
                col[j]=1;
            }
        }
    }
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            if(row[i]==1 || col[j]==1)
                mat[i][j]=0;
        
}

void Matrix::display()
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }
}